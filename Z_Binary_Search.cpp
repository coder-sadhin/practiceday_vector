#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;cin>>n>>q;
    vector <int> lst(n);
    for (int i = 0; i < n; i++){cin>>lst[i];}
    for (int i = 0; i < q; i++)
    {
        int x;cin>>x;
        auto y=find(lst.begin(),lst.end(),x);
        if(*y==x){
            cout<<"found\n";
        }else{
            cout<<"not found\n";
        }
    }

    return 0;
}