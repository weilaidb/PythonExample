#define div_factor 3
static u32 rand1, preh_val, posth_val, jph_val;
static int errors, handler_errors, num_tests;
static u32 (*target)(u32 value);
static u32 (*target2)(u32 value);
static noinline u32 kprobe_target(u32 value)
static int kp_pre_handler(struct kprobe *p, struct pt_regs *regs)
static void kp_post_handler(struct kprobe *p, struct pt_regs *regs,
unsigned long flags)
static struct kprobe kp = ;
static int test_kprobe(void)
static noinline u32 kprobe_target2(u32 value)
static int kp_pre_handler2(struct kprobe *p, struct pt_regs *regs)
static void kp_post_handler2(struct kprobe *p, struct pt_regs *regs,
unsigned long flags)
static struct kprobe kp2 = ;
static int test_kprobes(void)
static u32 j_kprobe_target(u32 value)
static struct jprobe jp = ;
static int test_jprobe(void)
static struct jprobe jp2 = ;
static int test_jprobes(void)
static u32 krph_val;
static int entry_handler(struct kretprobe_instance *ri, struct pt_regs *regs)
static int return_handler(struct kretprobe_instance *ri, struct pt_regs *regs)
static struct kretprobe rp = ;
static int test_kretprobe(void)
static int return_handler2(struct kretprobe_instance *ri, struct pt_regs *regs)
static struct kretprobe rp2 = ;
static int test_kretprobes(void)
int init_test_probes(void)
