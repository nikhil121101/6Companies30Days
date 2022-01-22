class Solution {
public:
    
    int getMountInd(MountainArray &mountainArray, int n) {
        int l = 1, r = n-2;
        int res = -1;
        while(l <= r) {
            int mid = l + (r-l)/2;
            int cur = mountainArray.get(mid);
            int prev = mountainArray.get(mid-1);
            if(prev < cur) {
                l = mid+1;
                res = mid;
            }
            else {
                r = mid-1;
                res = mid-1;
            }
        }
        return res;
    }
    
    int find(MountainArray &mountainArray, int l, int r, bool inc, int target) {
        while(l <= r) {
            int mid = l + (r-l)/2;
            int cur = mountainArray.get(mid);
            if(cur == target)
                return mid;
            else if((inc && cur < target) || (!inc && cur > target)) 
                l = mid+1;
            else
                r = mid-1;
        }
        return -1;
    }
    
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int mountInd = getMountInd(mountainArr, n);
        int leftInd = find(mountainArr, 0, mountInd, true, target);
        if(leftInd != -1) 
            return leftInd;
        return find(mountainArr, mountInd+1, n-1, false, target);
    }
};