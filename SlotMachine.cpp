#include "SlotMachine.h"
#include "Reel.h"
#include "Utils.h"
#include <vector>
#include <random>
#include <iostream>

using namespace std;


SlotMachine::SlotMachine(){ // AI generated constructor
    random_device rd; // Creates random seed from <random> library
    rng = mt19937(rd());

    reels.push_back(Reel());
    reels.push_back(Reel());
    reels.push_back(Reel());
}
// Spins all reels once and returns 3 symbol results
vector<SymbolType> SlotMachine::spinOnce(){
    vector<SymbolType> result;

    if (reels.size() >= 1) {
        result.push_back(reels[0].spin(rng));
    }
    if (reels.size() >= 2) {
        result.push_back(reels[1].spin(rng));
    }
    if (reels.size() >= 3) {
        result.push_back(reels[2].spin(rng));
    }

    return result;
}
// Calls calculatePayout function to calculate winnings based on result and bet
int SlotMachine::evaluate(const vector<SymbolType>& result, int bet) const{  // AI generated function
    return calculatePayout(result, bet);
}
// Prints spin result, e.g., [Cherry] [Cherry] [Cherry]
void SlotMachine::printResult(const vector<SymbolType>& result) const{

        if (result.size() >= 1){
            cout << "[" << symbolTypeToString(result[0]) << "] ";
        }
        if (result.size() >= 2){
            cout << "[" << symbolTypeToString(result[1]) << "] ";
        }
        if (result.size() >= 3){
            cout << "[" << symbolTypeToString(result[2]) << "] ";
        }
        cout << endl;
        return;
    }