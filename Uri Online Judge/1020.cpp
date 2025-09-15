#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day, month, year, date;
    cin >> day;

    year= day/365;
    month = (day % 365) / 30;
    date = (day % 365) % 30;
    cout << year << " ano(s)" << endl;
    cout << month << " mes(es)" << endl;
    cout << date << " dia(s)" << endl;
    return 0;
}