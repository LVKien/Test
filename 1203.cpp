#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;
struct Register
{
	int Q_num;
	int Value; 
	int Previous;
	Register(){}
	Register(int a,int b)
	{
		Q_num = a;
		Previous = b;
		Value = b;

	}
};

bool operator < (Register a, Register b)
{
	if (a.Previous != b.Previous)
		return a.Previous > b.Previous;
	return a.Q_num > b.Q_num;
}


int main()
{	
	Register f;
	priority_queue <Register> Q;
	string a;
	int num,Previous,Value;
	while (cin>>a && a!= "#")
	{
		cin>>num;
		cin>>Value;
		Previous = Value;
		Q.push(Register(num,Previous));
	}

	int t;
	cin>>t;
	while(t != 0)
	{
		f = Q.top();
		cout<<f.Q_num<<endl;
		Q.pop();
		f.Previous += f.Value;
		Q.push(Register(f));
		t--;
	}
	return 0;
}