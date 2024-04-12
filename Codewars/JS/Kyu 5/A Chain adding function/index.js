function add(n){
  var sum = (x) => { return add(n + x); };

  sum.valueOf = () => { return n; };
  
  return sum;
}