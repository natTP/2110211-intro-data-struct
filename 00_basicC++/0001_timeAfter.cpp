#include <bits/stdc++.h>

int main() {
    int h,m,x;
    scanf("%d %d %d", &h, &m, &x);
    int nextH = (h + (m+x)/60)%24;
    int nextM = (m+x)%60;
    printf("%.2d %.2d", nextH, nextM);

    return 0;
}
