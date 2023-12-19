class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        string num = to_string(x);
        const char *p = num.c_str();
        int n = num.length();
        for(int i=0;i<n/2;i++){
            if(p[i] != p[n-i-1]) return false; 
        }
        return true;
    }
};

class Solution {
public:
    bool isPalindrome(int x) {
        if(x <0) return false;
        long long ori = x;
        long long rev =0;
        while(x != 0){
            rev = rev*10 + x%10;
            x /= 10;
        }
        if (ori == rev) return true;
        else return false;
    }
};

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        string num = to_string(x);
        string num1 = num;
        reverse(num1.begin(),num1.end());
        if(num == num1) return true;
        return false;
    }
};
