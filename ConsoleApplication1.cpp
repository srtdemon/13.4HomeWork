#include <iostream>
#include "Helpers.h"
#include <iomanip>
#include <string>

int main()
{
    std::cout << "Enrer your name";
    std::string name;
    std::getline(std::cin, name);
    int Size = name.length();
    std::cout << "Your name is " << name << ". Name length is " << Size << ". First letter is " << name[0] << ". Last letter is " << name[Size-1];
    return 0;
}