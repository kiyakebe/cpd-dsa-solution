#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "bpaa";
    string p = "aa";

    map<char, int> anagrame;
    map<char, int> given;

    vector<int> answer;

    int s_lenght = s.length(), p_length = p.length();

    if (s_lenght < p_length)
        return {};

    for (int i = 0; i < p_length; i++)
    {
        if (given.find(s[i]) == given.end())
        {
            given[p[i]] = 0;
        }
        given[p[i]]++;

        if (anagrame.find(s[i]) == anagrame.end())
        {
            anagrame[s[i]] = 0;
        }
        anagrame[s[i]]++;
    }

    if (anagrame == given)
    {
        answer.push_back(0);
    }

    for (int i = p_length; i < s_lenght; i++)
    {

        if (anagrame.find(s[i]) == anagrame.end())
        {
            anagrame[s[i]] = 0;
        }
        anagrame[s[i]]++;

        if (anagrame[s[i - p_length]] == 1)
        {
            anagrame.erase(s[i - p_length]);
        }
        else
        {
            anagrame[s[i - p_length]]--;
        }

        if (anagrame == given)
        {
            answer.push_back(i - p_length);
        }
    }

    for(int i = 0; i < answer.size(); i++){
        cout<<answer[i];
    }
}
