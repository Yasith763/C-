#include <iostream>
int main(){
    int guessNumber=200;
    int num;
    do
    {
        std::cout<<"enter a number: ";
        std::cin>>num;
    
    } while (num!=guessNumber);
    std::cout<<"YOU WIN! ";
    return 0;
    
}