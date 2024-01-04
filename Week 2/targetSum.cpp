//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
        sort(arr,arr+n-1);
        for(int i=0;i<n;i++){
            int sum1 = x-arr[i];
            if(sum1 < arr[i]){
                for(int j=0;j<i;j++){
                    if(sum1 == arr[j]){
                        return true;
                    }
                }
            }
            else if (sum1 > arr[i])
            {
                for(int j=i+1;j<n;j++){
                    if(sum1 == arr[j]){
                        return true;
                    }
                }
            }
            else{
                if(sum1 == arr[i-1] && i>0){
                    return true;
                }
                if(sum1 == arr[i+1] && i<n-1){
                    return true;
                }
            }            
            }
            return false;
        }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

// } Driver Code Ends