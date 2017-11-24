#include <sstream>
#include <fstream> //precisa para aceder ao ficheiro
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstdlib>
#include "Interface.h"
#include "Mundo.h"
#include "Consola.h"



using namespace std;

int Interface::desenhaMenu(){

    int opcao;
    do {
        cout << "#################BEM-VINDO#################" << endl;
        cout << "DIGITE 1 INICIAR O MUNDO DAS FORMIGAS" << endl;
        cout << "DIGITE 0 PARA SAIR" << endl;
        cout << endl;
        cout << ": ";
        cin >> opcao;
        if (opcao > 1 || opcao < 0) {
            cout << "INSIRA UMA DAS OCPOES VALIDAS PF" << endl;
            cout << endl;
        }
    } while (opcao > 1 || opcao < 0);

    return opcao;
}

void Interface::confirmaArraque(){
    
     int opcao;
    opcao = desenhaMenu();
    switch (opcao) {
        case 0:// sair
            exit(0);
            break;
        case 1: // comeca jogo
            //recolheDados();//
     Mundo::iniciaMundo(this);//inicia mundpo
            break;
    }
}

int Interface::getDim() const {
    return dim;
}



string Interface::recolheComandos(){
    int flag_fim =0;
    Mundo a;
    string frase = " ", comando = " ", arg1 = " ", arg2, arg3, arg4, nada, res = " ", id, lixo = " ";
    string temp = " ", fraseTEMP = " ", frase2 = " ";
    int car = 0;
    comando = " ";
    arg1 = "nada";
    arg2 = "nada";
    arg3 = "nada";
    arg4 = "nada";
    nada = "nada";
    
    getline(cin, frase);
    istringstream is(frase);
    is >> comando >> arg1 >> arg2 >> arg3 >> arg4 >> nada;
    
  
    if (comando == "defmundo" && flag_fim == 0){ //defenir dimensoes do mapa
          int v = atoi(arg1.c_str());
                                 
        if (v >= 10){
            dim = v;
            cout << "O Mapa foi defenido para a dimensao!! " << dim << "---" << dim << endl << endl;
            }
          //a.criaMapa();
        
        if (v < 10){
             cout << "Dimensoes invalidas!!" << endl;
        } 
    }
    
    if (comando == "defen" && flag_fim == 0)
    {
        cout << "Energia" << endl;
        
    }
    
    if (comando == "inicio" && flag_fim == 0)
    {
        flag_fim = 1;
        cout << "Vai passar para a simulacao" << endl;
        Interface::recolheComandosGame();
       
    }
    
    
    
}

string Interface::recolheComandosGame(){
    string frase = " ", comando = " ", arg1 = " ", arg2, arg3, arg4;
    comando = " ";
    arg1 = "nada";
    arg2 = "nada";
    arg3 = "nada";
    arg4 = "nada";
    
    getline(cin, frase);
    istringstream is(frase);
    is >> comando >> arg1 >> arg2 >> arg3 >> arg4;

    if (comando == "defmundo" ||comando == "defen" || comando == "defpc" || comando == "defvt"|| comando == "defmi"|| 
            comando == "defme" || comando == "defnm")
    {
        
      cout << "Ja estamos no jogo!! nao introduza comandos de configuracao!!" << endl;
      
    }
    
    
    
    
    
    
    

    return frase; 
     
    
}
   
     
void Interface::desenhaMundo(Celula** mapa, int linha, int coluna)
{
    
    int indiceX = linha;
    int indiceY= coluna;
    int impDim= getDim();
    int k;
    int l;
    Consola::clrscr();
    Consola::gotoxy(0,3);
    
   for (int i = 0; i < impDim; i++) 
   {
        for (int j = 0; j < impDim; j++) 
        {
             cout << " ** ";
             
        }
       
   }
}

    

