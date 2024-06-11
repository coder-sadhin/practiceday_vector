#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;cin>>n>>q;
    vector <int> lst(n);
    for (int i = 0; i < n; i++){cin>>lst[i];}
    for (int i = 0; i < q; i++)
    {
        int l,r;cin>>l>>r;
        int count=0;
        for (int i = l-1; i < r; i++)
        {
            count+=lst[i];
        }
        cout<<count<<endl;
        
    }

    return 0;
}