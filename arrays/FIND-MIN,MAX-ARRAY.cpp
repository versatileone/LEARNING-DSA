#include<iostream>
using namespace std;


void max(int arr[],int size){
    int max=arr[0];
    int i=0;
    while(i<size){
        if(arr[i]>max){
            max=arr[i];
        }
        i++;
    }    
    cout<<"max no. is : "<<max<<endl;
}

void min(int arr[],int size){
    int min=arr[0];
    int i=0;
    while(i<size){
        if(arr[i]<min){
            min=arr[i];
        }
        i++;
    }    
cout<<"min no. is : "<<min<<endl;
}

int main(){
    int arr[5]={23,45,1,0,-1};
    max(arr,5);
    min(arr,5);
}