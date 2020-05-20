//Contributed by prat31

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char> s;
        for(char c : J){
            s.insert(c);
        }
        int ans=0;
        for(char c : S){
            if(s.find(c)!=s.end())    ans++;
        }
        return ans;
    }
};