#include "food.hpp"
#include <fstream>
#include <sstream>
#include <string>
#include <stdexcept>

Food::Food(int bestellnummer, std::string bezeichnung, float preis) : bestellnr(bestellnummer), bezeichnung(bezeichnung), preis(preis) {}

std::string Food::getBezeichnung() const {
    return bezeichnung;
}

float Food::getPreis() const {
    return preis;
}

int Food::getBestellnummer() const {
    return bestellnr;
}

void speichern(const std::string& dateiname, const std::vector<Food>& speisen) {
    std::ofstream datei(dateiname);
	
	for(const auto& speise : speisen){
		datei	<< speise.getBestellnummer()<<";"
				<< speise.getBezeichnung()<<";"
				<< speise.getPreis()<<std::endl;
		}
		
	datei.close();
}

void laden(const std::string& dateiname, std::vector<Food>& speisen) {
	std::ifstream datei(dateiname);

	if (!datei.is_open()) {
		throw std::runtime_error("Datei konnte nicht geöffnet werden");
	}
	speisen.clear();
	
	std::string zeile;
    while (std::getline(datei, zeile)) {
        std::istringstream ss(zeile);
        std::string bestellnr_str, bezeichnung, preis_str;

        if (!std::getline(ss, bestellnr_str, ';') ||
            !std::getline(ss, bezeichnung, ';') ||
            !std::getline(ss, preis_str)) {
            throw std::runtime_error("Ungültiges Format der CSV-Datei");
        }
		
		datei.close();
    }
}
