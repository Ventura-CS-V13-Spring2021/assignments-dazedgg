#include <iostream>
#include <iomanip>  
using namespace std;

int main()
{
	int num,i;
	int r1, r2;
	cout << "Enter your range : ";
	cin >> r1 >> r2;
	
	for(num = r1; num <= r2; num++)
	{
			for(i=2; i <= num; i++)
			{
				if (num % i == 0)
        break;
			}
			if (i == num)
				cout << num << " This number is a prime number within the given range. \n";
			else
				cout << num << " This number is not a prime number within the given range. \n";
	}
}

