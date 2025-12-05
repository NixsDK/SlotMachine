#include "Symbol.h"

using namespace std;

int symbolTypeToPayoutMultiplier(SymbolType value) // Returns the payout multiplier for a given symbol type
{
    switch (value) {
        case SymbolType::Cherry: return 3;
        case SymbolType::Lemon: return 5;
        case SymbolType::Orange: return 8;
        case SymbolType::Plum: return 12;
        case SymbolType::Bar: return 15;
        case SymbolType::Seven: return 20;

        default: return 0;
    }
}

// Calculates payout based on 3 symbol results and bet amount
int calculatePayout(const vector<SymbolType>& result, int bet){ 

    if (result.size() !=3){
        return 0;
    }
    SymbolType symbol1 = result[0];
    SymbolType symbol2 = result[1];
    SymbolType symbol3 = result[2];

    int payout = 0; 
// PAYOUT CALCULATION RULES:
// All 3 symbols match: full payout (bet * symbol multiplier)
// Positions 1&2 match: half payout (bet * symbol multiplier / 2)
// Positions 2&3 match: quarter payout (bet * symbol multiplier / 4)
// No match: payout is 0
//CHERRY
    if (symbol1 == SymbolType::Cherry && symbol2 == SymbolType::Cherry && symbol3 == SymbolType::Cherry)
    {
        payout = bet * symbolTypeToPayoutMultiplier(SymbolType::Cherry);
    }
    else if (symbol1 == SymbolType::Cherry && symbol2 == SymbolType::Cherry && symbol3 != SymbolType::Cherry)
    {
        payout = bet * (symbolTypeToPayoutMultiplier(SymbolType::Cherry) /2); 
    }
    else if (symbol2 == SymbolType::Cherry && symbol3 == SymbolType::Cherry)
    {
        payout = bet * (symbolTypeToPayoutMultiplier(SymbolType::Cherry) /4);
    }

    //LEMON
    if (symbol1 == SymbolType::Lemon && symbol2 == SymbolType::Lemon && symbol3 == SymbolType::Lemon)
    {
        payout = bet * symbolTypeToPayoutMultiplier(SymbolType::Lemon);
    }
    else if (symbol1 == SymbolType::Lemon && symbol2 == SymbolType::Lemon && symbol3 != SymbolType::Lemon)
    {
        payout = bet * (symbolTypeToPayoutMultiplier(SymbolType::Lemon) /2);
    }
    else if (symbol2 == SymbolType::Lemon && symbol3 == SymbolType::Lemon)
    {
        payout = bet * (symbolTypeToPayoutMultiplier(SymbolType::Lemon) /4);
    }

    //ORANGE
    if (symbol1 == SymbolType::Orange && symbol2 == SymbolType::Orange && symbol3 == SymbolType::Orange)
    {
        payout = bet * symbolTypeToPayoutMultiplier(SymbolType::Orange);
    }
    else if (symbol1 == SymbolType::Orange && symbol2 == SymbolType::Orange && symbol3 != SymbolType::Orange)
    {
        payout = bet * (symbolTypeToPayoutMultiplier(SymbolType::Orange) /2);
    }
    else if (symbol2 == SymbolType::Orange && symbol3 == SymbolType::Orange)
    {
        payout = bet * (symbolTypeToPayoutMultiplier(SymbolType::Orange) /4);
    }


    //PLUM
    if (symbol1 == SymbolType::Plum && symbol2 == SymbolType::Plum && symbol3 == SymbolType::Plum)
    {
        payout = bet * symbolTypeToPayoutMultiplier(SymbolType::Plum);
    }
    else if (symbol1 == SymbolType::Plum && symbol2 == SymbolType::Plum && symbol3 != SymbolType::Plum)
    {
        payout = bet * (symbolTypeToPayoutMultiplier(SymbolType::Plum) /2);
    }
    else if (symbol2 == SymbolType::Plum && symbol3 == SymbolType::Plum)
    {
        payout = bet * (symbolTypeToPayoutMultiplier(SymbolType::Plum) /4);
    }


    //BAR
    if (symbol1 == SymbolType::Bar && symbol2 == SymbolType::Bar && symbol3 == SymbolType::Bar)
    {
        payout = bet * symbolTypeToPayoutMultiplier(SymbolType::Bar);
    }
    else if (symbol1 == SymbolType::Bar && symbol2 == SymbolType::Bar && symbol3 != SymbolType::Bar)
    {
        payout = bet * (symbolTypeToPayoutMultiplier(SymbolType::Bar) /2);
    }
    else if (symbol2 == SymbolType::Bar && symbol3 == SymbolType::Bar)
    {
        payout = bet * (symbolTypeToPayoutMultiplier(SymbolType::Bar) /4);
    }


    //SEVEN
    if (symbol1 == SymbolType::Seven && symbol2 == SymbolType::Seven && symbol3 == SymbolType::Seven)
    {
        payout = bet * symbolTypeToPayoutMultiplier(SymbolType::Seven);
    }
    else if (symbol1 == SymbolType::Seven && symbol2 == SymbolType::Seven && symbol3 != SymbolType::Seven)
    {
        payout = bet * (symbolTypeToPayoutMultiplier(SymbolType::Seven) /2);
    }
    else if (symbol2 == SymbolType::Seven && symbol3 == SymbolType::Seven)
    {
        payout = bet * (symbolTypeToPayoutMultiplier(SymbolType::Seven) /4);
    }
     return payout;
    }
