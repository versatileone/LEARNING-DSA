#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> ans;
    int i=0; int j=0;int k=0;
    int arr[7]={1, 5, 10, 20,40, 80,120};
    int srr[6]={6, 7, 20, 80, 100,120};
    int brr[8]={3, 4,15,20, 30, 70, 80, 120};

    while(i<7 && j<6 && k<8){
        if(arr[i]<srr[j] && i<7 ){
            i++;
        }
        else if(arr[i]>srr[j] && j<6){
            j++;
        }
        else{
            if(arr[i]==brr[k] && k<8){
            ans.push_back(arr[i]);
            k++;
            i++;
            j++;
        }
        else{
            k++;
        }
    }
}
   cout << "intersection of arr brr srr: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
     }
     