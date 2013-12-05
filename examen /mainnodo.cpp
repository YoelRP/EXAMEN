#include "nodo.hpp"
#include <utility>     
#include <iostream>     
#include <cstdlib>
using namespace std ;


int main ()
{
	std::pair<int,char> foo (2,'z');
	std::pair<int,char> bar (10,'a');
		

	nodo<int,char>  nodo2(foo);
	nodo2.agregar(bar);
	cout <<"qqqqq"<< endl;

    cout << nodo2.parejavect[0].first << endl;

}




