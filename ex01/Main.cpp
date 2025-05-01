#include "Span.hpp"

int main()
{
	Span sp(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Erreur : " << e.what() << std::endl;
	}

	try
	{
		Span sp_small(1);
		sp_small.addNumber(42);
		std::cout << "Shortest span: " << sp_small.shortestSpan() << std::endl; // devrait lancer une exception
	}
	catch (const std::exception& e)
	{
		std::cerr << "Erreur attendue : " << e.what() << std::endl;
	}

	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);

    	std::vector<int>::iterator begin = vec.begin();
    	std::vector<int>::iterator end = vec.end();

     try {
	    int distance = std::distance(begin, end);
	    std::cout << "La distance entre begin et end est : " << distance << std::endl;
	    sp.augment();
	    sp.addSpan(begin, end);
	}
	catch(std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
}