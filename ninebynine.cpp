#include <iostream>    

using namespace std;

int main()
{
	for (int i = 1; i <= 9; i++) // 시계는 와치
	{
		for (int j = 1; j <= 9; j++) // 시계는 와치
		{
			cout << i * j << " ";
		}
		cout << endl;
	}
	return 0;
}