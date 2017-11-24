
#ifndef MUNDO_H
#define MUNDO_H
#include <iostream>
#include <sstream>
#include <string>
#include "Celula.h"
#include "Consola.h"
using namespace std ;

class Interface;
class Celula;



class Mundo {
private:
     Interface * p; //ponteiro para o mundo
  //vector< Comunidade *> comunidades;
  Celula** mapa;
    int dim = 10; 
  
  
public:
    
 static void iniciaMundo(Interface *);
 void criaMapa();
 void arranqueReal(Interface *p);
 void comandoConfig();
 void comandoSimulacao();
 int verificaComando(string frase);
 int verificaComandoGame(string frase);
 void mostraMapa(Celula** mapa);
 
 
 
};

#endif /* MUNDO_H */

