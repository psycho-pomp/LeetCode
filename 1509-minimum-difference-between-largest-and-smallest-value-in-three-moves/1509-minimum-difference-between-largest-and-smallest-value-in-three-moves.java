class Solution {
    public int minDifference(int[] nums) {
        int n=nums.length;
        if(n<=3) return 0;
        Arrays.sort(nums);

        int minDiff = Integer.MAX_VALUE;

        // Four scenarios to compute the minimum difference
        for (int left = 0, right = n - 4; left < 4; left++, right++) {
            minDiff = Math.min(minDiff, nums[right] - nums[left]);
        }

        return minDiff;
        
        
    }
}