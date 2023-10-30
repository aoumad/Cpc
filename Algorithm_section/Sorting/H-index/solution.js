var hIndex = function(citations)
{
    citations.sort().reverse();
    var h = 0;
    for (var i = 0; i < citations.size(); i++)
    {
        if (citations[i] >= h + 1)
            h++;
        else
            break;
    }
    return h;
};