#include <iostream>
#include "Lista.h"
#include "TrianguloLibrary.h"
#include <fstream>

int main()
{
	Lista<string> l;

inicio:
int select;
  cout << "O que deseja fazer?" << endl << "1 - Criar novo elemento na lista" << endl << "2 - remover ultimo elemento da lista" << endl << "3 - Visualizar na tela os elementos da lista" << endl << "4 - Descarregar a lista em arquivo" << endl << "5 - Carregar elementos de uma lista" << endl;
  cin >> select;

     if (select == 1) {
      int qtd_ele;
      double par_a;
      double par_b;
      double par_c;
      string nome;
      string elem_list;
      cout << "Quantos elementos deseja adcionar?" << endl;
      cin >> qtd_ele;
      for(int n = 0; n < qtd_ele; n++){
      cout << "Informe um nome para o elemento" << endl;
      cin >> nome;
      par_a = TrianguloLibrary::escreveParametroA();
      par_b = TrianguloLibrary::escreveParametroB();
      par_c = TrianguloLibrary::escreveParametroC();
      elem_list = nome + " | A = " + to_string(par_a) + " | B = " + to_string(par_b) + " | C = " + to_string(par_c) ;
      l.inserir_final(elem_list);
      }
    } 

    if (select == 2){
      l.remover();
    }

    if (select == 3){
      l.mostrar();
    }

    if (select == 4){
      l.Descarrega_lista();
    }

    if (select == 5){
      l.carrega_lista();
    }
  goto inicio;
	
	return 0;
}