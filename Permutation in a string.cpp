//Contributed by prat31

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()==0||s2.size()==0||s2.size()<s1.size())   return false;
        vector<int> arr(26);
        for(char ch: s1){
            arr[ch-'a']++;
        }
        int left =0;
        int right = s1.size()-1;
        vector<int> temp(26);
        for(int i=0; i<s1.size(); i++){
            temp[s2[i]-'a']++;
        }
        if(temp==arr)   return true;
        right++;
        while(right<s2.size()){
            temp[s2[right]-'a']++;
            temp[s2[left]-'a']--;
            if(temp==arr)   return true;
            left++;
            right++;
        }
        return false;
    }
};