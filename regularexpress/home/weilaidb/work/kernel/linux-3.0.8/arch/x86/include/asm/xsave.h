#define __ASM_X86_XSAVE_H
#define XSTATE_CPUID		0x0000000d
#define XSTATE_FP	0x1
#define XSTATE_SSE	0x2
#define XSTATE_YMM	0x4
#define XSTATE_FPSSE	(XSTATE_FP | XSTATE_SSE)
#define FXSAVE_SIZE	512
#define XSAVE_HDR_SIZE	    64
#define XSAVE_HDR_OFFSET    FXSAVE_SIZE
#define XSAVE_YMM_SIZE	    256
#define XSAVE_YMM_OFFSET    (XSAVE_HDR_SIZE + XSAVE_HDR_OFFSET)
#define XCNTXT_MASK	(XSTATE_FP | XSTATE_SSE | XSTATE_YMM)
#define REX_PREFIX	"0x48, "
#define REX_PREFIX
extern unsigned int xstate_size;
extern u64 pcntxt_mask;
extern u64 xstate_fx_sw_bytes[USER_XSTATE_FX_SW_WORDS];
extern void xsave_init(void);
extern void update_regset_xstate_info(unsigned int size, u64 xstate_mask);
extern int init_fpu(struct task_struct *child);
extern int check_for_xstate(struct i387_fxsave_struct __user *buf,
void __user *fpstate,
struct _fpx_sw_bytes *sw);
static inline int fpu_xrstor_checking(struct fpu *fpu)
static inline int xsave_user(struct xsave_struct __user *buf)
static inline int xrestore_user(struct xsave_struct __user *buf, u64 mask)
static inline void xrstor_state(struct xsave_struct *fx, u64 mask)
static inline void xsave_state(struct xsave_struct *fx, u64 mask)
static inline void fpu_xsave(struct fpu *fpu)
