#include <iostream>

int main(){

    double x;
    double y;
    char op;

    std::cout<<"Number 1: ";
    std::cin>>x;

    std::cout<<"Number 2: ";
    std::cin>>y;

    std::cout<<"Enter an operator (+,-,/,*): ";
    std::cin>>op;


    switch(op){
        case '+': 
            std::cout<<"The result is "<<x+y<<".";
            break;
        case '-': 
            std::cout<<"The result is "<<x-y<<".";
            break;
        case '*': 
            std::cout<<"The result is "<<x*y<<".";
            break;
        case '/': 
            std::cout<<"The result is "<<x/y<<".";
            break;
        default: std::cout<<"Enter an operator (+,-,/,*).";
        
    }
}