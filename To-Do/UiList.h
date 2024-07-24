#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <iostream>

class UIList
{
public: 

	std::vector<std::string> testVector; 
	std::string getName();
	void displayList(std::vector<std::string> list);

private:
	std::string name;
};

