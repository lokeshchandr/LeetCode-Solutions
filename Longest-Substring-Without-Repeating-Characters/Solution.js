class Solution {
    public int lengthOfLongestSubstring(String s) {
        int l = 0 , r =0 , maxlen = 0 ;
        int n = s.length();
        HashSet<Character> hset = new HashSet<>();
        while(r<n){
            if(!hset.contains(s.charAt(r)))
            {
                hset.add(s.charAt(r));
                r++;
                maxlen = Math.max(hset.size(), maxlen);
            }
            else
            {
                hset.remove(s.charAt(l));
                l++;
            }
        }
        return maxlen;
    }
}
