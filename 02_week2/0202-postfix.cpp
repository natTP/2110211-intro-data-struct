#include <bits/stdc++.h>

using namespace std;

int eval_postfix(vector<pair<int,int>> v) {
    stack<int> s;
    for(int i = 0; i < v.size(); i++) {
        if(v[i].first == 1)
            s.push(v[i].second);
        else {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            switch(v[i].second) {
                case 0:
                    s.push(b + a);
                    break;
                case 1:
                    s.push(b - a);
                    break;
                case 2:
                    s.push(b * a);
                    break;
                case 3:
                    s.push(b / a);
                    break;
                default:
                    continue;
            }
        }
    }
    return s.top();
}

int main() {
    vector<pair<int,int>> a;
    int n;
    scanf("%d", &n);
    while(n--) {
        int p1, p2;
        scanf("%d%d", &p1, &p2);
        pair<int,int> p(p1,p2);
        a.push_back(p);
    }

    printf("%d", eval_postfix(a));

    return 0;
}