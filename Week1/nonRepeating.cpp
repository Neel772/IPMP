#include <bits/stdc++.h>
using namespace std;

void nonRepeating(int arr[],int n){
    set <int> s;
    for (int i = 0; i < n; i++)
    {
        if(s.find(arr[i]) != s.end()){
            s.erase(arr[i]);
        }
        else s.insert(arr[i]);
    }
    for(auto it: s)
    cout<<it<<" ";
}

int main(){
    int arr[] = {1,1,2,3,3,5,6,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    nonRepeating(arr,size);
    return 0;
}