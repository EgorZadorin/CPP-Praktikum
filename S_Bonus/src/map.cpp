#include "map.hpp"
#include <string>
#include <vector>
#include <stdexcept>
#include <algorithm>

cppp::Map::Map(const std::size_t size) : size(size) {
    arr.resize(size);
}

void cppp::Map::insert(const std::string& key, const std::vector<Item>& order) {
    size_t hash = calcHash(key);
    MapElement map_el = {key, order};
    if (arr[hash].empty()) {
        arr[hash].push_back(map_el);
    } else {
        bool contains_key = false;
        for (auto &i : arr[hash]) {
            if (i.key == key) {
                i.value = order;
                contains_key = true;
                break;
            }
        }
        if (!contains_key) {
            arr[hash].push_back(map_el);
        }
    }
}

std::vector<cppp::Item> cppp::Map::get(const std::string& key) {
    size_t hash = calcHash(key);
    if (!arr[hash].empty()) {
        for (auto &i : arr[hash]) {
            if (i.key == key) {
                return i.value;
            }
        }
        throw std::invalid_argument("Bucket für den entsprechenden Hash enthält kein Element mit diesem Schlüssel");
    } else {
        throw std::invalid_argument("Bucket für den entsprechenden Hash ist leer");
    }
}

void cppp::Map::remove(const std::string& key) {
    size_t hash = calcHash(key);
    if (!arr[hash].empty()) {
        int i;
        for (i = 0; i < arr[hash].size(); ++i) {
            if (arr[hash][i].key == key) {
                break;
            }
        }
        if (i < arr[hash].size()) {
            arr[hash].erase(arr[hash].begin() + i);
        }
    }
}

std::size_t cppp::Map::calcHash(const std::string& key) {
    int sum = 0;
    for (char const& i : key) {
        sum += i;
    }
    return (std::size_t) sum % size;
}
