#include <bits/stdc++.h>

using namespace std;

bool Even(int n);

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int k, t;
    cin >> t >> k;
    vector<int> vec(t);
    for (int i = 0; i < t; i++)
    {
        cin >> vec[i];
    }
    int mid = t / 2;
    if (vec[mid - 1] == k) {
        cout << "Found at index: " << mid << '\n';
        return 0;
    }
    if (Even(t)) {
        for (int i = 0, j = (t - 1); i < mid, j > mid; i++, j--) {
            if (vec[i] == k) {
                cout << "Found at index: " << i << '\n';
                return 0;
            } else if (vec[j] == k) {
                cout << "Found at index: " << j << '\n';
                return 0;
            }
        }
    } else {
        for (int i = 1, j = (t - 1); i < mid, j > mid; i++, j--) {
            if (vec[i] == k) {
                cout << "Found at index: " << i << '\n';
                return 0;
            } else if (vec[j] == k) {
                cout << "Found at index: " << j << '\n';
                return 0;
            }
        }
    }
    cout << "Not Found!" << '\n';
    return 0;

}

bool Even(int n) {
    if (n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}
