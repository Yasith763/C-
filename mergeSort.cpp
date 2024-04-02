#include <iostream>
#include <vector>
using namespace std;
void Merge(vector<int>& Left,vector<int>& Right,vector<int>& Arr){
    int nL=Left.size();
    int nR=Right.size();
    int i=0,j=0,k=0;
    while((i<nL)&&(j<nR)){
        if(Left[i]<=Right[j]){
            Arr[k]=Left[i];
            i++;
        }
        else{
            Arr[k]=Right[j];
            j++;
        }
        k++;
    }
    while(i<nL){
        Arr[k]=Left[i];
        i++;k++;
    }
    while(j<nR){
        Arr[k]=Right[j];
        j++;k++;
    }   
}
vector<int> MergeSort(vector<int>& Arr){
    int n=Arr.size();
    if(n<2){
        return Arr;
    }
    else{
        int mid=n/2;
        /*vector<int> L(mid);
        vector<int> R(n-mid);
        for(int i=0;i<mid-1;i++){
            L[i]=Arr[i];
        }
        for(int j=mid;j<n-1;j++){
            R[j-mid]=Arr[j];
        }*/
        vector<int> L(Arr.begin(), Arr.begin() + mid);
        vector<int> R(Arr.begin() + mid, Arr.end());
        MergeSort(L);
        MergeSort(R);
        Merge(L,R,Arr);
        return Arr;
    }        
}
int main(){
    vector<int> Arr={14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
    MergeSort(Arr);
    for(int i :Arr){
         cout<<i<<" ";
    }
}

