#include <iostream>
using namespace std;

int main()
{
    string input = "A man, a plan, a canal: Panama";
    int st = 0;
    input.erase(remove_if(input.begin(), input.end(), [](unsigned char c)
                          { return !isalnum(c); }),
                input.end());
    int end = input.length() - 1;
    cout << input << endl;

    while (st < end)
    {
        if (tolower(input[st]) != tolower(input[end]))
        {

            return false;
        }
        st++;
        end--;
    }
    return true;
}