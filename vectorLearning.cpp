#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    // vec.pop_back();

    // vec.erase(vec.begin() + 2);
    // vec.clear();
    for (int val : vec)
    {
        cout << val << endl;
    }
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    // vector<int>::iterator it;
    for (auto it = vec.rbegin(); it != vec.rend(); it++)
    {
        cout << *(it) << endl;
    }

    return 0;
}