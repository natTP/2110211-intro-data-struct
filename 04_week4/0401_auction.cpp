#include <bits/stdc++.h>

using namespace std;

auto findInBids(int user, vector<pair<int,int>>& bids) { 
    return find_if(bids.begin(), bids.end(), [user] (const pair<int,int>& p) { return p.second == user; });
}

int main() {
    int n, m, a, k;
    scanf("%d%d%d", &n, &m, &a);
    vector<int> amount = {0};
    vector<vector<int>> win(m + 1);
    vector<vector<pair<int,int>>> bids(n + 1);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &k);
        amount.push_back(k);
    }

    // for (auto it = amount.begin(); it != amount.end(); it++) printf("%d ", *it);

    int user, label, val;
    while (a--) {
        char query;
        scanf(" %c", &query);
        // printf("query = %c\n", query);
        if (query == 'B') {
            scanf("%d%d%d", &user, &label, &val);
            auto it = findInBids(user, bids[label]);
            if (it != bids[label].end()) {
                it->first = val;
            } else {
                bids[label].push_back(make_pair(val, user));
            }

        } else if (query == 'W') {
            scanf("%d%d%d", &user, &label);
            auto it = findInBids(user, bids[label]);
            if (it != bids[label].end()) {
                bids[label].erase(it);
            } 
        }
        // for (int i=1; i<=n; i++) {
        //     for (auto it = bids[i].begin(); it != bids[i].end(); it++) {
        //         printf("%d,%d ", it->first, it->second);
        //     }
        //     printf("\n");
        // }
        // printf("user = %d, label = %d\n", user, label);
    }

    for (int i = 1; i <= n; i++) {
        if(bids[i].size() > 0) {
            priority_queue<pair<int,int>> pq(bids[i].begin(), bids[i].end());
            pair<int,int> p;
            for (int j = 1; j <= amount[i] && j <= bids[i].size(); j++) {
                p = pq.top();
                //printf("%d goes to %d (bidded %d)\n", i, p.second, p.first);
                win[p.second].push_back(i);
                pq.pop();
            }
        }
    }

    for(int i = 1; i <= m; i++) {
        if(win[i].size() == 0)
            printf("NONE");
        else {
            for(auto it = win[i].begin(); it != win[i].end(); it++)
                printf("%d ", *it);
        }
        printf("\n");
    }

    return 0;
}