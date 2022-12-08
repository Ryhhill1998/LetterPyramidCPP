#include <iostream>
#include <string>

using namespace std;

int main()
{
    string characters;

    cout << "Enter characters to be turned into a pyramid: ";
    cin >> characters;

    size_t maxLength = 2 * (characters.length() - 1) + 1; // gets the length of the base row

    // for loop from 0 to length - 1 to get desired number of rows
    for (size_t i {}; i < characters.length(); i++)
    {
        size_t justify = (maxLength - (2 * (i + 1) - 1)) / 2; // gets the amount of white space required before row

        // for loop used to print this white space to thw console before printing the row
        for (size_t n {}; n < justify; n++)
            cout << " ";

        int j {};
        bool reverse {}; // bool to check whether the counter is in reverse

        // check whether it has finished printing the reverse
        while (j > -1)
        {
            cout << characters.at(j);

            if (j == i)
                reverse = true; // start reversing the row once we have reached the only unique character in the row

            if (reverse)
                j--;
            else
                j++;
        }

        cout << endl; // used to add new line for each row
    }

    return 0;
}
