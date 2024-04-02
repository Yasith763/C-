#include <iostream>
using namespace std;
void num(int * x){
    (*x)++;
    cout<<*x<<endl;

}
void number(int &y){
    y++;
    cout<<y<<endl;

}
int main(){
    int n = 10;
    int *p = &n;
    cout<<p<<endl;
    cout<<*p<<endl;
    p++;
    cout<<p<<endl;
    num(p);
    number(n);

    return 0;



}