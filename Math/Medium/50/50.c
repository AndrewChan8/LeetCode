double myPow(double x, int n) {
  if(n == 0){
    return 1;
  }

  if(n < 0){
    x = 1 / x;
    n = -n;
  }

  if(n % 2 == 0){
    double halfPower = myPow(x, n / 2);
    return halfPower * halfPower;
  }else{
    return x * myPow(x, n - 1);
  }
}