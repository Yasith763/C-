#include <iostream>
#include <string>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    if(number >= 9){
        cout<<"Greater than 9";
    }
    else{
        string num[9]={"one","two","three","four","five","six","seven","eight","nine"};
        cout<<num[number-1];


    }
    


}