// /* 1017 - Fuel Spent */
// https://www.beecrowd.com.br/judge/pt/problems/view/1017

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float time, Avg_speed, fuel_spent;

    cin >> time >> Avg_speed;

    fuel_spent = (time * Avg_speed) / 12;
    cout << fixed << setprecision(3) << fuel_spent << endl;
    return 0;
}