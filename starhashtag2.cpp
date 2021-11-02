#include <iostream>
using namespace std;

int main()
{
	int m, n ,i , j;
	cout << "n va m ra vared konid:";
	cin >> n >> m;
	
for(j = 1; j <= m ; j++)
	{
		for(i= 1; i <= n; i++)
		{
				if (i % 2 == 0) 
				cout <<"*";
				else
			    cout <<"#";
		}
		cout << "\n";	
	}
return 0;
}
	 