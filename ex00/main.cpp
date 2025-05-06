#include "Easy.hpp"

int main()
{
	std::vector<int> numbers;

	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);
	numbers.push_back(40);
	numbers.push_back(90);

	try{
		
	std::vector<int>::const_iterator it = easyfind(numbers, 30);
	std::cout << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Erreur : " << e.what() << std::endl;
	}
	return 0;
	


}