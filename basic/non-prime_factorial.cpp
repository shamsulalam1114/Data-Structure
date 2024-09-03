#include <iostream>
using namespace std;

bool isnonPrime(int n)
{
  if(n<=1)
  {
  return false;
  }


   if(n%2==0)
      {
         return true;
      }

  return false;
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

void nonprimeFactorial(int n)
{
    if(isnonPrime(n))
    {
        int result = factorial(n);
        cout<<"factorial of "<<n<< " is "<<result<<endl;
    }
    else
    {
        cout<<" not a non-prime number"<<endl;
    }
}

int main()
{
    int num;
    cout<<"enter an number"<<endl;
    cin>>num;
    nonprimeFactorial(num);

    return 0;
}
