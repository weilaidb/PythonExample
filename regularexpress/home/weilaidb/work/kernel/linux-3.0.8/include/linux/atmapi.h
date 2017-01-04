#define _LINUX_ATMAPI_H
#if defined(__sparc__) || defined(__ia64__)
#define __ATM_API_ALIGN	__attribute__((aligned(8)))
#define __ATM_API_ALIGN
typedef struct  __ATM_API_ALIGN atm_kptr_t;
