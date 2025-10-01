#include<iostream>
#include<algorithm>
using namespace std;

void printarray(int arr[],int size){
    int i=0;
    while(i<size){
        cout<<arr[i]<<",";
        i++;
    }
}
int main(){
    int a[6]={1, 5, 9, 10, 15, 20};
    int b[4]={2, 3, 8, 13};
    int sizea=6;
    int j=3;

    while(j>=0){
        swap(a[5],b[j]);
        sort(a,a+sizea);
        j--;
    }
    printarray(a,6);
    cout<<endl;
    printarray(b,4);
}