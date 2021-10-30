#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string decTobin(int num){
    
    string ans="";
    int i=0;
    while(num>0){
        string rem=to_string(num%2);
        ans+=rem;
        num=num/2;

    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<decTobin(n)<<endl;
}