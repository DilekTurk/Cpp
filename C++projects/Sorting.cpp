#include <iostream>
void sort(int array[], int size);
int main(){
    int array[] = {10,7,5,8,1,3,2,6,4,9};
    int size = sizeof(array)/sizeof(int);
    sort(array,size);
    for(int element: array){
        std::cout<<element<<" ";
    }
    return 0;
}
void sort(int array[], int size){
    int temp;
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1-i; j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}