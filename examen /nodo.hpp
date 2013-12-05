#include <utility>      
#include <iostream>   
#include <vector>
#include <cstdlib>

using namespace std ;

/*! \fn class nodo
 * \brief this class make a object nodo this have a vector of pointers to son of node  and use de de class utility to make pair the elements with the weigh and the template value  
 */
template <class T, class N>
class nodo {
	
	public:
		vector< pair <T,N> > parejavect;
		vector<nodo*> punt_hijos;
		~nodo ();
		nodo *father; 
		void ordenar ();
		nodo(std::pair<T,N> nuevo_elemento) ;
		void get_father(nodo<T,N> *padre);
		void printnodo();
		void agregar( const std::pair<T,N> nuevo_elemento );
	//	*nodo set_father(nodo<T,N> *mipadre);
	
};
/*! \fn nodo <T,N>::~nodo(){
 *brief thsi funcion is a destroyer of nodo  
 */


template <class T, class N>
nodo <T,N>::~nodo(){
}
template <class T, class N>

void nodo<T,N> :: ordenar (){
	for (int i =0 ;i<=this-> parejavect.size-2;i++){
				for (int j =this->parejavect.size-2;j>=this->parejavect.size-2;--j){
					if (this->parejavect[j] > this->parejavect[j+1]){
							swap(this->parejavect[j],this->parejavect[j+1]);
						}
					}
		}	
	}

/*! \fn nodo <T,N>::nodo( const std::pair<T,N> nuevo_elemento )
 * \brief This are the constructor of the class nodo
 * \param this need the pair this are the weight and element you want save in the tree 
 */

	
	
	
template <class T, class N>
nodo <T,N>::nodo( const std::pair<T,N> nuevo_elemento ){ 

		 this->parejavect.push_back(nuevo_elemento);    
		//if (this->parejavect.size<= 2){
			}
template <class T, class N>
/*! \fn void nodo<T,N>::agregar( const std::pair<T,N> nuevo_elemento )
 * \brief This funcion have to add a anoter  weight and element 
 * \param is the a anoter  weight and element and the node to have add this 
 */

void nodo<T,N>::agregar( const std::pair<T,N> nuevo_elemento ){ 

		 this->parejavect.push_back(nuevo_elemento);    
					//this->ordenar();
			}
		
		//if (this->parejavect.size<= 2){
					
/*! \fn void nodo<T,N>::get_father(nodo <T,N>* padre)
 * \brief This funcion have to add the node to a father if the funcion are a root 
 * \param this need who are the father of the node 
 */
		
	
template <class T, class N>	
void nodo<T,N>::get_father(nodo <T,N>* padre){
	this->father = padre;
	}
/*
template <class T, class N>	
 *nodo set_father(nodo<T,N> *mipadre){
	return (mipadre.father);
	}
*/


/*! \fn void printpair(const std::pair<T,N> &aimprimir)
 * \brief This funcion is to print a a pair
 * \param this need the pair you have to print
 */
template <class T, class N>
void printpair(const std::pair<T,N> &aimprimir)
{ 
	std::cout <<aimprimir.first <<","<<aimprimir.second; 
	}
	
/*! \fn void nodo <T,N>::printnodo()
 * \brief print nodo this funcion print the pair in the node  
 * \param this need the node who you want print 
 */
template <class T, class N>
void nodo <T,N>::printnodo(){		
		for (int i =0 ;i<=parejavect.size();i++){
		cout << (this->parejavect[i].first) << endl;
			}
}

/*
template <class T1, class >
 void incluir(const std::pair<T1,T2> &pareja)
{ 
	
	}*/

