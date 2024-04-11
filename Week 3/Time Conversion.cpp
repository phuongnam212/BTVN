#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
 string session = s.substr(8);
 int hour = stoi(s.substr(0,2));
 if (hour==12&&session =="AM"){
     hour=0;
 }
 else if (session=="PM"&&hour!=12){
     hour+=12;
     
 }
 if (hour<10){
     s='0'+to_string(hour)+s.substr(2,6);
 }
 else {
          s=to_string(hour)+s.substr(2,6);
}
 return s;
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
