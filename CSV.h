#pragma once
#include <string>
#include "Fraction.h"

class CSV {
	std::string gameFile;
public:
	void setGameFile();
	void read_CSV();
	CSV();
	CSV(const std::string& gameFile);
	//CSV(const CSV& C);
	//CSV& operator=(const CSV& C);
	//CSV(CSV&& C);
	//CSV& operator=(CSV&& C);
	~CSV();
};
