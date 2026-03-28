#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t --){
		long long row, col;
		cin >> row >> col;
		long long start = -1;
		long long end = -1;
		if (row == col){
			end =  col * (row - 1) + 1;
		}
		else if (row > col){
			if (row % 2 == 0){
				start = row * row;
				end = start - col + 1;
			}
			else {
				start = (row - 1) * (row - 1) + 1;
				end = start + col - 1;
			}
		}
		else{
			if (col % 2 == 0){
				start = (col - 1) * (col - 1) + 1;
				end = start + row - 1;
			}
			else {
				start = col * col;
				end = start - row + 1;
			}
		}
		cout << end << endl;
	}
}
