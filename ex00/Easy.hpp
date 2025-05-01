#pragma once

#include <algorithm> 
#include <stdexcept>
#include <iostream>
#include <vector>
#include <exception>

template<typename T>
typename T::const_iterator easyfind(const T &cont, int n);

#include "Easy.tpp"