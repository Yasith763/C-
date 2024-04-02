#include <iostream>
#include <vector>
using namespace std;
void insertionSort(int n,int * arr){
    for(int i=1;i<n;i++){
        int t=arr[i];
        int k=i-1;
        while((k>=0) && (arr[k]>arr[k+1])){
            arr[k+1]=arr[k];
            arr[k]=t;
            k--;

        }
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";

        }
        cout<<endl;
    }

}
int main(){
    int n=5;
    int arr[n]={5,4,3,1,2};
    insertionSort(n,arr);
}