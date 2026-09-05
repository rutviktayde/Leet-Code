class Solution {
public:
    bool isPalindrome(int x) {
        int check=x,n;
        long double rev=0;
        while(x>0){
            n=x%10;
            rev=rev*10+n;
            x=x/10;
        }
        if(check==rev){
            return true;
        }else{
            return false;
        }
    }
};