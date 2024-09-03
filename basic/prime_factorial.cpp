#include <iostream>
using namespace std;

int isPrime(int n)
{
  if(n<=1)
  {
  return false;
  }


   if(n%2==0)
      {
         return false;
      }

  return true;
}

int factorial(int n)
{
    int fact =1;
    for(int i=2;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}

void primeFactorial(int n)
{
    if(isPrime(n))
    {
        int result = factorial(n);
        cout<<"factorial of "<<n<< " is "<<result<<endl;
    }
    else
    {
        cout<<" not a prime number"<<endl;
    }
}

int main()
{
    int num;
    cout<<"enter an number"<<endl;
    cin>>num;
    primeFactorial(num);

    return 0;
}
