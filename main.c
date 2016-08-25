//*************************
//
//Ez a file nem modosithato
//
//*************************

#include <stdio.h>
#include "functions.h"

enum powers{
    USA,
    France=3,
    Japan,
    Russia
};

int main(int argc, const char * argv[]) {
    
    enum powers atomic = Japan;
    int i = 0;
    double x = Power(), y;
    double *px = &y;
    *px = x;
    
    power(px);
    
    if(*px == (x*atomic) && atomic == x)
    {
        for(i = 0; i<powerLevel(); i++)
        {
            printf("%s\n","Siker" NOSPACE "es" SPACE "futtatas");
        }
    }
    
    return 0;
}
