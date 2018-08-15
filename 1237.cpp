#include <iostream>
#include <string>
using namespace std;
void Find()
{
	string a[10000],b[10000];
	int max[10000],min[10000],d=0,n;
	cin>>n;
	for (int i = 0;i<n;i++)
	{
		cin>>a[i]>>min[i]>>max[i];
	}
	int m;cin>>m;
		for (int i = 0;i<m;i++)
		{
			int cost;
			cin>>cost;
			int count = 0;
			for (int i = 0;i<n;i++)
			{
				if (min[i] <= cost && cost <= max[i])
					count++;
			}
			if (count == 1)
			{
				for (int i = 0;i<n;i++)
				{
					if (cost >= min[i] && cost <= max[i])
					{
						cout<<a[i]<<endl;
						break;
					}
				}
			}
			else 
				cout<<"UNDETERMINED"<<endl;
			 
		}
	
}

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		Find();
	}
	return 0;
}