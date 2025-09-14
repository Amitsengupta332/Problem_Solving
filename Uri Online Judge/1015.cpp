#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    float dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("%.4f\n", dist);

    return 0;
}