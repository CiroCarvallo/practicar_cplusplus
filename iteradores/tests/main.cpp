#include "../src/algoritmos.hpp"
#include <set>
#include <iostream>

int main()
{	
	const std::set<int> s={1,2,3};
	std::cout<<minimoIter(s.begin(),s.end());
	return 0;
}
