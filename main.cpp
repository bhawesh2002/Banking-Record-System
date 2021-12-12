#include <iostream>
#include "funct_definations.h" // for function defination

int main()
{
    std::cout << "Welcome to \"GIT BANK\"\n"
              << "Thank you for choosing us\n";                       // Message to greet the user
    std::cout << "Let's start by getting some general information\n"; // instructions to the user
    get_info();                                                       // function call
    return 0;
}