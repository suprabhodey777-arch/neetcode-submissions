class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if(s.length()==0){
            return true;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='{' || s[i]=='['|| s[i]=='('){
                st.push(s[i]);

            }
            
            else{
                if(st.size()==0){
                    return false;
                }
                char temp=st.top();
                st.pop();
                if ((s[i]=='}' && temp!='{') || (s[i]==')' && temp!='(') || (s[i]==']' && temp!='[')){
                    return false;
                }
            }
        }
        if(st.size()!=0){
            return false;
        }
        return true;
       
       
        
    }
};
