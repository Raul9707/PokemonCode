#ifndef PSYDUCK_H_INCLUDED
#define PSYDUCK_H_INCLUDED
#include "Pokemon.h"

class Psyduck : public Pokemon{

private:
    bool escudo;

public:

    Psyduck(){
        this->vida = 100;
        this->danio = 10;
        this->nombre = "Psyduck";
        this->escudo = true;
    }

    virtual int atacar(Pokemon* atacado){ /**PSYDUCK INCREMENTA 10 PUNTOS EN SU VIDA POR CADA ATAQUE REALIZADO**/
        this->vida -= atacado->defender(danio);
        this->vida += 10;
        return this->danio;/****/
    }

    virtual int defender(int danioEnemigo){ /**PSYDUCK INCREMENTA 10 PUNTOS DE ATAQUE POR CADA GOLPE RECIBIDO, ADEMAS BLOQUEA EL PRIMER ATAQUE**/
        if(escudo){
            std::cout << "Psyduck logra esconderse del ataque " << std::endl;
            escudo=false;
        }
        if (!escudo){
            this->vida -= danioEnemigo;
            this->danio += 10;
        }
        return 0;/** **/
    }

   virtual void ImprimirPantalla(){

    printf("                              ,-'   ,\"\",\n");
    printf("                             / / ,-'.-'\n");
    printf("                   _,..-----+-\".\".-'_,..\n");
    printf("           ,...,.\"'             `--.---'\n");
    printf("         /,..,'                     `.\n");
    printf("       ,'  .'                         `.\n");
    printf("      j   /                             `.\n");
    printf("      |  /,----._           ,.----.       .\n");
    printf("     ,  j    _   \\        .'  .,   `.     |\n");
    printf("   ,'   |        |  ____  |         | .\"--+,^.\n");
    printf("  /     |`-....-',-'    `._`--....-' _/      |\n");
    printf(" /      |     _,'          `--..__  `        '\n");
    printf("j       | ,-\"'    `    .'         `. `        `.\n");
    printf("|        .\\                        /  |         \\\n");
    printf("|         `\\                     ,'   |          \\\n");
    printf("|          |                    |   ,-|           `.\n");
    printf(".         ,'                    |-\"'  |             \\\n");
    printf(" \\       /                      `.    |              .\n");
    printf("  ` /  ,'                        |    `              |\n");
    printf("   /  /                          |     \\             |\n");
    printf("  /  |                           |      \\           /\n");
    printf(" /   |                           |       `.       _,\n");
    printf(".     .                         .'         `.__,.',.----,\n");
    printf("|      `.                     ,'             .-\"\"      /\n");
    printf("|        `._               _.'               |        /\n");
    printf("|           `---.......,--\"                  |      ,'\n");
    printf("'                                            '    ,'\n");
    printf(" \\                                          /   ,'\n");
    printf("  \\                                        /  ,'\n");
    printf("   \\                                      / ,'\n");
    printf("    `.                                   ,+'\n");
    printf("      >.                               ,'\n");
    printf("  _.-'  `-.._                      _,-'-._\n");
    printf(",__          `\",-............,.---\"       `.\n");
    printf("   \\..---. _,-'            ,'               `.\n");
    printf("          \"                '..,--.___,-\"\"\"---' mh\n");
    }


#endif // PSYDUCK_H_INCLUDED
