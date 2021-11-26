#ifndef PICKACHU_H_INCLUDED
#define PICKACHU_H_INCLUDED
#include "Pokemon.h"
#include <time.h>
#include <windows.h>

class Raichu: public Pokemon{

private:

    int contadorGolpes;
    bool buff;

public:

    Raichu(){
        this->vida = 120;
        this->danio = 30;
        this->nombre = "Raichu";
        this->contadorGolpes=0;
        buff=true;
        srand(time(NULL));
    }

    virtual int atacar (Pokemon* atacado){ /**RAICHU SUMA 10 PUNTOS DE ATAQUE A PARTIR DEL TERCER GOLPE REALIZADO**/
        if(buff){
            if(contadorGolpes >= 3){
                this->danio += 10;
                std::cout << "Raichu usa Piedra Poderosa incrementando su danio " << std::endl;
                this->buff = false;
            }
            else if(contadorGolpes < 3){
                contadorGolpes++;
            }
        }
        this->vida -= atacado->defender(danio);
        return this-> danio;/****/
    }

    virtual int defender(int danioEnemigo){ /**RAICHU TIENE 50% DE CHANCES DE ESQUIVAR EL ATAQUE**/
        if ((1+ rand()%100)>50){
           this->vida -= danio;
        }
        else{
            std::cout << "Raichu consigue esquivar el ataque " << std::endl;
        }
        return 0;/****/
    }

    virtual void ImprimirPantalla(){

    printf("                                        _,--\"\"`---...__\n");
    printf("                            _.---\"\"\"\"`-'.   .-\"\"\"'`-.._`-._\n");
    printf("                _,.-----.,-\"         .\". `-.           \"---`.\n");
    printf("             _,' _,.-..,'__          `.'  ,-`...._      ,\"\"''`-.\n");
    printf("           ,' ,-'     / (  .   ,-.       |    `.  `-._  .       `.\n");
    printf("         ,',-\"       /   `\"    `\"'       '      .    _`. \\\n");
    printf("       ,','       ,-'7--.                 `.__.\"|   ( ` `j\n");
    printf("      '.:--.    ,'   |   .       |\\             '    `--'\n");
    printf("     /.     | ,'     |   |       `'            .\n");
    printf("    '       |',\".    |._,'                     `      _.--\"\"\"\"\"-._\n");
    printf("'.          `-..'    `.                      ,  \\  ,-' _.-\"\"\"\"\"-. `.\n");
    printf("` `                   F  -.                 /    ,' .-'          `  `\n");
    printf(" \\ `                 j     `.              ,-.   . /               . `\n");
    printf("    `.               |     .-`.           .  '-.  V                 . `\n");
    printf("  `   `.      .      | .    \\  \\         j      \\/|                  ' .\n");
    printf("   .    `.    |`.    |-.`._/`   .        |    ,'  A                  | |\n");
    printf("    \\     `. F   \\   |--`  \"._  |        `-.-\"   / .                 | |\n");
    printf("     \\      -'    `. |        `\"'                  |                 F '\n");
    printf("      \\             `+`.                           |                / .\n");
    printf("       \\              .-`                     .    j               / ,\n");
    printf("        \\              \\   `.               .'    /               ' .\n");
    printf("         \\       |`._   \\    `-.._        ,'    ,'              ,'.'\n");
    printf("          '      |   `.  `.       `<`\"\"\"\"'    .'             _,'.'\n");
    printf("           `     |     `-. `._      )   `.     .          _.'_.'\n");
    printf("            `    |        `--/     /`-._  .     `.___..--'_.\"\n");
    printf("             `   |          /     /._   `\"\"`.     `. _,.-\"\n");
    printf("              `  |         /     /   `--.....`.     `._\n");
    printf("               ` |       ,'     /              .\"\"\"\"'  `.\n");
    printf("                `'      , `-..,7                `    . `.`.\n");
    printf("                       .       '                 `.   \\  `v\n");
    printf("                      j.  ,   /                    `.._L_.'\n");
    printf("                      || .   /\n");
    printf("                      `\"-'__/ mh\n");
    printf("\n");

    }

#endif // PICKACHU_H_INCLUDED
