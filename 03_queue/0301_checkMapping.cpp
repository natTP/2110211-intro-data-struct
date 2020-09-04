#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    set<int> s;
    bool is11Onto = true;
    scanf("%d", &n);
    for(int i = 0 ; i < n; i++) {
        int d;
        scanf("%d", &d);
        if((d < 1) || (d > n)) {
            is11Onto = false;
            break;
        }
        else if(s.find(d) != s.end()) {
            is11Onto = false;
            break;
        }
        else {
            s.insert(d);
        }
    }

    if(is11Onto) 
        printf("YES");
    else
        printf("NO");

    return 0;
}
