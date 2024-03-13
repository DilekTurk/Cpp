#include <iostream>
int searchElement(double array[], int size, double element);

int main(){
    double array[] = {1.1, 3.4, 5, 5.7};
    int size = sizeof(array)/sizeof(double);
    double element;
    std::cout<<"Please enter the element you would like to search for: ";
    std::cin>>element;
    int index=searchElement(array,size,element);
    if(index==-1){
        std::cout<<"The element is not in the array.";
    }
    else{
        std::cout<<"The element's index: "<<index;
    }

    return 0;
}
int searchElement(double array[], int size, double element){
    for(int i=0; i<size; i++){
        if(array[i]==element){
         return i;
        }
    }
    return -1;
}