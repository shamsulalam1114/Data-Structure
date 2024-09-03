
#include <iostream>
using namespace std;

int isPositive(int n)
{
  if(n<0)
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

void PositiveFactorial(int n)
{
    if(isPositive(n))
    {
        int result = factorial(n);
        cout<<"factorial of "<<n<< " is "<<result<<endl;
    }
    else
    {
        cout<<" not a positive number"<<endl;
    }
}

int main()
{
    int num;
    cout<<"enter an number"<<endl;
    cin>>num;
    PositiveFactorial(num);

    return 0;
}
