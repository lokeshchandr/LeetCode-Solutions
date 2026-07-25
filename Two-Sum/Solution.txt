class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        // o(n2)
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return new int[] { i, j };
                }

            }
        }
        return  new int[]{0};


        // Hashmap <Integer, Integer> checktsum = new 
        Hashmap<>();
        // for (int i = 0; i < n - 1; i++){
        //     int avai = target - nums[i];
        //     if(checktsum.containsKey(avai)){
        //         return new int[] {checktsum.get
        (avai), i}
        //     }
        //     checktsum.put(nums[i], i );
        }
    }

