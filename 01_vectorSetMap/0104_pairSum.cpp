#include <bits/stdc++.h>

using namespace std;

int a[1000005];
int exist[2000005];

int main() {
    int n,m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            exist[a[i] + a[j]] = 1;
        }
    }
    
    for(int i=0; i<m; i++) {
        int temp;
        scanf("%d", &temp);
        if(exist[temp]) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}