#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string strings_xor(string s, string t) {

    string res = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == t[i]) // = added
            res += '0'; // + added
        else
            res += '1'; // + added
    }

    return res;
}

int main() {
    string s, t;
    cin >> s >> t;
    cout << strings_xor(s, t) << endl;
    return 0;
}



