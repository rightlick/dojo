#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
  
int main()
{
    cin >> noskipws; 
 
    vector<char> stroka;
    char a;
 
    cin >> a;
 
    while (a != '\n')
    {
        if (a != '+') 
        {
            stroka.push_back(a);
        }
        cin >> a;
    }
 
    if ((stroka[0] > 64) && (stroka[0] < 91)) 
    {
        cout << stroka[0];
    }
    else cout << (char)(stroka[0] - 32);        //????
   
    if (stroka.size() > 1) 
    {
        for (int i = 1; i < stroka.size(); i++)
        {
            cout << stroka[i];
        } 
    }
    return 0;
}