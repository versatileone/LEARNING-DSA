#include<iostream>
using namespace std;

int main(){
    int arr[7]={2, 3, -8, 7, -1, 2, 3};
    int curr_sum=arr[0];
    int max_sum=arr[0];
    for(int i=1;i<7;i++){
        curr_sum=max(arr[i],curr_sum+arr[i]);
        max_sum=max(curr_sum,max_sum);
    }
    cout<<max_sum;

}