#include <iostream>
#include <limits>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

    int choice=0;
    double balance=0;

    do{

        std::cout<<"Please enter your choice: \n";
        std::cout<<"Show balance: 1\n"<<"Deposit: 2\n"<<"Withdraw: 3\n"<<"Exit: 4\n";
        std::cin>>choice;

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice){
        case 1: showBalance(balance);
                break;
        case 2: balance+=deposit();
                showBalance(balance);
                break;
        case 3: balance-=withdraw(balance);
                showBalance(balance);
                break;
        case 4: std::cout<<"Thanks for visiting!!!";  
                break;  
        default: std::cout<<"Please enter a valid choice: ";   
        }

    }while(choice!=4);
    
    return 0;
}
void showBalance(double balance){
    std::cout<<"Your balance: $"<<balance<<'\n';
}

double deposit(){
    double amount;
    std::cout<<"Amount: ";
    std::cin>>amount;
    if(amount>0){
        return amount;
    }
    else{
        std::cout<<"Please enter a valid amount.\n";
        return 0;
    }
}
    
double withdraw(double balance){
    double amount;
    std::cout<<"Amount: ";
    std::cin>>amount;
    if(amount>balance){
        std::cout<<"Please enter a valid amount.\n";
        return 0;
    }
    else if(amount<0){
        std::cout<<"Please enter a valid amount.\n";
        return 0;
    }
    else{
        return amount;
    }
}