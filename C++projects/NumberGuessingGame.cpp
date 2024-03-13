#include <iostream>
#include <ctime>
int main(){
    int num;
    int guess;
    int tries;
    srand(time(0));
    num = (rand()%100)+1;

    std::cout<<"********Number Guessing Game********"<<'\n';

    do{
         std::cout<<"Please enter an integer between 0 and 100: ";
         std::cin>>guess;
         tries++;
         if(guess>num){
            std::cout<<"Too high!"<<'\n';
         }
         else if(guess<num){
            std::cout<<"Too low!"<<'\n';
         }
         else{
            std::cout<<"CORRECT!!!"<<'\n';
            std::cout<<"Number of tries: "<<tries<<'\n';
         }
    }while(guess!=num);

    std::cout<<"*******************************";

    return 0;
   
}