#include "Player.h"
#include <iostream>     
#include <string>
#include <iomanip> //Ai added this library for formatting numbers


using namespace std;
// Default player statistics shown at end of game
Player::Player(){
    name = "";
    credits = 100;
    currentBet = 0;
    totalSpins = 0;
    totalBet = 0;
    totalWon = 0;
    biggestWin = 0;
}

void Player::setAmount(){

}
void Player::setBettingAmount(){

}
void Player::displayMessageAfterPlay(const bool isWin){
    if(isWin == true){
        cout << "Congrats you Won! Keep playing to win bigger bets :)" << endl;
    }
    else{
        cout << "Not your lucky day... House always wins :)" << endl;
    }
}
string Player::getName() const{
    return name;
}
double Player::getCredits() const{
    return credits;
}
void Player::setName(const string & newName){
    name = newName;
}
bool Player::canBet(int bet) const{
    // Check if bet is valid (positive and within available credits)
    if( bet > 0 && bet <= credits){
        return true;
    }
    else{
        return false;
    }
}
void Player::applyRound(int bet, int payout){
    credits = credits - bet + payout;
    totalSpins++;
    totalBet += bet;
    totalWon += payout;

    // Update biggest win if current payout is larger
    if(payout > biggestWin){
        biggestWin = payout;
    }
}
void Player::printStats() const{
    cout << " Player Statistics " << endl;
    cout << "Name: " << name << endl;
    cout << fixed << setprecision(0); // Formats numbers as whole numbers (prevents scientific notation).  AI added this code for formatting numbers cause without iomanip it would show numbers in scientific notation
    cout << "Credits: " << credits << endl;
    cout << "Total Spins: " << totalSpins << endl;
    cout << "Total Bet: " << totalBet << endl;
    cout << "Total Won: " << totalWon << endl;
    cout << "Biggest Win: " << biggestWin << endl;
}
