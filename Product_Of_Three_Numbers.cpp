#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        bool flag1 = false;
        bool flag2 = false;
        long long  a = -1, b = -1, c = -1;
        long long i = 1;
        long long temp = n;
        for (i = 2; i <= sqrt(temp); i++) {
            if (n % i == 0) {
                flag1 = true;
                a = i;
                n /= i;
                break;
            }
        }
        // meaning that it is prime if there is no factor, till square root of n
        if (!flag1) {
			cout << "No" << endl;
			continue;
		}
		i ++;
        for (; i <= sqrt(temp); i++) {
            if (n % i == 0) {
                b = i;
                flag2 = true;
                n /= i;
                break;
            }
        }
        if (flag2) {
            c = temp / (a * b);
            if (c == a || c == b){
                cout << "No" << endl;
            }
            else cout << "Yes" << endl << a << " " << b << " " << c << endl;
        }
        else cout << "No" << endl;
    }
    return 0;
}
