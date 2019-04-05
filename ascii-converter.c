#include <stdio.h>

/*sloppy 05/4/2019 */

int ansiiconv ()
{
        char input;
        printf("\n\tPlease enter a ANSII character:\n\t");
        scanf("%c",&input);
        printf("\tThe decimal value of \"%c\" is \"%d\".\n",input, input);
        fflush(stdin);
        return 0;
}

int main(){
        char looper;
        do {
                ansiiconv ();
                printf("\n\tConvert another ANSII character?\n\tPress y for yes, any key to exit\n\t");
                scanf("%c", &looper);
                fflush(stdin);
        }

        while (looper == 'Y' || looper == 'y');

}
