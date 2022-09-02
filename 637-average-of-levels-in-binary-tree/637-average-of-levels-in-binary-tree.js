var averageOfLevels = function(root) 
{
  let averages = [];
  let queue = [root];
  while (queue.length) 
  {
    let sum = 0;
    const size = queue.length;
    for (let i = 0; i < size; i++) 
    {
      let node = queue.shift();
      sum += node.val;
      if (node.left) 
          queue.push(node.left);
      if (node.right) 
          queue.push(node.right);
    }
    averages.push(sum / size);
  }
  return averages;
};