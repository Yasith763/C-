#include <iostream>
#include <string>
using namespace std;
int main(){
    int num1;
    int num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    string num[9]={"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=num1;i<=num2;i++){
        if(i<=9){
            cout<<num[i-1]<<endl;
        }
        else{
            if (i%2==0){
                cout<<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;
            }
        }
    }

}