#pragma once

#include "Symbol.h"
#include<vector>
#include<random>

using namespace std;

// Represents one slot machine reel that stores symbol list and can spin to get random symbol
class Reel{
private:
    vector<SymbolType> symbols; // All symbols that can appear
public: // AI generated public section
    Reel(); // Initializes available symbols
    SymbolType spin(mt19937 & rng) const; // Uses mt19937 RNG to select random symbol from reel
};
