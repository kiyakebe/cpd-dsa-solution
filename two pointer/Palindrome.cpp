// https://leetcode.com/problems/valid-palindrome/

#include <bits/stdc++.h>

using namespace std;

bool isPal()
{
    string palindrome;
    bool response = true;
    cin >> palindrome;

    transform(palindrome.begin(), palindrome.end(), palindrome.begin(), ::tolower);
    
    int right = palindrome.length() - 1;
    int left = 0;

    while (left <= right)
    {
        if (!isalnum(palindrome[right]))
        {
            right--;
            continue;
        }
        if (!isalnum(palindrome[left]))
        {
            left++;
            continue;
        }
        if (palindrome[left] != palindrome[right])
        {
            response = false;
            break;
        }
        right--;
        left++;
    }
    return response;
}

int main()
{
    bool check = isPal();
    if (check)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
