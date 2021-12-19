#include <iostream>
#include "funct_definations.h" // for function defination

int main()
{
    cout << "Welcome to \"GIT BANK\"\n"
         << "Thank you for choosing us\n"; // Message to greet the user
    int opt;
    do
    {
        cout << "You are a:"
             << "\n"
             << "1)Registered user\n2)New user\n3)Exit"; // Message to ask the user to choose the type of account
        cout << "\nEnter your choice: ";
        cin >> opt;
        switch (opt)
        {
        case 1:
        {
            tranction_info(); // Calling the function tranction_info()
        }
        break; // break the switch case
        case 2:
        {
            cout << "Let's start by getting some general information\n";              // instructions to the user
            cin.clear();                                                              // clear the input buffer
            cin.ignore();                                                             // ignore the input buffer
            get_info();                                                               // function call to get general information
            cout << "Now it's time to set uid and password to access your account\n"; // instructions to the user
            set_cred();                                                               // function call to set the credentials
            gen_acc_no();
            cout << "Aaccount created successfully\n";
        }
        break; // break the switch case
        /*default:
        {
            cout << "Invalid option\n";
            cout << "Please try again\n";
        }
        break; // break the switch case*/
        }
    } while (opt != 3);
    cout << "Thank you for using our services\n";

    return 0;
}