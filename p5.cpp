#include <iostream>
#include <string>
void print(int age,std::string name){
    std::cout<<"name is "<<name<<".  age is "<<age;
}
int main(){
    int age;
    std::string name;
    std::cout<<"enter name: ";
    std::cin>>name;
    std::cout<<"enter age: ";
    std::cin>>age;
    print(age,name);
}