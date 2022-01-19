#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main()
{
    //cin >> noskipws;
    
    int n;
    cin >> n;
 
    int x = 0;      
 
    char a1 = 0;
    char a2 = 0;
    char a3 = 0;
    
    for (int i = 0; i < n; ++i)
    {
        cin >> a1 >> a2 >> a3;
        if ( a2 == '-') --x;
        if ( a2 == '+') ++x;
    }
 
 
    cout << x;
    return 0;
}