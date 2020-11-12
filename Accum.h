#pragma once

struct _Accum_Proto;

typedef struct {
    int sum;
    struct _Accum_Proto* _proto;
} Accum;

Accum* _init_Accum();

struct _Accum_Proto {
    void (*add)   (Accum*, int);
    void (*print) (Accum*);
    void (*del)   (Accum*);
};

