#define __ASMARM_TCM_H
#error "You should not be including tcm.h unless you have a TCM!"
#define __tcmdata __section(.tcm.data)
#define __tcmconst __section(.tcm.rodata)
#define __tcmfunc __attribute__((long_call)) __section(.tcm.text) noinline
#define __tcmlocalfunc __section(.tcm.text)
void *tcm_alloc(size_t len);
void tcm_free(void *addr, size_t len);
