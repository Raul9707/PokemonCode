#ifndef COLISEO_H_INCLUDED
#define COLISEO_H_INCLUDED
#include <iostream>
#include <list>
#include <time.h>
#include <windows.h>
#include <string>
#include <stdio.h>
#include <cstdio>

#include "Pokemon.h"
#include "Pickachu.h"
#include "Psyduck.h"
#include "Bulbasaur.h"
#include "Squirtle.h"
#include "Charmander.h"
#include "Lapras.h"

class Coliseo{

private:
    Pickachu* Raic;
    Pokemon* Blast;
    Pokemon* Chari;
    Pokemon* Venu;
    Pokemon* Psy;
    Pokemon* Lap;
    std::list<Pokemon*>* ListaERojo;
    std::list<Pokemon*>* ListaEAzul;
    bool redEscoge;
    int i; int j;
    int respuesta;
    int ronda;
    int escogido;
    int escogido1;
    int escogido2;
    int Azar;

public:
    Coliseo();
    ~Coliseo();

    void PrimeraParte();
    void SegundaParte();

    void PokemonsRestantesRojo();
    void PokemonsRestantesAzul();


private:
    void ValidarRango(int &valor, int maximo);

    bool LanzarMoneda();
    void Eleccion();

    //void Inventario(bool redDecicion, std::list<Pokemon*>::iterator& posR, std::list<Pokemon*>::iterator& posB);

    void HayGanador();
};

#endif // COLISEO_H_INCLUDED
