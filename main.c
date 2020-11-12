#include <stdio.h>
#include "Accum.h"
#include "coo.h"

int main () {
    init(Accum, accum_a);
    init(Accum, accum_b);

    call(accum_a, print);
    call(accum_b, print);

    call(accum_a, add, 3);
    call(accum_a, add, 3);
    call(accum_a, add, 4);

    call(accum_b, add, 1);

    call(accum_a, print);
    call(accum_b, print);
    
    del(accum_a);
    del(accum_b);

    /*Adder* adder_a = init_Adder();*/
    /*Adder* adder_b = init_Adder();*/
    /*adder_a->proto->add(adder_a, 3);*/
    /*adder_a->proto->add(adder_a, 4);*/

    /*adder_b->proto->add(adder_b, 1);*/

    /*adder_a->proto->print(adder_a);*/
    /*adder_b->proto->print(adder_b);*/

    return 0;
}
