#include "Coliseo.h"

Coliseo::Coliseo(){

    this->Raic = new Pickachu();
    this->Blast = new Squirtle();
    this->Chari = new Charmander();
    this->Venu = new Bulbasaur();
    this->Psy = new Psyduck();
    this->Lap = new Lapras();
    srand(time(NULL));
    ListaEAzul = new std::list<Pokemon*>;
    ListaERojo = new std::list<Pokemon*>;
    this->redEscoge = true;
    respuesta=0;i=0;j=0;escogido1=0;escogido2=0;escogido=0;ronda=1; Azar=0;
}

Coliseo::~Coliseo(){

    std::list<Pokemon*>::iterator pos;
    pos= this->ListaEAzul->begin();
    while(pos != this->ListaEAzul->end()){
        delete *pos;
        pos++;
    }
    pos= this->ListaERojo->begin();
    while(pos != this->ListaERojo->end()){
        delete *pos;
        pos++;
    }
    delete this->Raic;
    delete this->Blast;
    delete this->Lap;
    delete this->Psy;
    delete this->Venu;
    delete this->Chari;/**PORQUE BORRAS CADA UNO DE LOS POKEMONS**/

}

void Coliseo::ValidarRango(int& valor, int maximo){
     while(valor<1 || valor>maximo{
        std::cout "Valor fuera de rango " << std::endl;
        std::cout "Debe estar entre 1 y " << maximo << std::endl;
        std::cout "Reingrese"<< std::endl;
        std::cin valor;
    }
}

bool Coliseo::LanzarMoneda(){
    if(1+rand()%2==1){
        std::cout "Comienza el entrenador Rojo a escoger sus pokemones " << std::endl;
        return true;
    }
    else{
        std::cout "Comienza el entrenador Azul a escoger sus pokemones " << std::endl;
        return false;
    }
}

void Coliseo::PrimeraParte(){

    do{
        Eleccion();
        if(redEscoge){
            redEscoge=false;
        }else{
            redEscoge=true;
        }
    }while(this->ListaEAzul->size() < 3 || this->ListaERojo->size() < 3)
}

void Coliseo::SegundaParte(){
    /**COMBATE!!**/
}

void Coliseo::Eleccion(){
    redEscoge=Moneda();/***/
    if(redEscoge){ /***/
        std::cout "Entrenador Rojo elija un Pokemon " << std::endl;
    }else{
        std::cout "Entrenador Azul elija un Pokemon " << std::endl;
    }
    for(i=0;i<2;i++){
       std::cout<<"ESTOS SON LOS POKEMONS " << std::endl;
       Azar = 1+rand()%6;
       if(Azar==1){
            std::cout<<Raic->getNombre()<<std::endl;
            Raichu->ImprimirPantalla();
            if(i==0)escogido1=1;
            else escogido2=1;
        }
        if(Azar==2){
            std::cout<<Blast->getNombre()<<std::endl;
            Blastoise->ImprimirPantalla();
            if(i==0)escogido1=2;
            else escogido2=2;
        }
        if(Azar==3){
            std::cout<<Venu->getNombre()<<std::endl;
            Venusaur->ImprimirPantalla();
            if(i==0)escogido1=3;
            else escogido2=3;
        }
        if(Azar==4){
            std::cout<<Chari->getNombre()<<std::endl;
            Charizard->ImprimirPantalla();
            if(i==0)escogido1=4;
            else escogido2=4;
        }
        if(Azar==5){
            std::cout<<Psy->getNombre()<<std::endl;
            Psyduck->ImprimirPantalla();
            if(i==0)escogido1=5;
            else escogido2=5;
        }
        if(Azar==6){
            std::cout<<Lap->getNombre()<<std::endl;
            Lapras->ImprimirPantalla();
            if(i==0)escogido1=6;
            else escogido2=6;
        }
        if(i==0)std::cout<< "Escoge este Pokemon: (1)" << std::endl;
        if(i==1)std::cout<< "Escoge este Pokemon: (2)" << std::endl;

        std::cin >> respuesta; /***/
        ValidarRango(respuesta,2); /***/

        system("CLS"); /***/

        if(respuesta==1){
        escogido=escogido1;
        }
        else{
            escogido=escogido2;
        }

        if(escogido==1){
            if(redEscoge){
                this->ListaERojo->push_back(Raic);
            }
            else{
                this->ListaEAzul->push_back(Raic);
            }
        }
        if(escogido==2){
            if(redEscoge){
                this->ListaERojo->push_back(Blast);
            }
            else{
                this->ListaEAzul->push_back(Blast);
            }
        }
        if(escogido==3){
            if(redEscoge){
                this->ListaERojo->push_back(Venu);
            }
            else{
                this->ListaEAzul->push_back(Venu);
            }
        }
        if(escogido==4){
            if(redEscoge){
                this->ListaERojo->push_back(Chari);
            }
            else{
                this->ListaEAzul->push_back(Chari);
            }
        }
        if(escogido==5){
            if(redEscoge){
                this->ListaERojo->push_back(Psyduck);
            }
            else{
                this->ListaEAzul->push_back(Psyduck);
            }
        }
        if(escogido==6){
            if(redEscoge){
                this->ListaERojo->push_back(Lapras);
            }
            else{
                this->ListaEAzul->push_back(Lapras);
            }
        }
    }
}

void Coliseo::HayGanador(){
   if(this->ListaEAzul->size() > this->ListaERojo->size()){
      std::cout<<"El entrenador Azul gana la batalla " <<std::endl;
      std::cout<<"Su equipo restante es: " << std::endl;
      PokemonsRestantesAzul()
   }
   else{
      std::cout<<"El entrenador Rojo gana la batalla " <<std::endl;
      std::cout<<"Su equipo restante es: " << std::endl;
      PokemonsRestantesRojo()
   }
}

void Coliseo::PokemonsRestantesRojo(){
    std::list<Pokemon*>::iterator pos1;
    pos1 = this->ListaERojo->begin();
    std::cout << "Pokemons del Equipo Rojo" << std::endl;
    while(pos1 != this->ListaERojo->end()){
        std::cout<< (*pos1)->getNombre()<<std::endl;
        (*pos1)->ImprimirPantalla();
        pos++;
    }
}

void Coliseo::PokemonsRestantesAzul(){
        std::list<Pokemon*>::iterator pos1;
        pos1 = this->ListaEAzul->begin();
        std::cout << "Pokemons del Equipo Azul" << std::endl;
        while(pos1 != this->ListaEAzul->end()){
            std::cout<< (*pos1)->getNombre()<<std::endl;
            (*pos1)->ImprimirPantalla();
            pos++;
        };
    }



















