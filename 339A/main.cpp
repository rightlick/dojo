#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
  
int main()
{
    cin >> noskipws;
 
    vector<char> stroka;
    char a;
 
    int x = 0;
 
    cin >> a;
 
    while (a != '\n')
    {
        if (a != '+') 
        {
            stroka.push_back(a);
        }
        cin >> a;
    }
 
    char temp;
 
    for (int i = 0; i < stroka.size(); ++i)
    {
        for (int j = 0; j < stroka.size() - i -1; ++j)
        {
            if ( stroka[j] > stroka[j+1]) 
            {
                temp = stroka[j];
                stroka[j] = stroka[j+1];
                stroka[j+1] = temp;
            }
        }
    }
 
    cout << stroka[0];
   
    if (stroka.size() > 1) 
    {
        for (int i = 1; i < stroka.size(); i++)
        {
            cout << '+' << stroka[i];
        } 
    }
    return 0;
}