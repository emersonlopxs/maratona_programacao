#include <iostream>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;
    int maxA = max(a,b);
    int minB = min(a,b);
    for (int i = minB + 1; i < maxA ; i++) {
        if(i % 5 == 2 || i % 5 == 3) cout << i << endl;
    }
}