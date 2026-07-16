#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> ans;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    ll carry = 0;

    for (int ctr = 1; ctr <= arr[n - 1]; ctr++) {

        auto it = lower_bound(arr.begin(), arr.end(), ctr);

        int count = arr.end() - it;

        carry += count;

        ans.push_back(carry % 10);

        carry /= 10;
    }

    while (carry != 0) {
        ans.push_back(carry % 10);
        carry /= 10;
    }

    reverse(ans.begin(), ans.end());

    for (int x : ans)
        cout << x;

    cout << endl;

    return 0;
}