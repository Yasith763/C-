#include <iostream>
#include <cstring>
using namespace std;
int * function(){
    static int n[]= {1,2,3,4};
    return n;

}
int main(){
    for (int i = 0; i < 4; i++)
    {
        cout<<function()[i]<<endl;
    }
    
    
}