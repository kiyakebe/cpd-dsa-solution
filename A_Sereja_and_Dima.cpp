#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, card_num;

    int sereja = 0;
    int dima = 0;

    cin >> n;

    int left = 0;
    int right = n - 1;
    
    vector<int> cards;

    for (int i = 0; i < n; i++)
    {
        cin >> card_num;
        cards.push_back(card_num);
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (cards[left] < cards[right])
            {
                sereja += cards[right];
                right--;
            }
            else
            {
                sereja += cards[left];
                left++;
            }
        }
        else
        {
            if (cards[left] < cards[right])
            {
                dima += cards[right];
                right--;
            }
            else
            {
                dima += cards[left];
                left++;
            }
        }
    }
    cout<< sereja << " " << dima;
}