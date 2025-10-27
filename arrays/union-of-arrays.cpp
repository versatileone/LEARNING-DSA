#include<iostream>
#include<vector>
using namespace std;

void unionofarray(int arr[],int sizea,int srr[],int sizes){
     vector<int> ans;
     int i=0;int j=0;
     while(i<sizea && j<sizes){
        if(arr[i]<srr[j] && (i<sizea && j<sizes)){
            ans.push_back(arr[i]);
            i++;
        }
        if(arr[i]>srr[j] && (i<sizea && j<sizes)){
            ans.push_back(srr[j]);
            j++;
        }
        if(arr[i]==srr[j] && (i<sizea && j<sizes)){
            ans.push_back(arr[i]);
            i++;
            j++;
        }
      

        }
        if(i<sizea){
            if(arr[i]!=arr[i-1]){
                ans.push_back(arr[i]);
            }
        }
        if(j<sizes){
            if(srr[j]!=srr[j-1]){
                ans.push_back(srr[j]);
            }
        }
    cout << "union: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
     }
     



int main(){
    int arr[5]={1,2,2,3,7};
    int srr[5]={2,3,4,5,6};

    unionofarray(arr,5,srr,5);

}