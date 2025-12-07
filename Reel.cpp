#include "Reel.h"
#include<vector>
#include<random>
#include<iostream>

using namespace std;

// Stores symbol list and allows spinning to get a random symbol
Reel::Reel(){

    symbols.push_back(SymbolType::Cherry);
    symbols.push_back(SymbolType::Lemon);
    symbols.push_back(SymbolType::Orange);
    symbols.push_back(SymbolType::Plum);
    symbols.push_back(SymbolType::Bar);
    symbols.push_back(SymbolType::Seven);
}

//AI generated function
// Uses <random> uniform_int_distribution with mt19937 RNG for fair random selection
SymbolType Reel::spin(mt19937 & rng) const{

    uniform_int_distribution<int> distribution(0, symbols.size()-1);
    int randomSymbol = distribution(rng);
    return symbols[randomSymbol];
}