#define BUCKETS 12
#define INTERVALS 8
#define RESOLUTION 1024
#define DECAY 8
#define MAX_INTERESTING 50000
#define STDDEV_THRESH 400
struct menu_device ;
#define LOAD_INT(x) ((x) >> FSHIFT)
#define LOAD_FRAC(x) LOAD_INT(((x) & (FIXED_1-1)) * 100)
static int get_loadavg(void)
static inline int which_bucket(unsigned int duration)
static inline int performance_multiplier(void)
static DEFINE_PER_CPU(struct menu_device, menu_devices);
static void menu_update(struct cpuidle_device *dev);
static u64 div_round64(u64 dividend, u32 divisor)
static void detect_repeating_patterns(struct menu_device *data)
static int menu_select(struct cpuidle_device *dev)
static void menu_reflect(struct cpuidle_device *dev)
static void menu_update(struct cpuidle_device *dev)
static int menu_enable_device(struct cpuidle_device *dev)
static struct cpuidle_governor menu_governor = ;
static int __init init_menu(void)
static void __exit exit_menu(void)
MODULE_LICENSE("GPL");
module_init(init_menu);
module_exit(exit_menu);
