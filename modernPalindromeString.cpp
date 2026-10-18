#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string input = "A man, a plan, a canal: Panama";
    input.erase(remove_if(input.begin(), input.end(), [](unsigned char c)
                          { return !isalnum(c); }),
                input.end());
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    // Compares the forward string directly with its reverse counterpart
    if (equal(input.begin(), input.begin() + input.length() / 2, input.rbegin()))
    {
        cout << "This is a palindrome";
    }

    return 0;
}