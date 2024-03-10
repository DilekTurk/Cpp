#include <iostream>
#include <cmath>

int main(){

    double x;
    double y;

    std::cout<<"Please enter the perpendicular sides of the triangle: "<<'\n';
    std::cout<<"Side 1: ";
    std::cin>>x;
    std::cout<<"Side 2: ";
    std::cin>>y;

    double hypotenuse = sqrt(x*x+y*y);

    std::cout<<"The hypotenuse is "<<hypotenuse<<".";



}
