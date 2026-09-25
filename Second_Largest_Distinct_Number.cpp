#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr;

    for(int i=0; i<n; i++){
        int N;
        cin>>N;
        arr.push_back(N);
    }
    int s=INT_MIN;
    int l=arr[0];
    for(int i=0; i<arr.size(); i++){
        if(l<arr[i]){
            s=l;
            l=arr[i];
        }
        else if(l>arr[i] && arr[i]>s){
            s=arr[i];
        }
    }
    if(s==INT_MIN){
        cout<<-1<<endl;
    }
    else{
        cout<<s<<endl;
    }
    return 0;
}