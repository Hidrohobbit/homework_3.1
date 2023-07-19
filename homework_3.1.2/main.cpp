#include <iostream>
#include <vector>
#include <string>
#include <variant>

std::variant<int, std::string, std::vector<int>> get_variant() {
	std::srand(std::time(nullptr));
	int random_variable = std::rand() % 3;

	std::variant<int, std::string, std::vector<int>> result;
	switch (random_variable)
	{
	case 0:
		result = 5;
		break;
	case 1:
		result = "string";
		break;
	case 2:
		result = std::vector<int>{ 1, 2, 3, 4, 5 };
		break;
	default:
		break;
	}
	return result;
}

void result(std::variant<int, std::string, std::vector<int>> r)
{
	if (std::holds_alternative<int>(r))
	{
		std::cout << std::get<int>(r) * 2 << std::endl;
	}
	else if (std::holds_alternative<std::string>(r))
	{
		std::cout << std::get<std::string>(r) << std::endl;
	}
	else 
	{
		std::vector<int> vc = std::get<std::vector<int>>(r);

		for(int num : vc)
		{
			std::cout << num << " ";
		}
	}
}

int main() 
{
	result(get_variant());
};