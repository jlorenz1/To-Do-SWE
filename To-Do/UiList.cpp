#include "UIList.h"

std::string UIList::getName()
{
    std::cout << "Please enter your name: ";
    std::cin >> name;
    return name;
}

void UIList::displayList(std::vector<std::string> list)
{
}
