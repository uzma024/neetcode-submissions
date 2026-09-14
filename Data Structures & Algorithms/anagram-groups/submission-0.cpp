class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector <string>> m;

        for(auto s:strs){
            vector <int>v(26,0); 
            for(char c:s){
                v[c-'a']++;
            }
            if(m.find(v)!=m.end()){
                m.find(v)->second.push_back(s);
            }else{
                m[v]={s};
            }
        }
        vector <vector <string>> ans;

        for(auto& [seq, strings]: m){
            ans.push_back(strings);
        }
        return ans;
    }
};
