#include<iostream>
using namespace std;

void printarray(int arr[],int size){
    int i=0;
    while(i<size){
        cout<<arr[i]<<",";
        i++;
    }
}

void rotatearray(int arr[],int size){
    int store=arr[size-1];
    int i=size-1;
    while(0<i){
        arr[i]=arr[i-1];
        i--;
    }
    arr[0]=store;
    printarray(arr,size);
}


int main(){
    int arr[5]={1,2,3,4,5};
    rotatearray(arr,5);
}