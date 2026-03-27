#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

long long gcd(long long a, long long b){
	if (a == 0){
		return b;
	}
	if (b == 0){
		return a;
	}	
	if (b > a){
		return gcd(a, b % a);
	}
	else return gcd(a % b, b);
}
bool is_prime(long long n){
	long long r = sqrt(n);
	for (int i = 2; i <= r; i ++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int t;
	cin >> t;
	while (t --){
		long long n;
		cin >> n;
		if (n % 2 == 0){
			cout << n /2 << " " << n / 2 << endl;
		}
		else {
			long long factor = -1;
			for (long long i = 2; i <= sqrt(n); i ++){
				if (n % i == 0){
					factor = i;
					break;
				}
			}
			long long a = -1, b = -1;
			if (factor == -1){
				a = 1;
				b = n - 1;
			}
			else {
				a = n / factor;
				b = n - a;
			}
			cout << a << " " << b << endl;
		}
	}
	return 0;
}


