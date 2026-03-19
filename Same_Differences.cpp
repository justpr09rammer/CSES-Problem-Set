#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<long long> v1(n);
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++){
            cin >> v1[i];
        }
        for (int i = 0; i < n; i++){
            mp[v1[i] - i]++;
        }
        long long sum = 0;
        for (auto &it:mp){
			int temp = it.second;
			long long s = (temp * (temp - 1)) / 2;
			sum += s;
		}
		cout << sum << endl;
    }
    return 0;
}
