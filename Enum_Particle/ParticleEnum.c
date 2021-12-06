#include <stdio.h>

int main () {
    

    enum particle {

        hadron,
        lepton,
        meson

        };

    enum particle proton, electron, pion; 

    proton=hadron;
    electron=lepton;
    pion=meson; 

    _Bool particle=(proton==electron);


    if (particle){

        printf("A proton is not an electron");


    } else {

        printf("A proton is an electron");


    }

    return 0 ;

}