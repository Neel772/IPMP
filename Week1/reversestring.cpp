class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=s.size();
        vector<char>p(l);
        for(int i=0;i<l;i++){
            p[l-i-1] = s[i];
        }
        s=p;
        }
};

class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0;i<s.size()/2;i++){
            char temp = s[i];
            s[i] = s[s.size()-i-1];
            s[s.size()-i-1] = temp;
        }
    }
};
