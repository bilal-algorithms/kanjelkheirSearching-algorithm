#include <bits/stdc++.h>

using namespace std;

bool Even(int n);

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int k;
    cin >> k;
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    int mid = vec.size() / 2;
    if (vec[mid - 1] == k) {
        cout << "Found at index: " << mid << '\n';
        return 0;
    }
    if (Even(vec.size())) {
        for (int i = 0, j = (vec.size() - 1); i < mid, j > mid; i++, j--) {
            if (vec[i] == k) {
                cout << "Found at index: " << i << '\n';
                return 0;
            } else if (vec[j] == k) {
                cout << "Found at index: " << j << '\n';
                return 0;
            }
        }
    } else {
        for (int i = 1, j = (vec.size() - 1); i < mid, j > mid; i++, j--) {
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
