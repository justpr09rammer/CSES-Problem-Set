#include <iostream>
#include <chrono>
using namespace std;
long long a_to_the_power_of_n_v1(long long a, long long n){
    if (n == 0) {
        return 1;
    }
    if (n % 2 == 0) {
        long long half = a_to_the_power_of_n_v1(a, n / 2);
        return half * half;
    } else {
        return a * a_to_the_power_of_n_v1(a, n - 1);
    }
}
long long a_to_the_power_of_n_v2(long long a, long long n){
    if (n == 0) {
        return 1;
    }
    if (n % 2 == 0) {
        return a_to_the_power_of_n_v2(a * a, n / 2);
    } else {
        return a * a_to_the_power_of_n_v2(a, n - 1);
    }
}
int main(){
    long long a, b;
    cin >> a >> b;
	
    auto start_v1 = chrono::high_resolution_clock::now();
    cout << "Result for v1: " << a_to_the_power_of_n_v1(a, b) << endl;
    auto end_v1 = chrono::high_resolution_clock::now();
    chrono::duration<double> duration_v1 = end_v1 - start_v1;
    cout << "Time taken by v1: " << duration_v1.count() << " seconds" << endl;
	
    auto start_v2 = chrono::high_resolution_clock::now();
    cout << "Result for v2: " << a_to_the_power_of_n_v2(a, b) << endl;
    auto end_v2 = chrono::high_resolution_clock::now();
    chrono::duration<double> duration_v2 = end_v2 - start_v2;
    cout << "Time taken by v2: " << duration_v2.count() << " seconds" << endl;
    return 0;
}
