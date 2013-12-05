#include "nodo.hpp"
#include <utility>     
#include <iostream>     
#include <cstdlib>
using namespace std ;


int main ()
{
	std::pair<int,char> foo (90,'z');
	std::pair<int,char> bar (10,'a');
		

	nodo<int,char>  nodo2(foo);
	
	nodo2.printnodo();
		
}




