#include <iostream>

int main(){
    char unit;
    double temp;
    std::cout<<"Please enter the temperature's unit (Fahrenheit = F or Celcius = C): ";
    std::cin>>unit;
    std::cout<<"Please enter the temperature: ";
    std::cin>>temp;

    switch(unit){
        case 'C': temp = temp*1.8 + 32;
                  std::cout<<"The temperature is "<<temp<<"°F.";
                  break;
        case 'F': temp = (temp-32) / 1.8;
                  std::cout<<"The temperature is "<<temp<<"°C.";
                  break;
        default: std::cout<<"This is not a valid unit.";
        
    }
    return 0;

}