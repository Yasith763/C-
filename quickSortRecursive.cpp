#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
int partition(vector<int> &arr, int l, int h) {
    int p = arr[h];
    int i = l - 1;
    for (int j = l; j < h; j++) {
        if (arr[j] <= p) {
            i++;  
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return (i + 1);
}
void quickSort(vector<int> &arr, int l, int h) {
    if (l < h) {
        int p = partition(arr, l, h);
        quickSort(arr, l, p - 1);
        quickSort(arr, p + 1, h);
    }
}
int main() {

    vector<int> arr={14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
    int n=arr.size();
    quickSort(arr, 0,n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1)
            cout << " ";
    }
    cout << endl;
    return 0;
}




