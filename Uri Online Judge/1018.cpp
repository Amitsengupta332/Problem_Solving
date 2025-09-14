/* 1018 - Banknotes */
// https://www.beecrowd.com.br/judge/pt/problems/view/1018

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n << endl;

    int notes[] = {100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < 7; i++)
    {
        int q = n / notes[i];
        cout << q << " nota(s) de R$ " << notes[i] << ",00" << endl;
        n %= notes[i];
    }

    // int b = n / 100;
    // cout << b << " nota(s) de R$ 100,00" << endl;

    // n = n % 100;
    // b = n / 50;
    // cout << b << " nota(s) de R$ 50,00" << endl;

    // n = n % 50;
    // b = n / 20;
    // cout << b << " nota(s) de R$ 20,00" << endl;

    // n = n % 20;
    // b = n / 10;
    // cout << b << " nota(s) de R$ 10,00" << endl;

    // n = n % 10;
    // b = n / 5;
    // cout << b << " nota(s) de R$ 5,00" << endl;

    // n = n % 5;
    // b = n / 2;
    // cout << b << " nota(s) de R$ 2,00" << endl;

    // n = n % 2;
    // cout << n << " nota(s) de R$ 1,00" << endl;

    return 0;
}

// https://github.com/kamrulhasanrony/URI-Online-Judge-Solutions