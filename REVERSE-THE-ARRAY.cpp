#include<iostream>
using namespace std;


void printarray(int arr[],int size){
    int i=0;
    while(i<size){
        cout<<arr[i]<<",";
        i++;
    }
}

void reverse(int arr[],int size){
    int i=0,j=size-1;
    while(i<j){
       int temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
        i++;
        j--;
    }

}
int main(){
    int arr[4]={1,2,3,4};
    reverse(arr,4);
    printarray(arr,4);
}