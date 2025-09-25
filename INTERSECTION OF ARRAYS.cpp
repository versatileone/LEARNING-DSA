#include<iostream>
#include<vector>
using namespace std;

void intersection(int arr[],int sizea ,int srr[],int sizes){
    vector<int> ans;
    int i=0;int j=0;

    while(i<sizea && j<sizes){
        while(arr[i]<srr[j]){
            i++;
        }
        while(srr[j]<arr[i] && i<sizea && j<sizes){
            j++;
        }
        if(arr[i]==srr[j] && i<sizea && j<sizes){
            ans.push_back(arr[i]);
            i++;
            j++;
        }


    }
    cout << "Intersection: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

}

int main(){
    
    int arr[10]={3,6,8,10,33,33,45,61,155,178};
    int srr[10]={2,5,8,9,12,30,155,167,178,1100};

    intersection(arr,10,srr,10);
}