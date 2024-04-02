#include <iostream>
#include <array>
using namespace std;
int main(){
    array <int,3> num = {1,2,3};
    for(int i = 0;i<num.size();i++){
        cout<<num[i]<<endl;
    }
}