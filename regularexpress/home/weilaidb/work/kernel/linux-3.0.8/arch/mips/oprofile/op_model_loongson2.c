#define LOONGSON2_CPU_TYPE	"mips/loongson2"
#define LOONGSON2_PERFCNT_OVERFLOW		(1ULL   << 31)
#define LOONGSON2_PERFCTRL_EXL			(1UL	<<  0)
#define LOONGSON2_PERFCTRL_KERNEL		(1UL    <<  1)
#define LOONGSON2_PERFCTRL_SUPERVISOR		(1UL    <<  2)
#define LOONGSON2_PERFCTRL_USER			(1UL    <<  3)
#define LOONGSON2_PERFCTRL_ENABLE		(1UL    <<  4)
#define LOONGSON2_PERFCTRL_EVENT(idx, event) \
(((event) & 0x0f) << ((idx) ? 9 : 5))
#define read_c0_perfctrl() __read_64bit_c0_register($24, 0)
#define write_c0_perfctrl(val) __write_64bit_c0_register($24, 0, val)
#define read_c0_perfcnt() __read_64bit_c0_register($25, 0)
#define write_c0_perfcnt(val) __write_64bit_c0_register($25, 0, val)
static struct loongson2_register_config  reg;
static char *oprofid = "LoongsonPerf";
static irqreturn_t loongson2_perfcount_handler(int irq, void *dev_id);
static void reset_counters(void *arg)
static void loongson2_reg_setup(struct op_counter_config *cfg)
static void loongson2_cpu_setup(void *args)
static void loongson2_cpu_start(void *args)
static void loongson2_cpu_stop(void *args)
static irqreturn_t loongson2_perfcount_handler(int irq, void *dev_id)
static int __init loongson2_init(void)
static void loongson2_exit(void)
struct op_mips_model op_model_loongson2_ops = ;
