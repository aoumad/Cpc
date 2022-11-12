public class Solution
{
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int sum = 0, minVal = 0, index = 0;
        int n = gas.length;
        if (gas == null || cost == null || gas.length == 0)
            return (-1);
        for (int i=0; i<gas.length; ++i) {
            sum += gas[i]-cost[i];
            if (sum<minVal) {
                minVal = sum;
                index = i+1;
            }
        }
        return sum>=0?(index== n?0:index):-1;
    }
}