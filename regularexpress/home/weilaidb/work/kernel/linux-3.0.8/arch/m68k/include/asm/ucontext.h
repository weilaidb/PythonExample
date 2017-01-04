#define _M68K_UCONTEXT_H
typedef int greg_t;
#define NGREG 18
typedef greg_t gregset_t[NGREG];
typedef struct fpregset  fpregset_t;
struct mcontext ;
#define MCONTEXT_VERSION 2
struct ucontext ;
