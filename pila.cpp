#include <iostream>
#include"ListaPuntatori.cpp" //PRODOTTO DAGLI ALL. BACHIS BORAGINE SALLUSTIO
template <typename T>
class Pila {
  private:
    ListaPuntatori<T> pila;
  public:
    // Costruttore
    void push(T valore){
      //inserisce un valore in testa nella prima posizione, ecco perchè abbiamo messo il valore 1
      pila.inslista(valore, 1);
    }

    T pop(){
      if(pila.listavuota()){
          return pila.lung==0;
      }else{
        T valore=pila.leggilista(1);
        pila.canclista(1);
        return valore;
      }
    }
    T top(){
      if(pila.listavuota())
          return pila.lung==0;
      else
        return pila.leggilista(1);
      }

    bool isEmpty() const{
      return lung==0;
    }
	  int size() const{
      return pila.lunghezza();
    }
  }
    


