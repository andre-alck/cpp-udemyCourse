/*
Author: André S. A. de Carvalho
Program description:
	Asks the user if he wants to change the password.
		If he wants it {
			Inserts a message informing that the user decided to change the password;
			
            Asks the passoword and, if it's right, the program will wait for the user to insert the new password;
		}

		If he doesn't want it {
			Inserts a message informing that the user decided to not change the password.
		}
		
    The program quits.
*/

#include <cstring>
#include <iostream>
#include <stdio.h>
#include <string>
#include <ostream>

using std::cin;
using std::cout;
using std::endl;
using std::flush;
using std::string;

/*
The original password the user should know (in case he wants to change it) is "pass123".
*/
string password = "pass123";

/*
Prototyping the passwordManipulation() function.
*/
void passwordManipulation(string input);

int main(void)
{
    cout << "Would you like to change the password?" << endl
         << endl;

    cout << "Yes (y)" << endl;
    cout << "No (n)" << endl
         << endl;

    /*
    The user decision is stored in an string variable to be able to use the getline function, this way there won't be any problem with white spaces.
    */
    cout << "Enter your selection: " << flush;
    string userSelection;
    getline(cin, userSelection);

    passwordManipulation(userSelection);

    cout << endl
         << "Quitting application..." << flush;

    getchar();
    return EXIT_SUCCESS;
}

void passwordManipulation(string input)
{
    if (input == "y")
    {
        cout << "You have chosen to change the password." << endl
             << endl;

        /*
        Again, a new string variable is created so there won't be any problems with white spaces.
	    If the user types a wrong password, the while loop will ensure that he won't be able to proceed withou knowing the right password.
        */
        string userPassword;
        while (userPassword != password)
        {
            cout << "Insert the password: " << flush;
            getline(cin, userPassword);
            cout << flush;
        }

        cout << endl
             << "Insert the new password: " << flush;
        getline(cin, password);
        cout << "The new password is: " << password << endl;
    }
    else if (input == "n")
    {
        cout << "You have chosen to not change the password." << endl;
    }
}