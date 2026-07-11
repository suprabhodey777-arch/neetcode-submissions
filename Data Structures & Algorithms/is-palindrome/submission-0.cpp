class Solution {
public:
    bool isPalindrome(string str) {
        
        string mod="";
        for(int i=0;i<str.size();i++){
            if(isalnum(str[i])){
                mod+=tolower(str[i]);

            }
            
        }
        int left=0;
        int right=mod.size()-1;
        while(left<right){
            if(mod[left]!=mod[right]){
                return false;
            }
           left++;
           right--;
        }
        return true;
        
       
       
        
    }
};
