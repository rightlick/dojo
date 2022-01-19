#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>
 
using namespace std;
 
struct konvert 
{
    int width;
    int height;
    int counter;
};
  
int main()
{
    //cin >> noskipws; 
 
    int n, w, h;
    cin >> n >> w >> h;
 
    std:: vector<konvert> konverts_collection; 
 
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
 
        konverts_collection.push_back({a, b, i});
 
        //cout << konverts_collection.back().width << ' ' << konverts_collection.back().height << ' ' << konverts_collection.back().counter << endl;
    }
 
    std::sort(konverts_collection.begin(), konverts_collection.end(), 
    [](konvert& a, konvert& b) 
    {
        //    a < b true
        if (a.width != b.width) 
        {
            return (a.width < b.width);
        }
        else  
        {
            return (a.height < b.height);
        }
    });
 
    int widthCount = w;
    int heightCount = h;
 
    std::vector<int> vivod;
 
    for (int i = 0; i < konverts_collection.size(); ++i)
    {
        //cout << konverts_collection[i].width << ' ' << konverts_collection[i].height << ' ' << konverts_collection[i].counter << endl;
 
        if ((konverts_collection[i].width > widthCount) && (konverts_collection[i].height > heightCount))
        {
            widthCount = konverts_collection[i].width;
            heightCount = konverts_collection[i].height;
            //cout << konverts_collection[i].counter + 1 << ' ';
            vivod.push_back(konverts_collection[i].counter + 1);
        }        
    }
 
    if (widthCount == w)
    {
        cout << 0;
    }
    else 
    {
        cout << vivod.size() << endl;
 
        for (int i = 0; i < vivod.size(); ++i)
        {
            cout << vivod[i] << ' ';
        }
    }
    return 0;
}