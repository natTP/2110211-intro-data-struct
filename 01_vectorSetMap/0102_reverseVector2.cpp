#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &v,vector<int>::iterator a,vector<int>::iterator b) {
    vector<int> v2;
    for(auto i = v.begin(); i != a; i++) {
        v2.push_back(*i);
    }
    for(auto i = b-1; i != a-1; i--) {
        v2.push_back(*i);
    }
    for(auto i = b; i != v.end(); i++) {
        v2.push_back(*i);
    }
    v = v2;
}
int main() {
    //read input
    int n,a,b;
    cin >> n;
    vector<int> v;
    for (int i = 0;i < n;i++) {
        int c;
        cin >> c;
        v.push_back(c);
    }
    cin >> a >> b;

    //call function
    reverse(v,v.begin()+a,v.begin()+b+1);

    //display content of the vector
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
}