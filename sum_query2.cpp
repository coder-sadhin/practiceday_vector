#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> lst(n);
    for (int i = 0; i < n; i++) {
        cin >> lst[i];
    }

    // Declare a prefix sum vector of size n+1 and initialize the first element to 0
    vector<int> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + lst[i - 1];
    }

    // Use the prefix sums to answer each query efficiently
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        // Calculate the sum using the prefix sums
        int sum = prefix_sum[r] - prefix_sum[l - 1];
        cout << sum << endl;
    }

    return 0;
}
