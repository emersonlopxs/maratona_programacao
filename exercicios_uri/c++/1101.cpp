#include <iostream>
using namespace std;

int main(void)
{
    double m, n, total = 0;
    do {
        cin >> m >> n;
        if (n <= 0 || m <= 0) break;
        int bigger = max(m,n);
        int smaller = min(m, n);
        for (int i = smaller; i <= bigger; i++) {
            cout << i << " ";
            total += i;
        }
        
        cout << "Sum=" << total << endl;
        
        total = 0;
    }
    while(1);
}