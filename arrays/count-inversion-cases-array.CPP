#include<iostream>
using namespace std;

int main (){
    int count=0;
    int arr[5]={2,4,1,3,5};
    int i=0;int size=5;int j=size-1;
    while(i<j){
        if(arr[i]>arr[j]){
            count+=1;
        }
        j--;
        if(arr[i]==arr[j]){
            j=size-1;
            i++;
        }

    }
    cout<<"count of inversion cases is :"<<count;
}