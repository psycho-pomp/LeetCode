class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        int[] hash=new int[1001];
        for(int value:nums1){
            hash[value]++;
        }
        List<Integer> resList=new ArrayList<>();
        for(int value:nums2){
            if(hash[value]>0){
                resList.add(value);
                hash[value]--;
            }
        }
        int [] res=resList.stream().mapToInt(i->i).toArray();
        return res;
        
    }
}