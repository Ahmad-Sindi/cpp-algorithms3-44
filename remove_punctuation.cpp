#include <iostream>
#include <string>
using namespace std;

/*
 * Algorithm Challenge – Level 3 | #44 Remove Punctuations from a String
 *
 * This program removes all punctuation characters from a given string while preserving letters, digits, spaces, and formatting.
 *
 * The solution iterates through the string character by character and filters out punctuation using standard character classification functions.
 *
 * Key focus:
 * - Character-level processing
 * - Data filtering logic
 * - Clean and predictable string transformation
 */

// Removes all punctuation characters from a string
string RemovePunctuationsFromString(string STR1)
{
    string Result = "";

    for (short i = 0; i < STR1.length(); i++)
    {
        // ispunct() checks whether the character is a punctuation mark
        if (!ispunct(STR1[i]))
        {
            Result += STR1[i];
        }
    }

    return Result;
}

int main()
{
    string STR1 = "Welcom; To Pk, Pk: is a: 'nice' Country:\n";

    cout << "String Before Removing Punctuation:\n";
    cout << STR1;

    cout << "\nString After Removing Punctuation:\n";
    cout << RemovePunctuationsFromString(STR1);

    return 0;
}
