#pragma once

#include <algorithm>
#include <exception>
#include <iostream>
#include <vector>
#include <iterator>


class Span
{
	private:
	std::vector<int> _data;
	unsigned int _max;

	public:
	Span();
	Span(unsigned int n);
	~Span();

	void vectorClear();
	void augment();
	void addNumber(int n);
	int longestSpan();
	int shortestSpan();
	void addSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end);

};
