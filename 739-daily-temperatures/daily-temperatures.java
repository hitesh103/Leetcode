class Solution {
    class Pair {
        int val, ind;
        public Pair(int val, int ind) {
            this.val = val;
            this.ind = ind;
        }
    }
    public int[] dailyTemperatures(int[] t) {
        Stack<Pair> st = new Stack<>();
        int[] ans = new int[t.length];
        int curr = -1;
        for(int i=0; i<t.length; i++) {
            curr = t[i];
            while(!st.isEmpty() && st.peek().val < curr) {
                Pair p = st.pop();
                ans[p.ind] = i - p.ind; 
            }

            st.push(new Pair(curr, i));
        }

        return ans;
    }
}