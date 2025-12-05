#include "Symbol.h"  
#include <string>
#include <limits>
#include <iostream>

using namespace std;

// Converts SymbolType value to text string
string symbolTypeToString(SymbolType value){
    switch (value){
        case SymbolType::Cherry: return "CHERRY";
        case SymbolType::Lemon: return "LEMON";
        case SymbolType::Orange: return "ORANGE";
        case SymbolType::Plum: return "PLUM";
        case SymbolType::Bar: return "BAR";
        case SymbolType::Seven: return "SEVEN";
        default: return "UNKNOWN";  
    }
}
// Reads integer from input with validation
int readInt(const string & prompt){
    int value;

    while (true){
        cout << prompt;
        cin >> value;

        if (cin.good()){
            cin.ignore();
            return value;
        }
        else{
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Hmmm... that doesn't look like number. Try again!\n";
        }
    }
}
// Reads number within specified range (min-max), prompts again if out of range
int readIntInRange(const string & prompt, int min, int max){
    while(true){
        int value = readInt(prompt);

        if(value >= min && value <= max){
            return value;
        }
        else{ 
            cout << "Hmmm... not quite the number I was thinking of.\n"; 
            cout << "Try choosing a number thats between "<< min << " and " << max << ". Please try again!\n";
        }
    }
}
// Empty input is rejected, prompts again until valid input received
string readNonEmptyString(const string & prompt){
    string input;

    while(true){
        cout << prompt;
        getline(cin, input);

        if(!input.empty()){
            return input;
        }
        else{
            cout << "OHHHH NOOO the cookie jar is empty :( ! Please drop a number in there.\n";
        }
    }
}

    
        
