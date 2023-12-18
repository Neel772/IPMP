#include <bits/stdc++.h>
using namespace std;

int missing(int arr[],int size){
    unordered_map <int,bool> hash;

    for(int i=0;i<size;i++){
        hash[arr[i]] = true;
    }

    for(int i=1;i<=size+1;i++){
        if(hash.find(i) == hash.end())
        return i;
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,5,6,7,8};
    int size =7;
    cout<<missing(arr,size);
    return 0;
}