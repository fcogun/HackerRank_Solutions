#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

void stringToLowerCase(string& s){
    for (int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);
}

string pangrams(string s) {
    char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    stringToLowerCase(s);
    for (int i = 0; i< 26; i++)
        if (s.find(alphabet[i])==string::npos)
            return "not pangram";
    return "pangram";
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
