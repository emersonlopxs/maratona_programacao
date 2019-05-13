#include <iostream>
using namespace std;

int mdc(int x, int y) {
    // se y é igual a 0, então mdc(x,y) é x
    if(y == 0) return x;
    // mdc(x,y) é mdc (y, x%y)
    // retorna o mdc
    return mdc(y, x % y);
}

int main(void)
{
    int casos, f1, f2;
    
    cin >> casos;
    
    for (int i = 0; i < casos; i++) {
        cin >> f1 >> f2;
        cout << mdc(f1, f2) << endl;
    }
}
