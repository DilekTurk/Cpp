#include <iostream>

double getTotal(double prices[], int size);

int main(){
    double prices[]={10,20.10,30.90,9};
    int size=sizeof(prices)/sizeof(double);
    std::cout<<"The total: "<<getTotal(prices, size);
    return 0;
}
double getTotal(double prices[], int size){ 
    double total=0;
    for(int i=0; i<size; i++){
        total+=prices[i];
    }
    return total;

}