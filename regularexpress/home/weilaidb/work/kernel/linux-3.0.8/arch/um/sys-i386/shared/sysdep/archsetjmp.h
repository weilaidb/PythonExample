#define _KLIBC_ARCHSETJMP_H
struct __jmp_buf ;
typedef struct __jmp_buf jmp_buf[1];
#define JB_IP __eip
#define JB_SP __esp
