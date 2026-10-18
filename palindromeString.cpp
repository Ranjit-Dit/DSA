#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string input = "A man, a plan, a canal: Panama";
    // input.erase(remove_if(input.begin(), input.end(), [](unsigned char c)
    //                       { return !isalpha(c); }),
    //             input.end());
    // replace_if(input.begin(),)
    for (int i = 0; i < input.length();)
    {
        if (isalpha(input[i]))
        {
            if (input[i] < 97)
            {

                input[i] = tolower(input[i]);
            }
            i++;
        }
        else
        {
            input.erase(input.begin() + i);
        }
    }

    cout << input << " " << input.length() << endl;

    int st = 0;
    bool flag = true;
    int end = input.length() - 1;
    while (st < end)
    {
        if (input[st] != input[end])
        {
            flag = false;
            cout << st << end << endl;
            cout << input[st] << " " << input[end] << endl;
            break;
        }
        st++;
        end--;
    }
    if (flag)
    {
        cout << "the string is palindrome ";
    }
    else
    {
        cout << "this string isnot palindrome.";
    }

    return 0;
}