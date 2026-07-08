class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // for a single element vector
        if(strs.size()==1){
            return {strs};
        }
        
        unordered_map<string,vector<string>>m1;
        vector<vector<string>>d;
        for(string x: strs){
            string  copy1 = x;
            sort(x.begin(),x.end());//sorted 
            m1[x].push_back(copy1);
         }//map has all the vectors with each sorted word
        for(auto &p:m1){
            d.push_back(p.second);
        }
        return d;


        
    }
};
