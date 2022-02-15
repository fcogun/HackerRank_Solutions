#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string curHour = s.substr(0, 2);
    if (s.substr(8,2) == "AM" && curHour == "12")
    {
        s[0] = '0'; s[1] = '0';
    }
    else if (s.substr(8,2) == "PM" && curHour != "12")
    {
        curHour = to_string(stoi(curHour) + 12);
        s[0] = curHour[0]; s[1] = curHour[1];
    }
    return s.substr(0, 8);
}
    
    

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
