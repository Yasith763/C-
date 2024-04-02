#include<iostream>
#include<vector>
using namespace std;
vector<int> quickSort(vector<int> vec){
    int n = vec.size();
    int p = vec[0];
    vector<int> left;
    vector<int> right;
    vector<int> equal={vec[0]};
    for(int i=0;i<n-1;i++){
        if(p<vec[i+1]){
            right.push_back(vec[i+1]);
        }
        else if (p>vec[i+1]){
            left.push_back(vec[i+1]);
        }
        else{
            equal.push_back(vec[i+1]);
        }
    }
    vector<int> final(left.begin(), left.end());
    final.insert(final.end(), equal.begin(), equal.end());
    final.insert(final.end(), right.begin(), right.end());
    return final;
}

int main(){
    vector<int> Arr ;
    vector<int> Brr;
    int m;
    cin>>m;
    int n ;
    while(cin >> n){
        Arr.push_back(n);
    }
    Brr = quickSort(Arr);
    for(int i : Brr){
        cout << i << " ";
    }   
}