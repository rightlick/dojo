#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>
 
using namespace std;
 
int main()
{
    //cin >> noskipws;
 
    int n;
    cin >> n;
 
    std::vector<char> color;
 
    int count = 0;
    char a;
 
 
 
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
 
        if (i > 0)
        {   
            //cout << i << ' ' << a << ' ' << color.back() << endl;
            if (color.back() == a) 
            {
                ++count;
                //cout << i << ' ' << a << ' ' << color.back() << endl;
            }
        }
        color.push_back(a);
    }
    
    cout << count;
 
    return 0;
}