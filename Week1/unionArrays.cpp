#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> arrayUnion(vector<int>& nums1, vector<int>& nums2) {
        vector <int> v;
        int i=0,j=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int m = nums1.size();
        int n = nums2.size();
        int lastNumber = -1;
        while(i<m && j<n){
            if(nums1[i] == nums2[j]){
                if(lastNumber != nums1[i]){
                    v.push_back(nums1[i]);
                    lastNumber = nums1[i];
                }
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]){
                if(lastNumber != nums1[i]){
                    v.push_back(nums1[i]);
                    lastNumber = nums1[i];
                }
                i++;
            }
            else{
                if(lastNumber != nums1[i]){
                    v.push_back(nums2[j]);
                    lastNumber = nums2[j];
                }
                j++;
            }
        }
        while (i<m)
        {
            if(lastNumber != nums1[i]){
                    v.push_back(nums1[i]);
                    lastNumber = nums1[i];
                }
                i++;
        }
        while (j<n)
        {
            if(lastNumber != nums1[i]){
                    v.push_back(nums2[j]);
                    lastNumber = nums2[j];
                }
                j++;
        }
        
        
        return v;
    }
};

int main(){
    vector <int> a = {1,2,6,4,3};
    vector <int> b = {1,2,4,5,6,7};
    Solution sol;
    vector <int> arrayUnion = sol.arrayUnion(a,b);
    for(int i: arrayUnion){
        cout<<i<<" ";
    }
    return 0;
}
