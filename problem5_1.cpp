#include<iostream>
#include<vector>
#include<algorithm> // Include the algorithm header for min()
using namespace std;

int minsquares(int n) {
    if (n <= 0)
        return 0;

    vector<int> dp(n + 1, n); // Create a vector to store results, initialize with a value greater than n
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j * j <= i; j++) {
            dp[i] = min(dp[i], 1 + dp[i - j * j]);
        }
    }

    return dp[n];
}

int main() {
    int a;
    cin >> a;
    int p = minsquares(a);
    cout << p;
    return 0;
}
