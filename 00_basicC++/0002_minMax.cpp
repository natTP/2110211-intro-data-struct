#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m,r;
    int a[105][105];
    scanf("%d %d %d", &n, &m, &r);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int q=0; q<r; q++) {
        int r1,c1,r2,c2;
        scanf("%d %d %d %d", &r1, &c1, &r2, &c2);

        if(r1>r2 || c1>c2) {
            printf("INVALID\n");
        }
        else if (r1>n || c1>m || r2<1 || c2<1) {
            printf("OUTSIDE\n");
        }
        else {
            r1 = max(1,r1);
            r2 = min(r2,n);
            c1 = max(1,c1);
            c2 = min(c2,m);
            int mx = a[r1][c1];
            for(int i=r1; i<=r2; i++) {
                for(int j=c1; j<=c2; j++) {
                    mx = max(mx, a[i][j]);
                }
            }
            printf("%d\n", mx);
        }
    }

    return 0;
}
