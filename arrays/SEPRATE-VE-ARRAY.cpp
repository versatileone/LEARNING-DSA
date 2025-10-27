#include<iostream>
using namespace std;

void printarray(int arr[],int size){
    int i=0;
    while(i<size){
        cout<<arr[i]<<",";
        i++;
    }
}

int sort(int arr[],int size){
    int i=0;
    int j=size-1;

    while(i<j){
       while(arr[i]<0 && i<j){
        i++;

        }
        while(arr[j]>0 && i<j){
            j--;
        }
        if(arr[i]>0 && arr[j]<0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
    }
    printarray(arr,size);
}


int main(){
    int arr[5]={2,-3,40,-35,1};
    sort(arr,5);
}