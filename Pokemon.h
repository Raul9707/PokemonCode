#ifndef POKEMON_H_INCLUDED
#define POKEMON_H_INCLUDED
#include <string>

class Pokemon
{

protected:
  int vida;
  int danio;
  std::string nombre;

public:

    virtual ~Pokemon(){};

    virtual int atacar (Pokemon* atacado)=0;
    virtual int defender (int danio)=0;
    virtual void ImprimirPantalla()=0;

    int getVida(){
        return this->vida;
    }

    int getDanio(){
        return this->danio;
    }

    std::string getNombre(){
        return this->nombre;
    }

};

#endif // POKEMON_H_INCLUDED
