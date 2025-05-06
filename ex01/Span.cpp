#include "Span.hpp"


Span::Span(): _data(0), _max(0)
{

}


Span::Span(unsigned int n): _max(n)
{

}


Span::~Span()
{

}

void Span::vectorClear()
{
	_data.clear();
	std::cout << "vector cleared succes" << std::endl;
}

void Span::augment()
{
	_max = 10;
	std::cout << "vector augment succes" << std::endl;
}

void Span::addNumber(int n)
{
	if (_data.size() >= _max)
		throw std::runtime_error("span is full");

	_data.push_back(n);

}

int Span::shortestSpan()
{
	if (_data.size() < 2)
		throw std::runtime_error("Span is too small");
	
	std::vector<int> sorted_data = _data;
	std::sort(sorted_data.begin(), sorted_data.end());

	 int shortest = INT_MAX;

	size_t i = 1;
	while (i < sorted_data.size())
	{
		int diff = sorted_data[i] - sorted_data[i - 1]; 
		if (diff < shortest)
			shortest = diff;
		++i;
	}
	return shortest;
}

int Span::longestSpan()
{
	if (_data.size() < 2)
		throw std::runtime_error("Span is too small");

	int min = *std::min_element(_data.begin(), _data.end());
	int max = *std::max_element(_data.begin(), _data.end());

	return max - min;
}

void Span::addSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_data.size() + std::distance(begin, end) > _max)
		throw std::runtime_error("Span will exceed its maximum size");
	_data.insert(_data.end(), begin, end);
}