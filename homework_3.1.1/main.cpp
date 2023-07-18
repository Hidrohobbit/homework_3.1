#include <iostream>
#include <vector>
#include <algorithm>

int main() 
{
	setlocale(LC_ALL, "ru");

	std::vector<int> vc = { 4, 7 ,9 ,14 ,12 };
	
	auto print = [](const int& n) {std::cout << n << " "; };

	std::cout << "Входные данные: ";
	std::for_each(vc.cbegin(), vc.cend(), print);

	std::for_each(vc.begin(), vc.end(), [](int &n) 
		{
			if (n % 2)
			{
				n *= 3;
			}
		});

	std::cout << std::endl;
	std::cout << "Выходные данные: ";
	std::for_each(vc.cbegin(), vc.cend(), print);

	
	return 0;
};