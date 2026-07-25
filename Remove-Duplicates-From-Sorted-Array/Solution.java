class Solution {

    public int removeDuplicates(int[] nums) {
        // Brute force 
        // HashSet<Integer> remDup = new HashSet<>();
        // for (int i = 0; i < nums.length; i++) {
        //     remDup.add(nums[i]);
        // }
        // int[] arr = new int[remDup.size()];
        // for (int i = 0; i < arr.length; i++) {
        //     arr[i] = remDup.next();
        // }

        // return remDup.size();
        // Two Pointer 

        int i = 0;
        for (int  j = 0 ; j <nums.length ; j++){
            if(nums[i] != nums[j]){
                nums[i + 1] = nums[j];
                i++;
            }
        }

        return i+1;
    }
}
