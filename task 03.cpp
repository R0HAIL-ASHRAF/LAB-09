#include<iostream>
using namespace std;
bool isprime(int);
int nthprime(int);

int main()
{
    int N;
    cout<<"Enter a number "<<endl;
    cin>>N;

    int prime = nthprime(N);
    cout<<"nth Prime number is "<<prime;
    return 0;


}
bool isprime(int num)
{
    if(num <2)
    return false;

    for(int i = 2;i<num; i++)
    {
      if(num%i==0)
      {
        return false;
      }
          }

          return true;
}

int nthprime(int n)
{
 int count = 0;

 for(int i = 1; true ; i++)
 {
    if(isprime(i))
       count++;

       if(count == n)
           return i;
 }


}