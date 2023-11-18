#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n, leng;
    map<int, int> towers;
    cin >> n;
    int max_fl = 0, number = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> leng;

        if (towers.find(leng) != towers.end())
        {
            towers[leng] = towers[leng] + 1;
        }
        else
        {
            towers[leng] = 1;
        }
    }
    for (auto it = towers.begin(); it != towers.end(); ++it)
    {
        number++;
        if (it->second > max_fl)
        {
            max_fl = it->second;
        }
    }
    cout << max_fl << " " << number;
}
