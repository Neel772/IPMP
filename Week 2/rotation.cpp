#include <iostream>
using namespace std;

void printRotation(int arr[],int length,int k){
    while(k--){
        int temp = arr[length -1];
    for(int i=0;i<length-1;i++){
        arr[i+1] = arr[i];
    }
    arr[0] = temp;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int size,k;
        cin>>size>>k;
        int arr[size];
        for(int i=0;i<size;i++)
        cin>>arr[i];
        printRotation(arr,size,k);
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}