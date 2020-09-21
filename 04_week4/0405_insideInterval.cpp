#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, begin, end, q;
    scanf("%d%d", &n, &m);
    map<int,int> interval;
    vector<int> v;
    while (n--) {
        scanf("%d%d", &begin, &end);
        interval[end] = begin;
        v.push_back(end);
    }

    sort(v.begin(), v.end());
    
    while (m--) {
        scanf("%d", &q);
        auto it = lower_bound(v.begin(), v.end(), q);
        if (interval[*it] <= q && q <= *it)
            printf("1 ");
        else printf("0 ");
    }
    return 0;
}