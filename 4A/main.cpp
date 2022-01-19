#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main()
{
      setlocale(0, "");
 
        int w;
        cin >> w;
 
        if ( (w % 2 == 0) && (w != 2) ) 
        {
            cout << "YES";
        } 
        else
        {
            cout << "NO";
        }
 
 
    //system("pause");
    return 0;
}