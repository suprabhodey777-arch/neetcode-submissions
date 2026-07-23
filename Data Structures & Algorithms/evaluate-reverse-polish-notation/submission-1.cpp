class Solution {
public:
    int evalRPN(vector<string>& nums) {
        stack<int>s;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]=="+"){
                int a=(int)(s.top());
                s.pop();
                int b=(int)(s.top());
                s.pop();
                ans=a+b;
                s.push(a+b);
            }
            else if(nums[i]=="-"){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                s.push(b-a);
            }
            else if(nums[i]=="*"){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                s.push(a*b);


            }
            else if(nums[i]=="/") {
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                s.push(b/a);
            
            }

            
            else{
                 s.push(stoi(nums[i]));
            }
           
            
        }
        return s.top();

        
         
        
        
    }
};
