#define __ASM_ARM_FPSTATE_H
struct vfp_hard_struct ;
union vfp_state ;
extern void vfp_flush_thread(union vfp_state *);
extern void vfp_release_thread(union vfp_state *);
#define FP_HARD_SIZE 35
struct fp_hard_struct ;
#define FP_SOFT_SIZE 35
struct fp_soft_struct ;
#define IWMMXT_SIZE	0x98
struct iwmmxt_struct ;
union fp_state ;
#define FP_SIZE (sizeof(union fp_state) / sizeof(int))
struct crunch_state ;
#define CRUNCH_SIZE	sizeof(struct crunch_state)
