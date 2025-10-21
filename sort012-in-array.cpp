#include<iostream>
using namespace std;

void printarray(int arr[],int size){
    int i=0;
    while(i<size){
        cout<<arr[i]<<",";
        i++;
    }
    cout<<endl;
}



int main(){
    int arr[10]={1,2,1,2,1,2,1,0,0,0};
    int size=10;
    int i =0,j=size-1;
    while(i<j){
        if(arr[i]==2 && arr[j]!=2){
            swap(arr[i],arr[j]);
            i++;
            j++;
                }
        else if(arr[i]!=2){
            i++;
                }
        else{
            j--;
}
 

}
    i=0,j=size-1;
    while(i<j){
        if(arr[j]==2 || arr[j]==1){
            j--;
        }
        if(arr[i]==0){
            i++;
        }
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

    }
     printarray(arr,size);
   



}