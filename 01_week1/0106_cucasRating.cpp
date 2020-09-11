#include <bits/stdc++.h>

using namespace std;

map<int,pair<int,int>> subjects; //<subj,<tot,cnt>>
map<string, pair<int,int>> teachers; //<tch,<tot,cnt>>

int main() {
    int n; 
    scanf("%d", &n);

    while(n--) {
        int subj, pt; char tch[5];
        scanf("%d %s %d", &subj, tch, &pt);
        subjects[subj].first += pt;
        subjects[subj].second++;
        teachers[tch].first += pt;
        teachers[tch].second++;
    }

    for(auto x : subjects) {
        double mean = ((double) x.second.first) / x.second.second;
        printf("%d %.2f\n", x.first, mean);
    }

    for(auto x : teachers) {
        double mean = ((double) x.second.first) / x.second.second;
        printf("%s %.2f\n", x.first.c_str(), mean);
    }

    return 0;
}