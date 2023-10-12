class Solution {
public:
    int findPeak(MountainArray &mountainArr, int l, int r){
        
        while(l != r){
            int mid = (r-l)/2 + l;
            int num = mountainArr.get(mid);
            int next = mountainArr.get(mid+1);

            if(next > num){
                l = mid+1;
            }
            else{
                r = mid;
            }
        }
        return l;
    }

    int binarySearch(int target, MountainArray &mountainArr, int l, int r, bool increase){
        int ans = -1;
        int mid = (r-l)/2 + l;

        while(l <= r){
            mid = (r-l)/2 + l;
            int num = mountainArr.get(mid);
            if(num == target){
                ans = mid;
            }

            if(increase){
                if(num > target){
                    r = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            else{
                if(num > target){
                    l = mid+1;
                }
                else{
                    r = mid-1;
                }
            }
        }

        return ans;
    }

    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int peakIn = findPeak(mountainArr, 1, n-2); 
        
        int l = binarySearch(target, mountainArr, 0, peakIn, true);
        int r = binarySearch(target, mountainArr, peakIn, n-1, false);

        if(l != -1){
            return l;
        }
        return r;
    }
};