#include <iostream>    

using namespace std;

int main()
{
	// changed nine-by-nine from eight-by-eight
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << i * j << " ";
		}
		cout << endl;
	}
	return 0;
}