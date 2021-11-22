#include "print.h"
#include "../../intf/time.h"

void ct(){
    time_t rawtime;
    struct tm * timeinfo;

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    char* t = asctime(timeinfo);
    print_str(t);
}


void print_title(){
    print_clear();
    print_set_color(PRINT_COLOR_MAGENTA, PRINT_COLOR_BLACK);
    print_str("2048-OS - @tcgmilan");
<<<<<<< Updated upstream
}

void kernel_main(){
    print_title();
    ct();
}

=======
    game();
}
>>>>>>> Stashed changes
