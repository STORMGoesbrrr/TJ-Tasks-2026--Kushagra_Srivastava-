#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int l=s.size();
    string flag="No";

    unordered_map <char,char> mp;
    for(int i=0; i<l/2; i++){
        mp[s[i]]=s[l-i-1];
    }
    for(auto i:mp){
        if((i.first=='{' && i.second=='}') || (i.first=='[' && i.second==']') || (i.first=='(' &&  i.second==')')){
            flag="Yes";
        }
        else{
            flag="No";
        }
    }
    cout<<flag<<endl;
    return 0;
}