#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ratnes = n + 1;
    int digits = 0;
    int temp = ratnes;
    while (temp > 0) {
        digits += (temp % 10 != 0);
        temp /= 10;
    }
    while (digits > 1) {
        ratnes++;
        digits = 0;
        temp = ratnes;
        while (temp > 0) {
            digits += (temp % 10 != 0);
            temp /= 10;
        }
    }

    
    cout << ratnes - n << endl;
    return 0;
}
