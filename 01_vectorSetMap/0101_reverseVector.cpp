#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &v,int a,int b) {
    vector<int> v2;
    for(int i = 0; i < v.size(); i++) {
      if((i < a) || (i > b)) {
          v2.push_back(v[i]);
      } 
      else {
          v2.push_back(v[b-(i-a)]);
      }
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
    reverse(v,a,b);

    //display content of the vector
    for (auto &x : v)
    cout << x << " ";
    cout << endl;
}