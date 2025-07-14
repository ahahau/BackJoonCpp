#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int alpha[26];

int main()
{
    string s;
    cin >> s;
    int odd = 0;
    char oddChar;

    for (char c : s) 
    {
        alpha[c - 'A']++;
    }

    for (int i = 0; i < 26; i++) 
    {
        if (alpha[i] % 2 != 0) 
        {
            odd++;
            oddChar = i + 'A';
        }
    }

    if (odd > 1) 
    {
        cout << "I'm Sorry Hansoo" << endl;
        return 0;
    }

    string firstHalf = "";
    string secondHalf = "";


    for (int i = 0; i < 26; i++) 
    {
        firstHalf += string(alpha[i] / 2, i + 'A');
    }

    secondHalf = firstHalf;
    reverse(secondHalf.begin(), secondHalf.end());


    if (odd == 1) 
    {
        firstHalf += oddChar;
    }

    cout << firstHalf + secondHalf << endl;
}