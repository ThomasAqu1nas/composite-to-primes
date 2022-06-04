//decomposition of a composite number into a product of prime numbers with their powers
#include <iostream>
#include <vector>
#include <string>
using namespace std;
// ctop = Composite TO Prime
string ctop(int number)
{
	if (number == 1)
	{
		return "number '1' is not prime or composite";
	}
	//template variable needed to store arguments value
	int num = number;
	vector<int> powers;
	vector<int> pr;
	for (int i = 2; i < (number) + 1; i++)
	{
		int count = 0;
		if (num % i == 0) {
			while (num % i == 0)
			{
				num = num / i;
				count++;
			}
			pr.push_back(i);
			powers.push_back(count);
		}
	}
	string decomp;
	for (int i = 0; i < pr.size(); i++)
	{
		decomp += (to_string(pr[i]) + "^" + to_string(powers[i]) + "*");
	}
	decomp = decomp.substr(0, decomp.length() - 1);
	return decomp;
}
int main()
{
	cout << ctop(1230) << endl;;
}
//output: 2^1*3^1*5^1*41^1
