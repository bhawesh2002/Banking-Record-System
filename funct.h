#include <iostream>
#include <string>
void get_info()  //A function that requests general information from the user
{
    std::string name;
    int age;
    std::string address;
    std::string city;
    std::string state;
    int pincode;

    std::cout << "Enter your name: ";
    getline(std::cin, name);
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Enter your address: ";
    std::cin.ignore();
    getline(std::cin, address);
    std::cout << "Enter your city: ";
    getline(std::cin, city);
    std::cout << "Enter your state: ";
    getline(std::cin, state);
    std::cout << "Enter your pincode: ";
    std::cin >> pincode;
}