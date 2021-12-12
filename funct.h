#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void get_info() // A function that requests general information from the user
{
    std::string name;
    int age;
    std::string address;
    std::string city;
    std::string state;
    int pincode;
    int phone_num;
    std::string email;

    ofstream data("info.txt",i);

    // Requesting general information from the user
    // Name
    std::cout << "Enter your name: ";
    getline(std::cin, name);
    data << name << endl;
    // Age
    std::cout << "Enter your age: ";
    std::cin >> age;
    // Address
    std::cout << "Enter your address: ";
    std::cin.clear();
    std::cin.ignore();
    getline(std::cin, address);
    // City
    std::cout << "Enter your city: ";
    getline(std::cin, city);
    // State
    std::cout << "Enter your state: ";
    getline(std::cin, state);
    // Pincode
    std::cout << "Enter your pincode: ";
    std::cin >> pincode;
    // Phone number
    std::cout << "Enter your phone number: ";
    std::cin >> phone_num;
    // Email
    std::cout << "Enter your email: ";
    std::cin.clear();
    std::cin.ignore();
    getline(std::cin, email);
    data.close();

}