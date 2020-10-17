// Given a quadratic equation in the form ax2 + bx + c. Find its roots.

#include <bits/stdc++.h>

// function that returns roots of a quadratic equation
void quadraticRoots(int a,int b, int c)
{
  
   double d;
if(a==0){
std::cout<<"Invalid";
}
d = b*b - 4*a*c;
 

if(d<0)
{
std::cout<<"Imaginary";
}
else
{
double x1=(-b+sqrt(d))/(2*a);
x1 = floor(x1);
if(x1==0) x1=0;
double x2 = (-b-sqrt(d))/(2*a);
x2 = floor(x2);

if(x2==0) x2=0;

if(x1>x2) 
	std::cout<<x1<<" "<<x2;
else std::cout<<x2<<" "<<x1;

}
}

int main() {

	int T;
	std::cin>>T;

	while(T--) {

		int a,b,c; //coefficients for quadratic equations
		std::cin>>a>>b>>c;
		quadraticRoots(a,b,c);
		
	}
	return 0;
}