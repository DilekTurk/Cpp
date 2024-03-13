#include <iostream>
#include <ctime>
int main(){

    srand(time(0));
    int randNum = (rand()%5)+1;
    switch(randNum){
        case 1: std::cout<<"Study.";
        break;
        case 2: std::cout<<"Play a video game.";
        break;
        case 3: std::cout<<"Watch a movie.";
        break;
        case 4: std::cout<<"Tidy your bedroom.";
        break;
        case 5: std::cout<<"Read a book.";
        break;
    }
    return 0;
}