#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>
 
using namespace std;
 
int main()
{
    cin >> noskipws;
 
    std::unordered_map<char, int> bukva;
 
    char a;
    cin >> a;
    int count = 0;
 
    while (a != '\n')
    {
        if (bukva.count(a) == 1)  //уже встречали такую букву?
        {
            ++bukva[a];
        }
        else 
        {
            ++count;
            bukva[a] = 1;
        }
        cin >> a;
    }
 
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else cout  << "IGNORE HIM!";
 
 
    return 0;
}