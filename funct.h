#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void get_info() // A function that requests general information from the user
{
    string name;
    int age;
    string address;
    string city;
    string state;
    int pincode;
    int phone_num;
    string email;

    ofstream data("files/info.txt", ios::out); // creation of ofstream obj to store general info in "info.txt"

    // Requesting general information from the user
    // Name
    cout << "Enter your name: ";
    getline(cin, name);
    data << "Name: " << name << endl;
    // Age
    cout << "Enter your age: ";
    cin >> age;
    data << "Age: " << age << endl;
    // Address
    cout << "Enter your address: ";
    cin.clear();
    cin.ignore();
    getline(cin, address);
    data << "Address: " << address << endl;
    // City
    cout << "Enter your city: ";
    getline(cin, city);
    data << "City: " << city << endl;
    // State
    cout << "Enter your state: ";
    getline(cin, state);
    data << "State: " << state << endl;
    // Pincode
    cout << "Enter your pincode: ";
    cin >> pincode;
    data << "Pincode: " << pincode << endl;
    // Phone number
    cout << "Enter your phone number: ";
    cin >> phone_num;
    data << "Phone Number: " << phone_num << endl;
    // Email
    cout << "Enter your email: ";
    cin.clear();
    cin.ignore();
    getline(cin, email);
    data << "Email: " << email << endl;

    data.close(); // close the info.txt file;
}

string get_username() // A function that requests username from the user
{
    string username;
    cout << "Enter the username you want to use for your account: ";
    getline(cin, username);
    return username;
}
string get_password() // A function that requests password from the user
{
    string password;
    cout << "Enter your password: ";
    getline(cin, password);
    return password;
}

void set_cred() // A function that writes credentials entered by the user
{
    string password;
    string confirm_password;

    ofstream cred("files/cred.txt", ios::out); // creation of ofstream obj to store credentials in "cred.txt"

    // Requesting credentials from the user
    // Username
    cred << "Username: " << get_username() << endl;
    // Confirm password
    password = get_password();
    cout << "Confirm your password: ";
    getline(cin, confirm_password);
    while (confirm_password != password) // if the password and confirm password do not match, ask the user to re-enter the password
    {
        cout << "Password does not match. Please re-enter your password: ";
        getline(cin, confirm_password);
    }
    cred << "Password: " << confirm_password << endl;
}

void gen_acc_no() // a function which will generate a 10 digit account number
{
    int first_7 = 2008218;
    int last_3 = rand() % 1000;
    ofstream acc_no_file("files/acc_no.txt", ios::out); // creation of ofstream obj to store account number in "acc_no.txt"
    acc_no_file << "Account no: " << first_7 << last_3 << endl;
}