#define _ASMARM_UCONTEXT_H
struct ucontext ;
#define CRUNCH_MAGIC		0x5065cf03
#define CRUNCH_STORAGE_SIZE	(CRUNCH_SIZE + 8)
struct crunch_sigframe  __attribute__((__aligned__(8)));
#define IWMMXT_MAGIC		0x12ef842a
#define IWMMXT_STORAGE_SIZE	(IWMMXT_SIZE + 8)
struct iwmmxt_sigframe  __attribute__((__aligned__(8)));
#define VFP_MAGIC		0x56465001
struct vfp_sigframe
__attribute__((__aligned__(8)));
#define VFP_STORAGE_SIZE	sizeof(struct vfp_sigframe)
struct aux_sigframe  __attribute__((__aligned__(8)));
