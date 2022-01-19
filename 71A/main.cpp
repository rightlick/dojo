#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main()
{
    cin >> noskipws;
    
    int n;
    cin >> n;
    
    vector<char> slovo(100);
    char a = 0;
    cin >> a;
 
    for (int i = 0; i <= n; ++i)
    {
        slovo.clear();
        cin >> a;
        while (a != '\n')
        {
            slovo.push_back(a);
            cin >> a;
        }
 
        if (slovo.size() > 10) 
        {
            cout << slovo.front() << (slovo.size() - 2) << slovo.back();
        }
        else
        {
            for (int j = 0; j < slovo.size(); ++j)
            {
                cout << slovo[j];
            }
        }
 
        cout << endl; 
    }
 
    return 0;
}