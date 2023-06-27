#include <cctype>
#include <cstddef>
#include "strings.hpp"
#include "numerik.hpp"
#include <initializer_list>
#include <iostream>
#include <iterator>
#include <ostream>
#include <string>
#include <algorithm>
#include <cmath>

int main(int argc, char** argv) {
    std::string text = "Hallo, Welt! Dies ist ein Test.";
    std::cout << "Die Anzahl der Buchstaben ist: " << countAbc(text) << '\n';

    auto counts = countIndividual(text);
    for (auto const& pair : counts) {
        std::cout << pair.first << ": " << pair.second << '\n';
    }

    std::string text2 = "Hallo, Welt! Dies ist ein Test. $$$$AA";
    SymbolCounter sc({'a', 'A', '$'});
    size_t anzahl = std::count_if(text2.begin(), text2.end(), sc);
    std::cout << "Die Anzahl der spezifizierten Symbole ist: " << anzahl << '\n';

    auto symbols = usedSymbols(text);
    for (char c : symbols) {
        std::cout << c << '\n';
    }

    return 0;
}
