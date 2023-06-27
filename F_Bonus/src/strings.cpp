#include "strings.hpp"
#include <algorithm>
#include <cctype>
#include <iterator>
#include <set>
#include <list>

size_t countAbc(const std::string& input) {
    return std::count_if(input.begin(), input.end(), [](unsigned char c){
        return std::isalpha(c);
    });
}

std::map<char, size_t> countIndividual(const std::string& input) {
    std::map<char, size_t> counts;
    for (char c : input) {
        if (std::isalpha(c)) {
            char lowercaseChar = std::tolower(c);
            counts[lowercaseChar]++;
        }
    }
    return counts;
}

SymbolCounter::SymbolCounter(std::initializer_list<char> lst) : symbols(lst) {}

bool SymbolCounter::operator()(char c) const {
    return std::find(symbols.begin(), symbols.end(), c) != symbols.end();
}

std::list<char> usedSymbols(const std::string& input) {
    std::set<char> uniqueSymbols;
    for (char c : input) {
        if (std::isalpha(c)) {
            char lowercaseChar = std::tolower(c);
            uniqueSymbols.insert(lowercaseChar);
        }
    }
    return std::list<char>(uniqueSymbols.begin(), uniqueSymbols.end());
}
