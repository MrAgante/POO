
#ifndef INTERFACE_H
#define INTERFACE_H
#include <sstream>
#include <fstream> //precisa para aceder ao ficheiro
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "Celula.h"
#include "Mundo.h"
using namespace std;

class Celula;
class Mundo;

class Interface {
private:
    int dim = 10;     
public:
    int desenhaMenu(); 
    void confirmaArraque();
    int getDim()const;
    string recolheComandos();
    string recolheComandosGame();
    void desenhaMundo(Celula ** mapa, int linha=0, int coluna=0);
    
    
};

#endif /* INTERFACE_H */

