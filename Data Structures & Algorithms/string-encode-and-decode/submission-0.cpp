class Solution {
public:
    string encode(vector<string>& strs) {
        string ans = "";
        for(string s: strs){
            ans+= to_string(s.size())+"#"+s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0,n=s.size();

        while(i<n){
            int num = 0;
            int index = s.find('#',i);
            string lenString =s.substr(i,index-i);
            int len = stoi(lenString);
            i = index +1;
            string s1 = s.substr(i,len);
            ans.push_back(s1);
            i+=len;
        }
        return ans;
    }
};
