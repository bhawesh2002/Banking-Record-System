#include <iostream>
#include <string>
#include <fstream>

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

    std::ofstream datafile("data.txt");

    // Requesting general information from the user
    // Name 
    std::cout << "Enter your name: ";
    getline(std::cin, name);
    datafile << "Name: " << name << std::endl;
    // Age
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cin.ignore();
    datafile << "Age: " << age << std::endl;
    // Address
    std::cout << "Enter your address: ";
    getline(std::cin, address);
    datafile << "Address: " << address << std::endl;
    // City
    std::cout << "Enter your city: ";
    getline(std::cin, city);
    datafile << "City: " << city << std::endl;
    // State
    std::cout << "Enter your state: ";
    getline(std::cin, state);
    datafile << "State: " << state << std::endl;
    // Pincode
    std::cout << "Enter your pincode: ";
    std::cin >> pincode;
    datafile << "Pincode: " << pincode << std::endl;
    std::cin.ignore();
    // Phone number
    std::cout << "Enter your phone number: ";
    std::cin >> phone_num;
    std::cin.ignore();
    datafile << "Phone number: " << phone_num << std::endl;
    // Email
    std::cout << "Enter your email: ";
    std::cin.ignore();
    getline(std::cin, email);
    datafile << "Email: " << email << std::endl;

    datafile.close();
}