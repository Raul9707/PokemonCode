#ifndef BULBASAUR_H_INCLUDED
#define BULBASAUR_H_INCLUDED
#include "Pokemon.h"
#include <time.h>
#include <windows.h>

class Venusaur : public Pokemon{

public:
    Venusaur(){
        this->vida = 100;
        this->danio = 0;
        this->nombre = "Venusaur";
        srand(time(NULL));
    }

    virtual int atacar (Pokemon* atacado){ /**VENUSAUR ATACA CON UN DANIO ALEATORIO ENTRE 10 Y 60, SIEMPRE MULTIPLO DE 10**/
        this-> danio = ((rand()%6)+1) *10;
        this->vida -= atacado->defender(danio);
        return danio;/****/
    }

    virtual int defender(int danioEnemigo){ /**VENUSAUR TIENE UN 30% DE CHANCES DE DEVOLVER EL GOLPE RECIBIDO**/
        if((rand()%100 + 1)<= 30){
            std::cout<< "Venusaur devuelve el ataque"<< std::endl;
            return danioEnemigo;
        }
        else{
            this->vida -= danioEnemigo;
            return 0;/****/
        }
    }

    virtual void ImprimirPantalla(){


    printf("                           _._       _,._\n");
    printf("                        _.'   `. ' .'   _`.\n");
    printf("                ,\"\"\"/`\"\"-.-.,/. ` V'\\-,`.,--/\"\"\".\"-..\n");
    printf("              ,'    `...,' . ,\\-----._|     `.   /   \\\n");
    printf("             `.            .`  -'`\"\" .._   :> `-'   `.\n");
    printf("            ,'  ,-.  _,.-'| `..___ ,'   |'-..__   .._ L\n");
    printf("           .    \\_ -'   `-'     ..      `.-' `.`-.'_ .|\n");
    printf("           |   ,',-,--..  ,--../  `.  .-.    , `-.  ``.\n");
    printf("           `.,' ,  |   |  `.  /'/,,.\\/  |    \\|   |\n");
    printf("                `  `---'    `j   .   \\  .     '   j\n");
    printf("              ,__`\"        ,'|`'\\_/`.'\\'        |\\-'-, _,.\n");
    printf("       .--...`-. `-`. /    '- ..      _,    /\\ ,' .--\"'  ,'\".\n");
    printf("     _'-\"\"-    --  _`'-.../ __ '.'`-^,_`-\"\"\"\"---....__  ' _,-`\n");
    printf("   _.----`  _..--.'        |  \"`-..-\" __|'\"'         .\"\"-. \"\"'--.._\n");
    printf("  /        '    /     ,  _.+-.'  ||._'   \"\"\"\". .          `     .__\\\n");
    printf(" `---    /        /  / j'       _/|..`  -. `-`\\ \\   \\  \\   `.  \\ `-..\n");
    printf(",\" _.-' /    /` ./  /`_|_,-\"   ','|       `. | -'`._,   L  \\ .  `.   |\n");
    printf("`\"' /  /  / ,__...-----| _.,  ,'            `|----.._`-.|' |. .` ..  .\n");
    printf("   /  '| /.,/   \\--.._ `-,' ,          .  '`.'  __,., '  ''``._ \\ \\`,'\n");
    printf("  /_,'---  ,     \\`._,-` \\ //  / . \\    `._,  -`,  / / _   |   `-L -\n");
    printf("   /       `.     ,  ..._ ' `_/ '| |\\ `._'       '-.'   `.,'     |\n");
    printf("  '         /    /  ..   `.  `./ | ; `.'    ,\"\" ,.  `.    \\      |\n");
    printf("   `.     ,'   ,'   | |\\  |       \"        |  ,'\\ |   \\    `    ,L\n");
    printf("   /|`.  /    '     | `-| '                  /`-' |    L    `._/  \\\n");
    printf("  / | .`|    |  .   `._.'                   `.__,'   .  |     |  (`\n");
    printf(" '-\"\"-'_|    `. `.__,._____     .    _,        ____ ,-  j     \".-'\"'\n");
    printf("        \\      `-.  \\/.    `\"--.._    _,.---'\"\"\\/  \"_,.'     /-'\n");
    printf("         )        `-._ '-.        `--\"      _.-'.-\"\"        `.\n");
    printf("        ./            `,. `\".._________...\"\"_.-\"`.          _j\n");
    printf("       /_\\.__,\"\".   ,.'  \"`-...________.---\"     .\".   ,.  / \\\n");
    }
};

#endif // BULBASAUR_H_INCLUDED
