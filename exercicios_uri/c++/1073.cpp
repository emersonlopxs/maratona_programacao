#include <iostream>
using namespace std;

int main(void)
{
    double num;
    
    cin >> num;
    
    for (int i = 1; i <= num; i++) {
        if(!(i % 2)) {
            cout << i << "^2" << " = " << i * i << endl;
        }
    }
}
