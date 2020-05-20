//Contributed by prat31

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1;
        int h = n;
        int mid = l + (h-l)/2;
        while(l<h){
            if(isBadVersion(mid))
                h=mid-1;
            else
                l=mid+1;
            mid=l+(h-l)/2;
        }
        return isBadVersion(mid)?l:l+1;
    }
};