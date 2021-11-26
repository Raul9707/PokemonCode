#ifndef CHARMANDER_H_INCLUDED
#define CHARMANDER_H_INCLUDED
#include "Pokemon.h"

class Charizard: public Pokemon{

private:

    int contadorGolpes;
    bool vidaExtra;

public:

    Charizard(){
        this->vida = 150;
        this->danio = 40;
        this->nombre = "Charizard";
        this->contadorGolpes=0;
        vidaExtra=true;
    }

    virtual int atacar (Pokemon* atacado){ /**CHARIZARD DISMINUYE SU VIDA EN 10 PUNTOS CADA VEZ Q ATACA**/
        this->vida -= 10;
        this->vida -= atacado->defender(danio);
        return this->danio;/****/
    }

    virtual int defender(int danioEnemigo){ /**CHARIZARD REVIVE CON 40 DE VIDA SI RECIBIO 3 GOLPES**/
        this->vida -= danioEnemigo;
        if (vidaExtra){

            contadorGolpes++;

            if(contadorGolpes >= 3 && vida <=0){

                //std::cout << "Charizard usa Piedra de la resurreccion y revive con 40 puntos de vida" << std::endl;
                this->vida=40;
                vidaExtra = false;
            }
        }
        return 0;/****/
    }

    virtual void ImprimirPantalla(){

   /* printf("                 .\"-,.__\n");
    printf("                 `.     `.  ,\n");
    printf("              .--'  .._,'\"-' `.\n");
    printf("             .    .'         `'\n");
    printf("             `.   /          ,'\n");
    printf("               `  '--.   ,-\"'\n");
    printf("                `\"`   |  \\\n");
    printf("                   -. \\, |\n");
    printf("                    `--Y.'      ___.\n");
    printf("                         \\     L._, \\\n");
    printf("               _.,        `.   <  <\\                _\n");
    printf("             ,' '           `, `.   | \\            ( `\n");
    printf("          ../, `.            `  |    .\\`.           \\ \\_\n");
    printf("         ,' ,..  .           _.,'    ||\\l            )  '\".\n");
    printf("        , ,'   \\           ,'.-.`-._,'  |           .  _._`.\n");
    printf("      ,' /      \\ \\        `' ' `--/   | \\          / /   ..\\\n");
    printf("    .'  /        \\ .         |\\__ - _ ,'` `        / /     `.`.\n");
    printf("    |  '          ..         `-...-\"  |  `-'      / /        . `.\n");
    printf("    | /           |L__           |    |          / /          `. `.\n");
    printf("   , /            .   .          |    |         / /             ` `\n");
    printf("  / /          ,. ,`._ `-_       |    |  _   ,-' /               ` \\\n");
    printf(" / .           \\\"`_/. `-_ \\_,.  ,'    +-' `-'  _,        ..,-.    \\`.\n");
    printf(".  '         .-f    ,'   `    '.       \\__.---'     _   .'   '     \\ \\\n");
    printf("' /          `.'    l     .' /          \\..      ,_|/   `.  ,'`     L`\n");
    printf("|'      _.-\"\"` `.    \\ _,'  `            \\ `.___`.'\"`-.  , |   |    | \\\n");
    printf("||    ,'      `. `.   '       _,...._        `  |    `/ '  |   '     .|\n");
    printf("||  ,'          `. ;.,.---' ,'       `.   `.. `-'  .-' /_ .'    ;_   ||\n");
    printf("|| '              V      / /           `   | `   ,'   ,' '.    !  `. ||\n");
    printf("||/            _,-------7 '              . |  `-'    l         /    `||\n");
    printf(". |          ,' .-   ,' ||               | .-.        `.      .'     ||\n");
    printf(" `'        ,'    `\".'    |               |    `.        '. -.'       `'\n");
    printf("          /      ,'      |               |,'    \\-.._,.'/'\n");
    printf("          .     /        .               .       \\    .''\n");
    printf("        .`.    |         `.             /         :_,'.'\n");
    printf("          \\ `...\\   _     ,'-.        .'         /_.-'\n");
    printf("           `-.__ `,  `'   .  _.>----''.  _  __  /\n");
    printf("                .'        /\"'          |  \"'   '_\n");
    printf("               /_|.-'\\ ,\".             '.'`__'-( \\\n");
    printf("                 / ,\"'\"\\,'               `/  `-.|\" mh\n");*/

    }

};

#endif // CHARMANDER_H_INCLUDED
