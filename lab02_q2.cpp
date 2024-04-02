#include<iostream>
#include <climits>
using namespace std;
template<size_t N>
int hourglassSum(int (&arr)[N][N]){
    int max = arr[0][0] + arr[0][1] + arr[0][2] +
              arr[1][1] +
              arr[2][0] + arr[2][1] + arr[2][2];;
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            int a;
            a=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            if (max<a){
                max=a;
            }

        }
    }
return max;
}
int main(){
    int num[6][6];
    for (int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>num[i][j];
        }
    }
    cout<<hourglassSum(num);
}