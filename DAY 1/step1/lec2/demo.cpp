#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);

    int c2 = 0, c3 = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];

        if(arr[i] >= 3)
            c3++;

        if(arr[i] >= 2)
            c2++;
    }

    if(c3 > 0 || c2 >= 2)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}