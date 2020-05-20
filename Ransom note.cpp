//Contributed by prat31

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> arr(26, 0);
        for(char c : ransomNote){
            arr[c-'a']++;
        }
        for(char c : magazine){
            arr[c-'a']--;
        }
        for(int i=0; i<26; i++){
            if(arr[i]>0)    return false;
        }
        return true;
    }
};