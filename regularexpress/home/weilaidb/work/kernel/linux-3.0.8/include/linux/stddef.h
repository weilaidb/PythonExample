#define _LINUX_STDDEF_H
#undef NULL
#if defined(__cplusplus)
#define NULL 0
#define NULL ((void *)0)
enum ;
#undef offsetof
#define offsetof(TYPE,MEMBER) __compiler_offsetof(TYPE,MEMBER)
#define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)
