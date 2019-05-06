// l181174_lab3.cpp : Defines the entry point for the console application.
//

#include<iostream>
using namespace std;

//***********************************************EXERCISE2*******************************************************************
template <typename T>
class Pair
{
	T values[2];
public:
	Pair(T a,T b)
	{
		values[0]=a;
		values[1]=b;
	}
	T GetMax()
	{
		return (values[0] > values[1]) ? values[0] : values[1];
	}
	T GetMin();
	friend ostream& operator<<(ostream &output,Pair &p)
	{
		output<<p.values[0]<<p.values[1]<<endl;
		return output;
	}
};

template <typename T> //declare a template parameter before implementation
T Pair< T >::GetMin()
{
	return (values[0] < values[1]) ? values[0] : values[1];
}

