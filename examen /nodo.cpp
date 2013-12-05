#include <utility>      
#include <iostream>   
#include <vector>
#include <cstdlib>
using namespace std ;


template <class T, class N>
class nodo {
	private:
	
		typedef pair <T,N> pareja;
		vector<pareja> parejavect;
		vector<nodo*> punt_hijos;
		nodo *padre; 
	public:
	~nodo ();
	nodo(std::pair<T,N> valor_inicial) ;

};
template <class T, class N>
nodo <T,N>::~nodo(){
}

/*void nodo(){
	vector<>
		
	
	}*/
template <class T, class N>


nodo <T,N>::nodo(const std::pair<T,N> valor_inicial){
this->parejavect[1] = valor_inicial;
}


template <class T, class N>
 void printpair(const std::pair<T,N> &aimprimir)
{ 
	std::cout << aimprimir.first <<","<<aimprimir.second; 
	}
/*
template <class T1, class T2>
 void incluir(const std::pair<T1,T2> &pareja)
{ 
	
	}

*/
