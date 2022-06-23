#include <iostream>
using namespace std;
void calculateEquationResult(float a,float b,float c, float d,float x);
void maxResult(float eq1, float eq2,float eq);
int main()
{
	int iteration;
	string answer;
	string value;
	value = 'Y';
	calculateEquationResult(2,3,4,5,10);
	cout<<"\nDo you want to perform any other Calculation(Y/N):";
	cin>>answer;
	while(value.compare(answer) == 0)
	{
		calculateEquationResult(6,7,8,9,11);
		cout<<"\nDo you want to perform any other Calculation(Y/N):";
	    cin>>answer;
	}
}

void calculateEquationResult(float a,float b,float c,float d,float x)
    {
    float eq1,eq2,eq3;
	eq1 = x + b/(3*a);
	eq2 = ((3*a*c) - (b*b))/(3*(a*a));
	eq3 = (2 * (b*b*b) - 9 * (a + b + c)+ 27 * (a*a) * d) / (27 + (a*a*a));
	cout<<"Equation 1: "<<eq1<<endl;
	cout<<"Equation 2: "<<eq2<<endl;
	cout<<"Equation 3: "<<eq3<<endl;
	maxResult(eq1,eq2,eq3);
}
void maxResult(float eq1, float eq2, float eq3)
{
	float max = 0;
	int eq = 0;
	if (eq1 > max)
	{
		max = eq1;
		eq = 1;
	}
	if (eq2 > max)
	{
		max = eq2;
		eq = 2;
	}
	if (eq3 > max)
	{
		max = eq3;
		eq = 3;
	}
	cout<<"Equation "<<eq<<" Result is maximum";
}

