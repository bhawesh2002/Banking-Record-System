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

    ofstream data("info.txt", ios::out); // creation of ofstream obj to store general info in "info.txt"

    // Requesting general information from the user
    // Name
    std::cout << "Enter your name: ";
    getline(std::cin, name);
    data << "Name: " << name << endl;
    // Age
    std::cout << "Enter your age: ";
    std::cin >> age;
    data << "Age: " << age << endl;
    // Address
    std::cout << "Enter your address: ";
    std::cin.clear();
    std::cin.ignore();
    getline(std::cin, address);
    data << "Address: " << address << endl;
    // City
    std::cout << "Enter your city: ";
    getline(std::cin, city);
    data << "City: " << city << endl;
    // State
    std::cout << "Enter your state: ";
    getline(std::cin, state);
    data << "State: " << state << endl;
    // Pincode
    std::cout << "Enter your pincode: ";
    std::cin >> pincode;
    data << "Pincode: " << pincode << endl;
    // Phone number
    std::cout << "Enter your phone number: ";
    std::cin >> phone_num;
    data << "Phone Number: " << phone_num << endl;
    // Email
    std::cout << "Enter your email: ";
    std::cin.clear();
    std::cin.ignore();
    getline(std::cin, email);
    data << "Email: " << email << endl;

    data.close(); // close the info.txt file;
}