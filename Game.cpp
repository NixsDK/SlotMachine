#include "Game.h"
#include "Player.h"
#include "SlotMachine.h"
#include "Utils.h"
#include <string>    
#include <iostream>

using namespace std;
// Prevents empty input and saves player name
Game::Game(){
    string name = readNonEmptyString("Enter your name: ");
    player.setName(name);
}
// Main game loop
void Game::RUN(){
    cout << "Welcome to the Silicon Valley  where you challenge your luck!\n";
    cout << "Good luck soldier: " << player.getName() << ". You start with: " <<  player.getCredits() << " may the odds be in your favor\n";

    // Keep playing rounds until player quits or runs out of credits
    do{
        cout << "============\n";
        cout << "You have " << player.getCredits() << " credits left\n";
        playRound();
    }
    while(Continue());

    player.printStats();
    cout << "\nThanks for participation\n";

}
void Game::playRound(){
    int bet = readIntInRange("Enter the amount you want to bet: ", 1, 1000000);

    if (!player.canBet(bet)){
        cout << "Sorry your to broke to bet this much. Please try different amount.\n";
        return;
    }

    string Entry;
    cout << "\nTry your luck and spin the wheel (press Enter to spin): ";
    getline(cin, Entry);
    auto result = slotMachine.spinOnce();

    int payout = slotMachine.evaluate(result, bet);

    player.applyRound(bet, payout);
    player.displayMessageAfterPlay(payout > 0);

    if (payout > 0){
        cout << "You have won: " << payout << " credits \n";
    }
    slotMachine.printResult(result);

}

bool Game::Continue(){
    double credits = player.getCredits();

    if(credits <= 0){
        cout << "Sorry no money left to gamble\n";
        return false;
    }
    // Loop until valid yes/no answer is received
    while(true){
        string answer;
        cout << "Play again? (yes/no): ";
        getline(cin, answer);
        if(answer == "No" ||answer == "no" || answer == "n"){
            return false;
        }
        if(answer == "Yes" || answer == "yes" || answer == "y"){
            cout << "Lets keep gambling\n";
            return true;
        }
        cout << "Please enter only 'yes' or 'no': ";
    }
}