// Author: Maddison Kiefer
//
// Program: Telephone Numbers
// This program will take a string input and convert each letter to
// their corresponding numbers to create a telephone number based off
// of the keypad on a phone.

// Header files
#include <iostream>
#include <string>

using namespace std;

// Main function 
int main()
{   
    // Declare variables
    string input;
    int digit, num;

    // Prints what the program does and how to end it
    cout << "Program to convert letters to their corresponding telephone digits." << endl;
    cout << "To stop the program enter 'stop'." << endl;

    // Asks for a user input and assigns in to the string input variable
    cout << "Enter a telephone number expressed in letters (can be uppercase or lowercase letters): ";
    getline(cin, input);
    cout << endl;

    // While loop that will stop the program when 'stop' is input
    while (input != "stop")
    {   
        cout << "Telephone number expressed in letters: " << input;
        cout << ", Corresponding telephone digits: ";
        
        // Loops through each letter in the input, it will only loop through maximum 7 letters not including the space
        for (int i = 0; i < input.length() && i < 8; i++)
        {   
            // Changes each letter in the input to uppercase, and sets it equal to char letter variable
            char letter = toupper(input[i]);
            
            // At position 3 it will output a hyphen
            if (i == 3)
                cout << "-";
            
            // Checks if the letter is not a space
            if (letter != ' ')
            {   
                // Converts the letter into its ASCII decimal value and subtracts the value of character 'A' from it
                // This gives us the position in the alphabet
                num = static_cast<int>(letter) - static_cast<int>('A');

                // Checks in num is between 0 and 26 to make sure it is a valid character
                if (0 <= num && num < 26)
                {   
                    // Equations to determine and output the corresponding telephone digit
                    digit = (num / 3) + 2;

                    if (((num / 3 == 6) || (num / 3 == 7)) && (num % 3 == 0))
                        digit = digit - 1;

                    if (digit > 9)
                        digit = 9;

                    // Prints the digit
                    cout << digit;
                }
                // Will let the user know if the input is invalid
                else
                    cout << "Invalid input." << endl;
            }
            
        }
        // Asks the user for another input
        cout << endl << endl;
        cout << "Enter another telephone number expressed in letters (can be uppercase or lowercase letters): ";
        cout << "To stop the program enter 'stop'." << endl;

        cout << "Enter a telephone number expressed in letters: ";
        getline(cin, input);
        cout << endl;
    }

    return 0;
}
