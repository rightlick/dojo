#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main()
{
    //cin >> noskipws;
    
    int m, n;
    cin >> m >> n;
 
    int s = m * n;  //площадь прямоугольника
    int k = 0;      //количество доминошек
 
    k = s / 2;
 
    cout << k;
    return 0;
}