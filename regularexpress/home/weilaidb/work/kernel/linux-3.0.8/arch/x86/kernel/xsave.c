u64 pcntxt_mask;
static struct xsave_struct *init_xstate_buf;
struct _fpx_sw_bytes fx_sw_reserved;
struct _fpx_sw_bytes fx_sw_reserved_ia32;
static unsigned int *xstate_offsets, *xstate_sizes, xstate_features;
void __sanitize_i387_state(struct task_struct *tsk)
int check_for_xstate(struct i387_fxsave_struct __user *buf,
void __user *fpstate,
struct _fpx_sw_bytes *fx_sw_user)
int save_i387_xstate(void __user *buf)
static int restore_user_xstate(void __user *buf)
int restore_i387_xstate(void __user *buf)
static void prepare_fx_sw_frame(void)
unsigned int sig_xstate_size = sizeof(struct _fpstate);
static inline void xstate_enable(void)
static void __init setup_xstate_features(void)
static void __init setup_xstate_init(void)
static void __init xstate_enable_boot_cpu(void)
void __cpuinit xsave_init(void)
