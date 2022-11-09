// it doesn't pass all test cases specailly when the first positive results of dp[i] starts from the last gas station
//needs to be fixed asap

class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost)
    {
        int n = gas.length;
        if (n == 0) return 0;
        int[] dp = new int[n];
        int index = 0;
        int sum = 0;
        boolean found = false;
        for (int i = 0; i < n; i++)
        {
            dp[i] = gas[i] - cost[i];
            if (found == false && dp[i] >= 0)
            {
                found = true;
                index = i;
            }
        }
        int j = index;
        if (found == true)
        {
            for (int i = 0; i < n; i++, j++)
            {
                if (j == n)
                    j = 0;
                sum += dp[j];
            }
        }
        if (found == false || sum < 0)
        {
            return (-1);
        }
        return index;
    }
}