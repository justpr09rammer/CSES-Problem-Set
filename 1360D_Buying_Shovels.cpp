#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t --){
		long long n, k;
		cin >> n >> k;
		long long max_factor = 1;
		for (int i = 1; i <= sqrt(n); i ++){
			if (i > k){
				break;
			}
			if (n % i == 0){
				max_factor = i;
				if (n / i <= k){
					// it is the largest cofactor if it meets these requirements
					max_factor = (n / i);
					break;
				}
			}
		}
		cout << n / max_factor << endl;
	}
	return 0;
}
