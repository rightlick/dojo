#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
 
using namespace std;
  
int main()
{
    //cin >> noskipws; 
 
    int n;
    cin >> n;
 
    std::unordered_map<string, int> db;
 
    for (int i = 0; i < n; ++i)
    {
        string a;
        cin >> a;
        if (db.count(a) == 1)   //уже встречали?
        {
            cout << a << db[a] << endl;
            ++db[a];
        } 
        else 
        {
            //cout << a << endl;
            cout << "OK" << endl;
            db[a] = 1;
        }
 
    }
 
    return 0;
}