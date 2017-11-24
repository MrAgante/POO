#include "Mundo.h"
#include "Interface.h"
#include "Consola.h"
#include "Celula.h"
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

void Mundo::iniciaMundo(Interface* p){
    
    Mundo a;
    a.arranqueReal(p);
}


void Mundo::arranqueReal(Interface* p){

    this->p = p;
    comandoConfig();
    //comandoSimulacao();
}



void Mundo::comandoConfig(){
    int z;
    cin.ignore();
    cout << endl << "Fase de configuracao:" << endl;
    do {
        cout << "Insira comando: " << endl;
        z = verificaComando(p->recolheComandos());
    } while (z != 1);   
}

/*
void Mundo::comandoSimulacao(){
    while (1) {
        int z;
        cout << endl;
        p->desenhaMundo(mapa);
        do{
           z = verificaComandoGame(p->recolheComandosGame()); 
        }while (z != 1);
        system("PAUSE");
        exit(0);

    }
 
}
 */

int Mundo::verificaComando(string frase){
    
    string comando = " ", arg1 = " ", arg2, arg3, arg4;
    comando = " ";
    arg1 = "nada";
    arg2 = "nada";
    arg3 = "nada";
    arg4 = "nada";
    istringstream is(frase);
    is >> comando >> arg1 >> arg2 >> arg3 >> arg4;
     
}


 void Mundo::criaMapa() {

     cout << "**" <<endl;
    int nDim = p->getDim();

    mapa = new Celula *[nDim];
    for (int i = 0; i < nDim; i++)
    {
        mapa[i] = new Celula[nDim];      
    }
    //mostraMapa(mapa);
 }
 
 /*void Mundo::mostraMapa(Celula** mapa){
       
     int nDim = p->getDim();

  
    for (int i = 0; i < nDim; i++)
    {
        cout << mapa[i] << endl;
  } 
     
 }*/


/*int Mundo::verificaComandoGame(string frase){
    
    string comando = " ", arg1 = " ", arg2, arg3, arg4;
    comando = " ";
    arg1 = "nada";
    arg2 = "nada";
    arg3 = "nada";
    arg4 = "nada";
    istringstream is(frase);
    is >> comando >> arg1 >> arg2 >> arg3 >> arg4;
    
    if (comando == "defmundo" ||comando == "defen" || comando == "defpc" || comando == "defvt"|| comando == "defmi"|| 
            comando == "defme" || comando == "defnm")
    {
        
      cout << "Ja estamos no jogo!! nao introduza comandos de configuracao!!" << endl;
      
    }
}*/

