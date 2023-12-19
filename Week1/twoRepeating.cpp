#include <bits/stdc++.h>
using namespace std;

void twoRepeating(int a[],int n){
    unordered_map<int,int> hash;
    for(int i=0;i<n+2;i++)
    hash[a[i]]++;
    for(auto i: hash){
        if(i.second == 2)
        cout<<i.first<<" ";
    }
    cout<<endl;
}

int main(){
    int a[]={1,4,5,6,3,2,5,2};
    int n=6;
    twoRepeating(a,n);
    return 0;
}
