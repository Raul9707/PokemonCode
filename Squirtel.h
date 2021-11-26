#ifndef SQUIRTLE_H_INCLUDED
#define SQUIRTLE_H_INCLUDED
#include "Pokemon.h"
#include <time.h>
#include <windows.h>

class Blastoise: public Pokemon{

public:
    Blastoise(){
        this->vida = 80;
        this->danio = this->vida;
        this->nombre = "Blastoise";
        srand(time(NULL));
    }

    virtual int atacar (Pokemon* atacado){ /**BLASTOISA POSEE UN DAÑO IGUAL A SU VIDA ACTUAL**/
        danio= this->vida;
        this->vida -= atacado->defender(danio);
        return this->danio;/****/
    }

    virtual int defender(int danioEnemigo){ /**BLASTOISA TIENE 30% DE REALIZAR UN GOLPE CRITICO LUEGO DE MORIR**/ /**arreglar el golpe critico**/
        this->vida -= danioEnemigo;
        if(this->vida <= 0 && (1+ rand()%100) <= 30){
            std::cout << "Blaaaastoisa acierta un golpe CRITICO antes de caer" <<std::endl;
            return 1;/**VidaMax/2**/
        }
        else return 0;/**/
    }

    virtual void ImprimirPantalla(){

printf("                       _\n");

    printf("            _,..-\"\"\"--' `,.-\".\n");

    printf("          ,'      __.. --',  |\n");

    printf("        _/   _.-\"' |    .' | |       ____\n");

    printf("  ,.-\"\"'    `-\"+.._|     `.' | `-..,',--.`.\n");

    printf(" |   ,.                      '    j 7    l \\__\n");

    printf(" |.-'                            /| |    j||  .\n");

    printf(" `.                   |         / L`.`\"\"','|\\  \\\n");

    printf("   `.,----..._       ,'`\"'-.  ,'   \\ `\"\"'  | |  l\n");

    printf("     Y        `-----'       v'    ,'`,.__..' |   .\n");

    printf("      `.                   /     /   /     `.|   |\n");

    printf("        `.                /     l   j       ,^.  |L\n");

    printf("          `._            L       +. |._   .' \\|  | \\\n");

    printf("            .`--...__,..-'\"\"'-._  l L  \"\"\"    |  |  \\\n");

    printf("          .'  ,`-......L_       \\  \\ \\     _.'  ,'.  l\n");

    printf("       ,-\"`. / ,-.---.'  `.      \\  L..--\"'  _.-^.|   l\n");

    printf(" .-\"\".'\"`.  Y  `._'   '    `.     | | _,.--'\"     |   |\n");

    printf("  `._'   |  |,-'|      l     `.   | |\"..          |   l\n");

    printf("  ,'.    |  |`._'      |      `.  | |_,...---\"\"\"\"\"`    L\n");

    printf(" /   |   j _|-' `.     L       | j ,|              |   |\n");

    printf("`--,\"._,-+' /`---^..../._____,.L',' `.             |\\  |\n");

    printf("   |,'      L                   |     `-.          | \\j\n");

    printf("            .                    \\       `,        |  |\n");

    printf("             \\                __`.Y._      -.     j   |\n");

    printf("              \\           _.,'       `._     \\    |  j\n");

    printf("              ,-\"`-----\"\"\"\"'           |`.    \\  7   |\n");

    printf("             /  `.        '            |  \\    \\ /   |\n");

    printf("            |     `      /             |   \\    Y    |\n");

    printf("            |      \\    .             ,'    |   L_.-')\n");

    printf("             L      `.  |            /      ]     _.-^._\n");

    printf("              \\   ,'  `-7         ,-'      / |  ,'      `-._\n");

    printf("             _,`._       `.   _,-'        ,',^.-            `.\n");

    printf("          ,-'     v....  _.`\"',          _:'--....._______,.-'\n");

    printf("        ._______./     /',,-'\"'`'--.  ,-'  `.\n");

    printf("                 \"\"\"\"\"`.,'         _\\`----...' mh\n");

    printf("                        --------\"\"'\n");

    printf("\n");

    printf("\n");
    }
};


#endif // SQUIRTLE_H_INCLUDED
