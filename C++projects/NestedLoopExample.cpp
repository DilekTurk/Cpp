#include <iostream>

int main(){

    int rows;
    int columns;
    char symbol;

    std::cout<<"Please enter the number of rows: ";
    std::cin>>rows;

    std::cout<<"Please enter the number of columns: ";
    std::cin>>columns;

    std::cout<<"Please enter the symbol: ";
    std::cin>>symbol;

    for(int i=1; i<=rows;i++){
        for(int j=1; j<=columns; j++){
            std::cout<<symbol;
        }
        std::cout<<'\n';
    }





}