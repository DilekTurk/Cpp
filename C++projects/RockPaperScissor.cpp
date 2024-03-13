#include <iostream>
#include <ctime>
char computerChoice();
char userChoice();
void winner(char Player, char Computer);

int main(){
    char letter; 
    std::cout<<"***Rock Paper Scissors***\n";
    std::cout<<"*************************\n";
    do{
        char Player = userChoice();
        char Computer = computerChoice();
        winner(Player,Computer);
        std::cout<<"If you want to quit, press Q. If not, press another letter.";
        std::cin>>letter;

    }while (letter!='q'&&letter!='Q');
    std::cout<<"Thanks for visiting!!!";
    return 0;
}

char computerChoice(){
    char computerChoice;
    srand(time(0));
    int randNum = (rand()%3)+1;
    switch(randNum){
        case 1: return 'P';
        break;
        case 2: return 'R';
        break;
        case 3: return 'S';        
    }
    return 0;
}

char userChoice(){
    char Choice;
    do{
        std::cout<<"Enter your choice:\n";
        std::cout<<"P : Paper\n";
        std::cout<<"R : Rock\n";
        std::cout<<"S : Scissor\n";
        std::cin>>Choice;
    }while((Choice!='R'&&Choice!='r')&&(Choice!='P'&&Choice!='p')&&(Choice!='S'&&Choice!='s'));
    
    switch(Choice){
        case 'P':
        case 'p': return 'P';
        case 'R':
        case 'r': return 'R';   
        case 'S':
        case 's': return 'S';        
    }
    return 0;
}

void winner(char Player, char Computer){
    std::cout<<"You: "<<Player<<'\n';
    std::cout<<"Computer: "<<Computer<<'\n';
    if(Player==Computer){
        std::cout<<"Ended in a draw\n";
    }
    else if((Player=='P' && Computer=='R')||(Player=='R' && Computer=='S')||(Player=='S' && Computer=='P')){
        std::cout<<"YOU WON!!!\n";
    }
    else{
        std::cout<<"You lose.\n";
    }
}