//Contributed by prat31

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        if(s.size()==0 || s.size()<p.size()) return result;
        vector<int> arr(26, 0);
        for(int i=0; i<p.size(); i++){
            arr[p[i]-'a']++;
        }
        int left = 0;
        int right = p.size()-1;
        vector<int> temp(26, 0);
        for(int i=0; i<p.size(); i++){
            temp[s[i]-'a']++;
        }
        if(temp==arr)   result.push_back(0);
        if(s.size()==p.size())  return result;
        right++;
        while(right<s.size()){
            temp[s[right]-'a']++;
            temp[s[left]-'a']--;
            left++;
            if(temp==arr)   result.push_back(left);
            right++;
        }
        return result;
    }
};