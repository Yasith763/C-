#include <iostream>
using namespace std;
int* reverse_array(int n,int* arr){
    
    int reverse_arr[n];
    for(int i=n;i>0;i--){
        reverse_arr[n-i]=arr[i-1];
        }
    return reverse_arr;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    int*p;
    p=reverse_array(n,arr);
    for(int k=0;k<n;k++){
        cout<<p[k]<<" ";

    }
}