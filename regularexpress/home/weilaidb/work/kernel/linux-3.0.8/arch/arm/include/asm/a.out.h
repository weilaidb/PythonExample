#define __ARM_A_OUT_H__
struct exec
;
#define N_TXTADDR(a)	(0x00008000)
#define N_TRSIZE(a)	((a).a_trsize)
#define N_DRSIZE(a)	((a).a_drsize)
#define N_SYMSIZE(a)	((a).a_syms)
#define M_ARM 103
#define LIBRARY_START_TEXT	(0x00c00000)
