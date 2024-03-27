long zeros(long n)
{
  long result {0};
  int divisor {5};

  while(n > divisor)
  {
    result += n / divisor;
    divisor *= 5;
  }

  return result;
}