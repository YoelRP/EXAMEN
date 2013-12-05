// pair relational operators
#include <utility>      // std::pair
#include <iostream>     // std::cout


template <class T1, class T2>
  void operator<< (const pair<T1,T2>& lhs)
{ 
	
	std::cout << lhs.first <<"-" <<lhs.second; 
	}
