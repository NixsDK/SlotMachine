#pragma once

#include <string>
#include <vector>


// Possible symbol types
enum class SymbolType {
    Cherry,
    Lemon,
    Orange,
    Plum,
    Bar,
    Seven
};

std::string symbolTypeToString(SymbolType value); // Converts symbol to readable text
int symbolTypeToPayoutMultiplier(SymbolType value); // Returns symbol's payout multiplier
int calculatePayout(const std::vector<SymbolType>& result, int bet); // Calculates total payout based on 3 symbol result, bet, and game rules (3 matching, 2 matching, etc.)