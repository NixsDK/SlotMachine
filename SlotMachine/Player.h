#pragma once

#include <string>

using namespace std;

// Stores player information and statistics during the game
class Player{
    
    private:
        string name;
        double credits;
        double currentBet;
        int totalSpins;
        double totalBet;
        double totalWon;
        double biggestWin;
        

    public:
        Player();
        void setAmount();
        void setBettingAmount();
        void displayMessageAfterPlay(const bool isWin);

        string getName() const;
        double getCredits() const;
        void setName(const string & newName);
        bool canBet(int bet) const;
        void applyRound(int bet, int payout);
        void printStats() const; 


};
