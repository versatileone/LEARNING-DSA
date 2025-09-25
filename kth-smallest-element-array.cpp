#include<iostream>
using namespace std;

int main(){
    int arr[5]={21,5,4,101,20};
    int k=4;
    int min=arr[0];
    int min_ind=0;
    for(int j=0;j<k;j++){
        int min=arr[0];
        int min_ind=0;
    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
            min_ind=i;
        }
        

    }arr[min_ind]=1000;
cout<<j+1<<" smallest element :"<<min<<endl;
}

    

}