#include "UIList.h"

std::string UIList::getName()
{
    std::cout << "Please enter your name: ";
    std::cin >> name;
    return name;
}

void UIList::displayList(std::vector<std::string> list)
{
    std::cout << name << "list: " << std::endl;

    for (int listIndex = 0; listIndex < list.size(); ++listIndex)
    {
        std::cout << listIndex + 1 << ".. " << list[listIndex] << std::endl;
    }
}
