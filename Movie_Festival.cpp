#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
	int n;
	cin >> n;
	vector <pair<int, int>> v1(n);
	for (int i = 0; i < n; i ++){
		int a, b;
		cin >> a >> b;
		v1[i] = {a, b};
	}
	sort(v1.begin(), v1.end(), [](auto a, auto b){
		return a.second < b.second;
	});
	
    int end = -1;
    int ans = 0;
    for (auto &pair:v1){
		if (pair.first >= end){
			end = pair.second;
			ans ++;
		}
	}
	cout << ans;
}

