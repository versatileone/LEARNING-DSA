#include<iostream>
using namespace std;


int main (){
    int count=0;
    int i =0;int arr[11]={1,5,8,16,12,56,78,98,54,96,36};
    int size=11;
    while(i<size){
        int store=arr[i];
        int store_index=i;
        i+=store;
        count+=1;
        if(i<size){
            continue;
        }
        else{
            break;
        }

    }
    cout<<"min. no. of jump count is :"<<count;
}