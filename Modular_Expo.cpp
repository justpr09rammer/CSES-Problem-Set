#include <iostream>
using namespace std;

// f = a ** n;
long long a_to_the_power_of_n(long long  a, long long n){
	if (n == 0){
		return 1;
	}
	if (n % 2 == 0){
		long long half = a_to_the_power_of_n(a, n / 2);
		return half * half;
	}
	else {
		return a * a_to_the_power_of_n(a, n - 1);
	}
}

int main(){
	int n;
	cin >> n;
	while (n --){
		long long a, b;
		cin >> a >> b;
		cout << a_to_the_power_of_n(a, b) << endl;	
	}
	
	return 0;
}
