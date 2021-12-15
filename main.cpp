#include <iostream>
#include "funct_definations.h" // for function defination

int main()
{
    cout << "Welcome to \"GIT BANK\"\n"
         << "Thank you for choosing us\n";                       // Message to greet the user
    cout << "Let's start by getting some general information\n"; // instructions to the user
    //get_info();                                                  // function call to get general information
    cout << "Now it's time to set uid and password\n";          // instructions to the user
    set_cred();                                                  // function call to set the credentials
    return 0;
}