class Solution {
    public int[] nextGreaterElements(int[] nums) {
        Stack<Integer> st = new Stack<>();
        int[] ans = new int[nums.length];
        Arrays.fill(ans,-1);
        for(int i=0;i<2*nums.length;i++){
            int idx = i % nums.length;
            while(!st.isEmpty() && nums[st.peek()]<nums[idx]){
                ans[st.pop()] = nums[idx];
            }
            st.push(idx);
        }
        return ans;
    }
}