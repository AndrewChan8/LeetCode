double myPow(double x, int n) {
  long int m = n;
  if(m == 0){
    return 1;
  }

  if(m < 0){
    x = 1 / x;
    m = -m;
  }

  if(m % 2 == 0){
    double halfPower = myPow(x, m / 2);
    return halfPower * halfPower;
  }else{
    return x * myPow(x, m - 1);
  }
}