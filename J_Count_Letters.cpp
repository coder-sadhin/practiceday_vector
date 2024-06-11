#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    vector <int> clist(26,0);
    for (int i = 0; i < s.size(); i++)
    {
        int val = s[i] - 'a';
        clist[val]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (clist[i] != 0)
            cout << char(i + 'a') << " : " << clist[i] << endl;
    }

    return 0;
}