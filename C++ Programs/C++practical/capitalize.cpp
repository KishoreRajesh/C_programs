#include <iostream> // Including input/output stream library
#include <string>   // Including string library for string manipulation

using namespace std; // Using the standard namespace

// Function to capitalize the first letter of each word in a string
string Capitalize_first_letter(string text) {

    // Loop through each character in the string
    for (int x = 0; x < text.length(); x++)
    {
        // If it's the first character of the string or after a space, capitalize it
        if (x == 0 || text[x - 1] == ' ')
        {
            text[x] = toupper(text[x]); // Convert the character to uppercase
        }
    }

    return text; // Return the modified string
}

int main() 
{
    // Displaying the string with the first letter of each word capitalized
    cout << Capitalize_first_letter("Write a C++ program");

    // Displaying another string with the first letter of each word capitalized
    cout << "\n" << Capitalize_first_letter("cpp string exercises");

    return 0; // Returning 0 to indicate successful execution
}