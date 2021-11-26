#ifndef LAPRAS_H_INCLUDED
#define LAPRAS_H_INCLUDED
#include "Pokemon.h"

class Lapras : public Pokemon{

private:

    int contadorGolpes;
    int VidaInicial;

public:

    Lapras(){
        this->vida = 200;
        this->danio = 0;
        this->nombre = "Lapras";
        contadorGolpes=0;
        VidaInicial= this->vida;

    }

    virtual int atacar(Pokemon* atacado){ /**LAPRAS MATA AL ENEMIGO SI ESTE NO LO CONSIGUE MATAR EN 5 ATAQUES Y SI MATA A UN ENEMIGO SE DUPLICAN SUS STATS**/
        if(contadorGolpes >= 5){
                this->danio = 150;
                std::cout << "Lapras se canso de la pelea y decide acabar con su enemigo de un golpe " << std::endl;
            }
        else if(contadorGolpes < 5){
                contadorGolpes++;
            }
        /**if(atacado->getVida <=0){
            this->danio = danio*2;
            this->vida = vida*2;
            }**/
        this->vida -= atacado->defender(danio);
        return this-> danio;/****/
    }

    virtual int defender(int danioEnemigo){ /**LAPRAS RECIBE LA MITAD DE DAÑO SI TIENE LA MITAD DE VIDA O MENOS**/
        if(this->vida < VidaInicial/2){
            this->vida -= danioEnemigo/2;
        }
        else{
            this->vida -= danioEnemigo;
        }
        return 0; /****/
    }

   virtual void ImprimirPantalla(){

    printf("                                       ,|\n");
    printf("                                       ||\n");
    printf("                               ,-\"'\"\"`' `._\n");
    printf("                              '----.     __`....._\n");
    printf("                               `    `.  `. ;      `.\n");
    printf("                                `.    `.  `   ,\"`. |\n");
    printf("                                  `.  _.`._   |  ' |\n");
    printf("                                  .','  ,' `.  `--'\n");
    printf("                                 /.' _,'    | /\n");
    printf("                                '/_.'       |.\n");
    printf("                                 `---`\".    ||\n");
    printf("                                       |    ||\n");
    printf("                                      ,'    `|\n");
    printf("                         _           /       |\n");
    printf("                        ' `.        .'       |\n");
    printf("                         .  `._  _,'/|       |\n");
    printf("                        _|     \"'  / |       '\n");
    printf("                    _,-' |        /  '        .\n");
    printf("                 |\"'            ,'  '          \\\n");
    printf("                 |   _        ,'   /            \\\n");
    printf("                 ;  '        /    j              .\n");
    printf("            ,\"--'    `.    .      |              |         ________\n");
    printf("            `.   -.       / '     |              |   _,-\"\"'   __.._\"`-._\n");
    printf("             ,' ,-.`-.__.' /      '              |.-'  _..--'\"       _.-'\n");
    printf("             \\.'   `-.___.'      ,               '__.-\"           _.'\n");
    printf("             /        _..--    . |              /               ,'\n");
    printf("           ,`      .-'         | |           _,'._          _,-'\n");
    printf("       _,-'      ,'           .' '       _.-'     \"-.....-\"'\n");
    printf("     ,'     __ ,'          _.'  /  __..-'\n");
    printf("   ,' _.-\"\"'  /         _.'  _.'-\"'\n");
    printf("  '-'\"       /      _.-' _.-\"\n");
    printf("            /    _.' _.-'\n");
    printf("           .   .'_.-'\n");
    printf("           | ,'.'\n");
    printf("           | .`\n");
    printf("            `\n");

}

#endif // LAPRAS_H_INCLUDED
