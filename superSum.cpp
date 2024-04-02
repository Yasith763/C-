#include <iostream>
#include <string>
using namespace std;
int superSum(string s,int n){
    if(n==1){
        return stoi(s);
    }
    else{
        int sum=0;
        for(int i=0;i<n;i++){
        sum=sum+s[i]-'0';
        }
        string j=to_string(sum);
        int k=superSum(j,j.length());
        return k;
    }
    
}
int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    cout<<superSum(s,n);
}