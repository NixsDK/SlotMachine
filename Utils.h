#pragma once
#include <string>
#include "Symbol.h" 

std::string symbolTypeToString(SymbolType value); // Converts symbol to readable text
int readInt(const std::string& prompt); // Reads integer from console
int readIntInRange(const std::string& prompt, int min, int max); // Reads number within specified range (min-max)
std::string readNonEmptyString(const std::string& prompt); // Empty input is rejected

