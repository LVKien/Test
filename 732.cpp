#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
	stack <string> S;
	string a,b;
	for(;;)
	{
		cin>>a>>b;
		if (a.size() != b.size)
		{
			cout<<"["<<endl<<"]"<<endl;
			break;
		}

		for (int i = 0 ;i<a.size();i++)
		{
			cout<<"["<<endl;
			
		}
	}
	return 0;
}