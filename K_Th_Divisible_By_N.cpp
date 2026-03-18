#include <iostream>
#include <climits>

using namespace std;
int main(){
	int t;
	cin >> t;
	while (t --){
		long long n, k;
		cin >> n >> k;
		long long left = 0;
		long long right = LLONG_MAX;
		while (left <= right){
			long long mid = left + (right - left) / 2;
			long long d = mid / n;
			if (mid - d == k){
				if (mid % n != 0){
					cout << mid << endl;
				}
				else{
					cout << mid - 1 << endl;
				}
				break;
			}
			else if (mid - d > k){
				right = mid - 1;
			}
			else left = mid + 1;
		}
	}
	return 0;
}
