#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
int len = s.size();
int a_counter =0;
cout << len;
for(int i =0; i < len; i++)
{
    if(s[i] =='a')
    {
        a_counter++;
    }
}
long reps = floor((double)n/(double)len);
long noOfAInReps = reps * a_counter;
long rem = n - len*reps;
if (rem > 0)
{
    for(int i =0; i < rem; i++)
    {
        if(s[i] == 'a')
        {
            noOfAInReps++;
        }
    }
}
else //== 0
{
    //Do nothing
}
return noOfAInReps;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

