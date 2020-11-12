#pragma once
#include <stdlib.h>

#define call(obj, method, ...) \
    ((obj)->_proto->method((obj),##__VA_ARGS__))

#define init(type, obj, ...) \
    type* obj = _##init_##type(__VA_ARGS__)

#define del(obj)              \
    do {                      \
        if (obj->_proto->del) \
            call(obj, del);   \
        free(obj);            \
        obj = NULL;           \
    } while(0)

#define init_proto(type)                                   \
    static struct _##type##_Proto _proto;                  \
    static char   _init_proto_once = 0;                    \
    type*         self             = malloc(sizeof(type)); \
    self->_proto = &_proto;                                \
    for (; _init_proto_once < 1; ++_init_proto_once)

