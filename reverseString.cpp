#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input = "ranjit Thakur";

    int st = 0;
    int end = input.length() - 1;

    while (st < end)
    {
        swap(input[st], input[end]);
        st++;
        end--;
    }
    cout << input;

    return 0;
}