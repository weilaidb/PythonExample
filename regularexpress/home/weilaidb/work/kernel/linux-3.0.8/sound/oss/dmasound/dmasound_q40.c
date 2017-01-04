#define DMASOUND_Q40_REVISION 0
#define DMASOUND_Q40_EDITION 3
static int expand_bal;
static int expand_data;
static void *Q40Alloc(unsigned int size, gfp_t flags);
static void Q40Free(void *, unsigned int);
static int Q40IrqInit(void);
static void Q40IrqCleanUp(void);
static void Q40Silence(void);
static void Q40Init(void);
static int Q40SetFormat(int format);
static int Q40SetVolume(int volume);
static void Q40PlayNextFrame(int index);
static void Q40Play(void);
static irqreturn_t Q40StereoInterrupt(int irq, void *dummy);
static irqreturn_t Q40MonoInterrupt(int irq, void *dummy);
static void Q40Interrupt(void);
static ssize_t q40_ct_law(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t q40_ct_s8(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t q40_ct_u8(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t q40_ctx_law(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t q40_ctx_s8(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t q40_ctx_u8(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t q40_ctc_law(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t q40_ctc_s8(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t q40_ctc_u8(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static TRANS transQ40Normal = ;
static TRANS transQ40Expanding = ;
static TRANS transQ40Compressing = ;
static void *Q40Alloc(unsigned int size, gfp_t flags)
static void Q40Free(void *ptr, unsigned int size)
static int __init Q40IrqInit(void)
static void Q40IrqCleanUp(void)
static void Q40Silence(void)
static char *q40_pp;
static unsigned int q40_sc;
static void Q40PlayNextFrame(int index)
static void Q40Play(void)
static irqreturn_t Q40StereoInterrupt(int irq, void *dummy)
static irqreturn_t Q40MonoInterrupt(int irq, void *dummy)
static void Q40Interrupt(void)
static void Q40Init(void)
static int Q40SetFormat(int format)
static int Q40SetVolume(int volume)
static SETTINGS def_hard =  ;
static SETTINGS def_soft =  ;
static MACHINE machQ40 = ;
static int __init dmasound_q40_init(void)
static void __exit dmasound_q40_cleanup(void)
module_init(dmasound_q40_init);
module_exit(dmasound_q40_cleanup);
MODULE_DESCRIPTION("Q40/Q60 sound driver");
MODULE_LICENSE("GPL");
