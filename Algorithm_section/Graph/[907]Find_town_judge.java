// my own and naive approach that sadly didn't work where i used Map
class Solution {
    public int findJudge(int n, int[][] trust)
    {
        Map mp = new HashMap();
        if (n == 0 || n == 1)
            return (-1);
        for (int i = 0; i < trust.length; i++)
            mp.put(trust[i][1], trust[i][0]);
        if (mp.size() == 1)
        {
            if (mp.keySet().size() == 0)
                return (-1);
            else if (mp.keySet().size() == 1)
                return (mp.keySet());
            else if (mp.keySet().size() > 1)
            {
                mp.entrySet().stream().max((entry1, entry2) -> entry1.getValue() > entry2.getValue() ? 1 : -1).get().getKey();
            }
        }
        return (-1);
    }
}

// my second efficient approach

class Solution {
    public int findJudge(int n, int[][] trust)
    {
        if(n==0)
            return -1;
        if(n==1)
            return n;
        int[] ai = new int[n + 1];
        for (int[] it : trust)
        {
            ai[it[0]]--;
            ai[it[1]]++;
        }
        for (int i = 0; i <= n; i++)
        {
            if (ai[i] == n - 1)
                return i;
        }
        return -1;
    }
}