#include <bits/stdc++.h>

using namespace std;

bool sortDescending(int lhs, int rhs) { return lhs > rhs; }

int main() {
    int q;
    scanf("%d", &q);
    char s[5];
    vector<int> v;
    while (q--) {
        scanf("%s", s);
        if (s[0] == 'p') {
            int x;
            scanf("%d", &x);
            v.push_back(x);
        } else if (s[1] == 'a') {
            sort(v.begin(), v.end());
        } else if (s[1] == 'd') {
            sort(v.begin(), v.end(), sortDescending);
        } else if (s[0] == 'r') {
            vector<int> v2(v);
            v.clear();
            while (!v2.empty()) {
                v.push_back(v2.back());
                v2.pop_back();
            }
        } else if (s[0] == 'd') {
            int i;
            scanf("%d", &i);
            v.erase(v.begin() + i);
        }
    }
    for (auto it = v.begin(); it != v.end(); it++) {
        printf("%d ", *it);
    }
    return 0;
}