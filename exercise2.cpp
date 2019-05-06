#include"l181174_ex21.h"
#include<iostream>
using namespace std;


//template <class T>
//T GetMax(T n1,T n2)
//{
//	return (n1 > n2) ? n1 : n2;
//}
//
//template <class T>
//T GetMin(T n1,T n2)
//{
//	return (n1 < n2) ? n1 : n2;
//}
//
//int main () 
//{
//  int i=5, j=6, k;
//  long l=10, m=5, n;
//  k=GetMax<int>(i,j);
//  n=GetMin<long>(l,m);
//  cout << k << endl;
//  cout << n << endl;
//  system("pause");
//  return 0;
//}

//template <class T,class T1>
//T GetMax(T n1,T1 n2)
//{
//	return (n1 > n2) ? n1 : n2;
//}
//
//template <class T,class T2>
//T GetMin(T n1,T2 n2)
//{
//	return (n1 < n2) ? n1 : n2;
//}
//
//int main () 
//{
//	char i='Z';
//	int  j=6, k;
//	long l=10, m=5, n;
//	k=GetMax(i,m);
//	n=GetMin(j,l);
//	cout << k << endl;
//	cout << n << endl;
//	system("pause");
//	return 0;
//}

int main () 
{
  Pair <double> myobject (1.012, 1.01234);
    cout<<myobject.GetMax()<<endl;
  cout<<myobject.GetMin()<<endl;
    cout<<myobject<<endl; // << operator in pairs should be overloaded (inline)
	system("pause");
  return 0;
}
