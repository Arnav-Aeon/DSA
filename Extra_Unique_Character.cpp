#include <iostream>
#include <string>
using namespace std;

#include <unordered_map>

string uniqueChar(string str)
{
    unordered_map<char, int> map;
    string output;
    for (int i = 0; i < str.length(); ++i)
    {
        if (map.count(str[i]) == 0)
        {
            map[str[i]] = 1;
        }
    }

    for (int i = 0; i < str.length(); ++i)
    {
        if (map[str[i]] != 0)
        {
            map[str[i]] = 0;
            output = output + str[i];
        }
    }

    return output;
}

int main()
{
    string str;
    cin >> str;
    cout << uniqueChar(str);
}