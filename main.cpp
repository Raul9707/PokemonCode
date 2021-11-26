#include <iostream>
#include "Coliseo.h"
#include <cstdio>

using namespace std;

int main()
{
    Coliseo* miArena = new Coliseo();
    miArena->PrimeraParte;
    miArena->SegundaParte;
    delete miArena;
}
