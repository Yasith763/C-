#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void MergeSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i <= n - 1; i = 2*i) {
        for (int l= 0;l< n - 1; l+= 2*i) {
            int m = min(l+ i- 1, n - 1);
            int r= min(l+ 2 *i- 1, n - 1);
            merge(arr, l, m, r);
        }
    }
}
int main(){
    vector<int> Arr={14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
    MergeSort(Arr);
    for(int i :Arr){
         cout<<i<<" ";
    }
}
