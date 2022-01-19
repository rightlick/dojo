#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main()
{
    //cin >> noskipws;
    
    int n;
    cin >> n;
    
    //vector<int> mnenia(3);
    int p = 0;
    int v = 0;
    int t = 0;
    int k = 0;
 
    for (int i = 0; i < n; ++i)
    {
        cin >> p >> v >> t ;
 
        if ( p + v + t >= 2 ) k++;
    //    cout << i << ' ' << p << ' ' << v << ' ' << t << ' ' << k;
    }
 
    cout << k;
    return 0;
}