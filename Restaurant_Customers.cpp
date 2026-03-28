#include <iostream>
#include <queue>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<long long, long long>> v1;
    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        v1.push_back({a, b});
    }
    sort(v1.begin(), v1.end());
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    long long max_customers = 0;
    long long current_customers = 0;
    for (auto &p : v1) {
        long long start = p.first;
        long long finish = p.second;
        while (!pq.empty() && pq.top() <= start) {
            pq.pop();
            current_customers --;
        }
        pq.push(finish);
        current_customers++;
        max_customers = max(max_customers, current_customers);
    }
    cout << max_customers << endl;
}
