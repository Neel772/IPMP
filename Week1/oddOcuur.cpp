#include <bits/stdc++.h>
using namespace std;

int getOddOcuurence(int arr[],int n){
    unordered_map <int,int> hash;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for(auto i: hash){
        if(i.second % 2 ==1) return i.first;
    }
    return -1;
}

int main(){
    int size = 7;
    int arr[] = {1,2,3,2,3,1,3};
    cout<<getOddOcuurence(arr,size);
    return 0;
}