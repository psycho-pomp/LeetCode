class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer> presentIndex = new HashMap<>();
      for(int i=0;i<nums.length;i++){
          int complement = target - nums[i];
          if(presentIndex.containsKey(complement)){
              return new int[] { presentIndex.get(complement), i };
          }
          presentIndex.put(nums[i],i);
      }
      return null;
    }
}