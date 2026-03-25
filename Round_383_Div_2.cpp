#include <iostream>
using namespace std;
long long pow(long long a,long long n){
	if (n == 0){
		return 1;
	}
	long long d = a % 10;
	//cout << d << endl;
	if (n % 2 == 0){
		return pow(d * d, n / 2);
	}
	else {
		return d * pow(d, n - 1);
	}
}
int main(){
	long long n;
	cin >> n;
	long long result = pow(1378, n);	
	cout << result << endl;
	return 0;
}
