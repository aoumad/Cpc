// Breadth FIRST search approach
class Solution
{
    public boolean canFinish(int numCourses, int[][] prerequisites)
    {
        int length = prerequisites.length;
        if (numCourses == 0 || len == 0)
            return true;
        if (prerequisites == null)
            throw new IllegalArgumentException("IllegalArgumentException called");
        if (numCourses < 0 || numCourses > length)
            throw new IllegalArgumentException("numCourses must be in range [0, " + length + "]");

        int[] preCounter = new int[numCourses]; // Counter of prerequisites
        for (int i = 0; i < length; i++)
            preCounter[prerequisites[i][0]]++;

        LinkedList<Integer> queue = new LinkedList<Integer>(); // store courses that have no prerequisites
        for (int i = 0; i < numCourses; i++)
        {
            if (preCounter[i] == 0)
            {
                queue.add(i);
            }
        }
        int lengthQueue = queue.size();
        while (!queue.isEmpty())
        {
            int course = queue.poll();
            for (int i = 0; i < length; i++)
            {
                if (course == prerequisites[i][1])
                {
                    preCounter[prerequisites[i][0]]--;
                    if (preCounter[prerequisites[i][0]] == 0)
                    {
                        lengthQueue++;
                        queue.add(prerequisites[i][0]);
                    }
                }
            }
        }
        return (lengthQueue == numCourses);
    }
}