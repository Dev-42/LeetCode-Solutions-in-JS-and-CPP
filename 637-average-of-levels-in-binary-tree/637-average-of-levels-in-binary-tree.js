let averageOfLevels = function(root)
{
    let average = [];
    let queue = [root];
    while(queue.length)
        {
            let sum = 0;
            let s = queue.length;
            for(let i = 0 ;i < s;i++)
                {
                    let node = queue.shift();
                    sum += node.val;
                    if(node.left)
                        queue.push(node.left);
                    if(node.right)
                        queue.push(node.right);
                }
         average.push(sum/s);
        }
    return average;
}