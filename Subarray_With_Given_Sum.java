
class Solution {
    static ArrayList<Integer> subarraySum(int[] arr, int n, int s) {
        int start = 0;
        int end = 0;
        int sum = 0;
        ArrayList<Integer> ans = new ArrayList<>(2);

        while (end < n || sum >= s) {
            if(s==0){
                break;
            }
            if (sum == s) {
                ans.add(start + 1);
                ans.add(end);
                return ans;
            }

            if (sum < s && end < n) {
                sum += arr[end];
                end++;
            } else {
                sum -= arr[start];
                start++;
            }
        }

        ans.add(-1);
        return ans;
    }
}
