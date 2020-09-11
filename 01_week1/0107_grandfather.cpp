#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    map<long long, long long> father;
    scanf("%d%d", &n, &m);
    while(n--) {
        long long f,s;
        scanf("%ld%ld", &f, &s);
        father[s] = f;
    }

    while(m--) {
        long long a,b;
        scanf("%ld%ld", &a, &b);
        if(father[father[a]] == 0 || father[father[b]] == 0) 
            printf("NO\n");
        else if((father[father[a]] == father[father[b]]) && (a != b))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}