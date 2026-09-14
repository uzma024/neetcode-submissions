class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m;
        for(int i=0;i<s.size();i++){
            if(m.find(s[i])!=m.end()){
                m[s[i]]++;
            }else{
                m[s[i]]=1;
            }
        }
        for(int i=0;i<t.size();i++){
            if(m.find(t[i])==m.end()){
                return false;
            }else{
                m[t[i]]--;
            }
        }
        for(auto & [ch,count]:m){
            if(count!=0){return false;}
        }
        return true;
    }
};
