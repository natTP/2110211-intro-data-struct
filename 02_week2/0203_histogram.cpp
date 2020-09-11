#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    map<string,int> hist;
    scanf("%d", &n);
    while(n--) {
        string s;
        cin >> s;
        if(hist.find(s) != hist.end())
            hist[s]++;
        else
            hist[s] = 1;
    }

    for(auto it = hist.begin(); it != hist.end(); it++) {
        if(it->second > 1)
            printf("%s %d\n", (it->first).c_str(), it->second);
    }

    return 0;
}