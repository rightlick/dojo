#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
  
int main()
{
    cin >> noskipws;
 
    vector<char> stroka1(100);
    vector<char> stroka2(100);
    char a;
 
    int x = 0;
 
    cin >> a;
 
    while (a != '\n')
    {
        if (a < 97) 
        {
            stroka1.push_back(a);
        }
        else   stroka1.push_back(a-32);
        cin >> a;
    }
 
    cin >> a;
 
    while (a != '\n')
    {
        if (a < 97)
        {
            stroka2.push_back(a);
        }
        else stroka2.push_back(a-32);
        cin >> a;
    }
 
    for (int i = 0; i < stroka1.size(); ++i)
    {
        if (stroka1[i] == stroka2[i]) {;}
        else    if (stroka1[i] < stroka2[i]) 
                {
                    x = -1; 
                    i = stroka1.size();
                }
                else 
                {
                    x =1; 
                    i = stroka1.size();
                }
    } 
 
    /* for (int i = 0; i < stroka1.size(); i++)
    {
        cout << stroka2[i];
    } */
    cout << x;
    return 0;
}