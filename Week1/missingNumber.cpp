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

//optimised version

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum =0;
        for(int i: array){
            sum += i;
        }
        return (n*(n+1)/2 - sum);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
