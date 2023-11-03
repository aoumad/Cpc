import java.util.*;

class Solution {
    public int[] productExceptSelf(int[] nums)
    {
        int [] output = new int[nums.length];
        Arrays.fill(output, 1);

        int left = 1;
        int right = 1;
        for (int i = 0; i < nums.length; i++)
        {
            output[i] = output[i] * left;
            left = left * nums[i];
        }
        for (int i  = nums.length - 1; i >= 0; i--)
        {
            output[i] = output[i] * right;
            right = right * nums[i];
        }
        return (output);
    }

    public static void main(String[] args)
    {
        Solution solution = new Solution();

        int[] input = {1, 2, 3, 4};
        int[] result = solution.productExceptSelf(input);

        System.out.println("Result: ");
        for (int num: result)
            System.out.println(num + " ");
    }
}