#include "map.hpp"
#include <string>
#include <vector>
#include <stdexcept>
#include <algorithm>

cppp::Map::Map(const std::size_t size) : size(size) {
    arr.reserve(size);
}

void cppp::Map::insert(const std::string& key, const std::vector<Item>& order) {
    // TODO
}

std::vector<cppp::Item> cppp::Map::get(const std::string& key) {
    return {}; // TODO
}

void cppp::Map::remove(const std::string& key) {
    // TODO
}

std::size_t cppp::Map::calcHash(const std::string& key) {
    int sum = 0;
    for (char const& i : key) {
        sum += i;
    }
    return (std::size_t) sum % size;
}
