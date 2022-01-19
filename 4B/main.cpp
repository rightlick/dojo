#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
  
int main()
{
    //cin >> noskipws; 
 
    vector<int> minTime;
    vector<int> maxTime;
 
    int d, sumTime, a, b;
 
    cin >> d >> sumTime;
 
    int Min = 0;
    int Max = 0;
 
    for (int i = 0; i < d; ++i)
    {
        cin >> a >> b;
        minTime.push_back(a);
        maxTime.push_back(b);
        Min += minTime[i];
        Max += maxTime[i];
    }
 
    if ((sumTime >= Min) && (sumTime <= Max)) 
    {
        cout << "YES" << endl;
        int raz = sumTime - Min;
 
        for (int i = 0; i < d; ++i)
        {
            if ((raz > 0) && (raz - minTime[i] >= 0))
            {
                cout << maxTime[i] << ' ';
                raz -= (maxTime[i] - minTime[i]);
            }
            else 
            if (raz > 0)
            {
                cout << (raz + minTime[i]) << ' ';
                raz = 0;
            }
            else cout << minTime[i] << ' ';
        }
    }
    else cout << "NO";
 
    return 0;
}