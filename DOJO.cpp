#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	for (int i=0; i<20; i++)
	cout << rand() % 100 <<" ";
	cout << endl;
	cout << 15/4;
	
	return 0;
}
