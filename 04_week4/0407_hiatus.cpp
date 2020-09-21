#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, yr, mn;
    scanf("%d%d", &n, &m);
    vector<pair<int,int>> dates;
    while (n--) {
        scanf("%d%d", &yr, &mn);
        dates.push_back(make_pair(yr,mn));
    }
    
    sort(dates.begin(), dates.end());

    while (m--) {
        scanf("%d%d", &yr, &mn);
        pair<int,int> p = make_pair(yr,mn);
        if (p < dates.front())
            printf("-1 -1 ");
        else {
            auto it = upper_bound(dates.begin(), dates.end(), p) - 1;
            if(*it == p)
                printf("0 0 ");
            else 
                printf("%d %d ", it->first, it->second);
        }
    }
    return 0;
}