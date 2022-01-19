#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main()
{
    //cin >> noskipws;
    
    int n, k;
    cin >> n >> k;
    
    //vector<int> score(100);
    int l = 0;
    int last = 0;
    
 
    for (int i = 0; i < n; ++i)
    {
        int a = 0;
        cin >> a;
        //score.push_back(a);
 
        if (a != 0) 
        {
            if ( i <  (k-1) ) ++l;
            if ( i == (k-1) ) 
            {
                l++;
                last = a;
                //cout << i << ' '<< l << ' ' << endl;
            }
            if ( i > (k-1)) 
            {
                if ( a == last ) 
                {
                    ++l;
                    //cout << i << ' '<< l << ' ' << endl;
                }
            }
        }
    }
 
    cout << l;
    return 0;
}