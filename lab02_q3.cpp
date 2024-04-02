#include <iostream>
using namespace std;
int* rotateLeft(int n,int d,int* arr){
    int rotateLeft_arr[n];
    for(int i=n-1;i>=0;i--){
        if (i-d>=0){
            rotateLeft_arr[i-d]=arr[i];

        }
        else{
            rotateLeft_arr[n+(i-d)]=arr[i];
        }
    }
    return rotateLeft_arr;

}
int main(){
    int n;
    cin>>n;
    int d;
    cin>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int* p;
    p=rotateLeft(n,d,arr);
    for(int j=0;j<n;j++){
        cout<<p[j]<<" ";
    }
    return 0;

}