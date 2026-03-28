#include <iostream>
#include <queue>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

long double y_hat(long double k, long double x, long double b);

int main(){
	int t;
	cin >> t;
	while (t --){
		long long x1, y1, x2, y2, x3, y3; 
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		if (x1 == x2){
			if (x1 == x3){
				cout << "TOUCH" << endl;
			}
			else {
				if (y1 < y2){
					if (x3 > x1){
						cout << "RIGHT" << endl;
					}
					else {
						cout << "LEFT" << endl;
					}
				}
				else {
					if (x3 > x1){
						cout << "LEFT" << endl;
					}
					else {
						cout << "RIGHT" << endl;
					}
				}
			}
		}
		else if (y1 == y2){
			if (y1 == y3){
				cout << "TOUCH" << endl;
			}
			else {
				if (x1 < x2){
					if (y3 > y1){
						cout << "LEFT" << endl;
					}
					else {
						cout << "RIGHT" << endl;
					}
				}
				else {
					if (y3 > y1){
						cout << "RIGHT" << endl;
					}
					else {
						cout << "LEFT" << endl;
					}
				}
			}
		}
		else {
			long double k = (long double)(y2 - y1) / (x2 - x1);
			long double b = (long double)y1 - k * x1;
			long double y_line = y_hat(k, x3, b);
			
			if (fabsl(y_line - y3) < 1e-12L){
				cout << "TOUCH" << endl;
			}
			else{
				if (k > 0){
					if (y1 < y2){
						if (y_line > y3){
							cout << "RIGHT" << endl;
						}
						else {
							cout << "LEFT" << endl;
						}
					}
					else {
						if (y_line > y3){
							cout << "LEFT" << endl;
						}
						else {
							cout << "RIGHT" << endl;
						}
					}
				}
				else{
					if (y1 < y2){
						if (y_line > y3){
							cout << "LEFT" << endl;
						}
						else {
							cout << "RIGHT"<< endl;
						}
					}
					
					else {
						if (y_line > y3){
							cout << "RIGHT" << endl;
						}
						
						else {
							cout << "LEFT" << endl;
						}
					}
				}
			}
		}
	}
	
	return 0;
}
long double y_hat(long double k, long double x, long double b){
    return k * x + b;
}
