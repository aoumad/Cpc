var steps = function (nums)
{
    let maxJump = 0;
    let steps = 0;
    let end = 0;
    for (let i = 0; i < nums.length - 1; i++)
    {
        maxJump = Math.max(maxJump, i + nums[i]);
        if (i === end)
        {
            steps++;
            end = maxJump;
        }
    }
}