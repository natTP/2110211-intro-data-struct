#include <iostream>
#include <vector>

using namespace std;

void vector_swap(vector<int> &v1,vector<int> &v2,
    int start1, int end1,
    int start2, int end2) {
        vector<int> v1_copy(v1);
        vector<int> v2_copy(v2);

        auto s1_it = v1_copy.begin() + start1;
        auto e1_it = v1_copy.begin() + end1;
        auto s2_it = v2_copy.begin() + start2;
        auto e2_it = v2_copy.begin() + end2;
        int len1 = end1 - start1;
        int len2 = end2 - start2;

        auto v1_it = v1.insert(v1.begin() + start1, s2_it, e2_it);
        auto v2_it = v2.insert(v2.begin() + start2, s1_it, e1_it);

        v1.erase(v1_it + len2, v1_it + len2 + len1);
        v2.erase(v2_it + len1, v2_it + len1 + len2);
}

int main() {
    //read input
    int n,c;
    vector<int>v1,v2;
    cin >> n; //number of v1
    for (int i = 0;i < n;i++) {
        cin >> c;
        v1.push_back(c);
    }
    cin >> n; //number of v2
    for (int i = 0;i < n;i++) {
        cin >> c;
        v2.push_back(c);
    }

    int s1,e1,s2,e2; //position
    cin >> s1 >> e1 >> s2 >> e2;

    //call the function
    vector_swap(v1,v2,s1,e1,s2,e2);

    //display content of the stack
    cout << "v1 has " << v1.size() << endl;
    for (auto &x : v1) { cout << x << " "; }
    cout << endl;

    //display content of the stack
    cout << "v2 has " << v2.size() << endl;
    for (auto &x : v2) { cout << x << " "; }
    cout << endl;
}