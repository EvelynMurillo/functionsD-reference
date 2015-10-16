/name:Evelyn Murillo
//October 15 2015
//functions b


#include<iostream>
#include<cassert>
#include<cmath>
using namespace std;

void sort(int& numA, int& numB, int& numC);
/*
Summary: A function that sorts numbers from smallest to largest
Precondition: The data has to be ints from 0-100
Postcondition:Its going to return three integers from smallest to the largest number
*/
void numDigits(int  valA, int& n); 
/*
Summary:A function that returns the number of integers in the number.
Precondition:
Postcondition:

*/
void computeSphere(double& a, double& v, double r);
/*
Summary:receives on double as the radius and will calculate the area and the volume of the spehere 
Precondition: receives a number for the radius from user
Postcondition:will display a double value for area and volume 

*/
void swap(int& A, int& B);
/*
Summary: to swap two integers 
Precondition: receives two integers
Postcondition:will swap two integers

*/
 int main()
 {
  double const EE= .00001;
   int x = 6;
   int y = 4;
   swap(x,y);
   assert(x==4);
   assert(y==6);
   //
   double r= 5.0;
   double a, v;
   computeSphere(a,v,r);
   assert(a == 314.0);
   assert(fabs(v - 523.33) >EE);
  //
  int E = 1;
  int V = 2;
  int Y = 3;
  sort(E,V,Y);
  assert(E==1);
  assert(V==2);
  assert(Y==3);
  //
   int num = 234;
   int digits;
   numDigits(num,digits);
   assert(num == 3);
 
 
 
 
 
 }
 void sort(int& numA, int& numB, int& numC)
 {
    assert(numA >=0);
    assert(numA<=100);
    assert(numB >=0);
    assert(numB<=100);
    assert(numC >=0);
    assert(numC<=100);

if (numA > numB)
    {
       swap(numA, numB);
    }
    if (numB > numC)
    {
        swap(numB, numC);
    }
    if (numA > numB)
    {
        swap(numA, numB);
    }
    return;
}
 

 void swap(int& A, int& B)
 {
   int temp;
   temp = A;
   A = B;
   B = temp;
   return;
 
 }
 void numDigits(int  valA, int& n)
 {
    assert(valA >= -10000);
    assert(valA <= 10000);
    
    n=1;
    if( valA < -9 )
    {
        while (valA < -9)
        {
            valA = valA/10;
            n++;
        }
        }
        else if (valA > 9 )
        {
        
        while(valA > 9)
        {
            valA=valA/10;
            n++;
        
        
        }
       }
        
    else
    {
    
     n=1;
    }
    return ;    
    }
 void computeSphere(double& a, double& v, double r)
 {
 
assert(  a >=0);
assert(a <=1000);
assert(  v>=0);
assert(v<=1000);

 a= 4*3.14*r*r;
 v = 4/3* 3.14*r*r*r;

return;
 }
