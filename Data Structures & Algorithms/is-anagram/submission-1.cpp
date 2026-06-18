class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        if (s.length()==t.length()){
            for(int i=0;i<s.length();i++){
                m1[s[i]]++;
                m2[t[i]]++;
            } 
            for(int i=0;i<s.length();i++){
                if (m1[s[i]] !=m2[s[i]]){
                    return false;
                }
            }
            
        }
        else{
            return false;
        }
        return true;

        
    }
};
