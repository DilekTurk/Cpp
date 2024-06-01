#include <iostream>

int main(){
    
    std::string questions[] = {"How many planets are there in the solar system?",
                               "Which one is Earth's only natural satellite?",
                               "Which one is the closest planet to the Sun?",
                               "Is the Earth flat?"};
    
    std::string options[][4] = {{"A. 12\n","B. 5\n","C. 8\n","D. 10\n"},
                                {"A. Moon\n","B. Sun\n","C. Mars\n","D. Pluto\n"},
                                {"A. Earth\n","B. Mercury\n","C. Uranus\n","D. Neptun\n"},
                                {"A. Yes\n","B. What is Earth?\n","C. Of course it is in a shape of a triangle.\n","D. No\n"}};
    char answer_key[] = {'C','A','B','D'};
    
    char answer;
    int size = sizeof(questions)/sizeof(questions[0]);
    int score=0;

    for(int i=0; i<size; i++){
        std::cout<<"*********************************"<<'\n';
        std::cout<<questions[i]<<'\n';
        std::cout<<"*********************************"<<'\n';
        for(int j=0; j<sizeof(options[i])/sizeof(options[i][0]);j++){
            std::cout<<options[i][j];
        }

        std::cin>>answer;
        answer=toupper(answer);

        if(answer==answer_key[i]){
            std::cout<<"Correct!!!\n";
            score++;
        }
        else{
            std::cout<<"Wrong.\n";
        }       
    }
    std::cout<<"*********************************"<<'\n';
    std::cout<<"SCORE: "<<(score/(double)size)*100<<"%";

    return 0;

}