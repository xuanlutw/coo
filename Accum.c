#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "Accum.h"
#include "coo.h"

static void add (Accum* self, int num) {
    self->sum += num;
}

static void print (Accum* self) {
    printf("The sum is %d\n", self->sum);
}

Accum* _init_Accum() {
    init_proto(Accum) {
        _proto.add   = add;
        _proto.print = print;
        _proto.del   = NULL;
        printf("INIT ACCUM PROTO\n");
    }
    self->sum = 0;
    return self;
}

/*static void add (Adder* self, int num) {*/
    /*self->sum += num;*/
/*}*/

/*static void print (Adder* self) {*/
    /*printf("The sum is %d\n", self->sum);*/
/*}*/

/*Adder* init_Adder() {*/
    /*Adder* self = malloc(sizeof(Adder));*/
    /*self->sum = 0;*/
    /*self->add = add;*/
    /*self->print = print;*/
    /*return self;*/
/*}*/
