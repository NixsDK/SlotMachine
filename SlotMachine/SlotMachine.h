#pragma once
#include "Reel.h"
#include "Symbol.h"
#include<vector>
#include<random>

using namespace std;

// Slot machine class
class SlotMachine{

    private:
        vector<Reel> reels; // All reels that spin each round
        mt19937 rng;


    public:
        SlotMachine(); // Initializes slot machine
        vector<SymbolType> spinOnce(); // Spins all reels once and returns resulting symbols
        int evaluate(const std::vector<SymbolType>& result, int bet) const; // Calculates payout for specific result and bet
        void printResult(const std::vector<SymbolType>& result) const; // Prints spin result
};
