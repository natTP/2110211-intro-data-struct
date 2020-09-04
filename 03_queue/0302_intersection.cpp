#include <bits/stdc++.h>
.

using namespace std;

int main() {
    int n,m,temp;
    vector<int> v1;
    vector<int> v2;
    scanf("%d%d", &n, &m);
    while(n--) {
        scanf("%d", &temp);
        v1.push_back(temp);
    }
    while(m--) {
        scanf("%d", &temp);
        v2.push_back(temp);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    auto i = v1.begin();
    auto j = v2.begin();
    
    while(i != v1.end() && j != v2.end()) {
        if(*i < *j) i++;
        else if(*i > *j) j++;
        else {
            //print it, but check duplicates too
        }
    }
}