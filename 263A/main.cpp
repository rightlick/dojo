#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
  
int main()
{
    //cin >> noskipws;
    //cin >> n;
    int n = 5;
    int a[5][5];
    int x = 0;
 
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            //cout << a[i][j];
 
            if (a[i][j] == 1)
            {
                if  ((i == 0) || (i == 4)) x += 2;
                if  ((i == 1) || (i == 3)) ++x;
 
                if  ((j == 0) || (j == 4)) x += 2;
                if  ((j == 1) || (j == 3)) ++x;
                //cout << a[i][j];
            }
        }
    }
 
 
    cout << x;
    return 0;
}