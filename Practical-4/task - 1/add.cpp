#include <iostream>
using namespace std;
namespace first
{
  int add(int a,int b)
  {
  return a+b;
  }
 }
namespace second
{
   float add(float a,float b)
  {
   return a+b;
   }
 }
int main()
{
 int a= first :: add(1,2);
  float b= second :: add(1.2,2);
   cout<<"sum of entered no is:" <<a<<" "<<b<<" "<<endl ;
  return 0;
}  
