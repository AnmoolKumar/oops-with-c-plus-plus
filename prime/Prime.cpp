#include<iosteam>
using namespace std
void prime(int n)
{
if(n%2==0)
{
if(n!=2)
 cout<<" no is not prime"<<endl;
else
{
 if(n%3==0)
 {
  if(n!=3)
   cout<<" no is not prime"<<endl;
  else
  {
  if(n%5==0)
 {
  if(n!=5)
   cout<<" no is not prime"<<endl;
  else
  {
   if(n%7==0)
 {
  if(n!=7)
   cout<<" no is not prime"<<endl;
 else 
  cout<<"no is prime";
  }
  }
    
int main()
{
int n;
cout<<"enter the number"<<endl;
cin>>n;
prime(n);
}

