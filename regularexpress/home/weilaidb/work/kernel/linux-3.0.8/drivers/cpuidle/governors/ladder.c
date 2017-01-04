#define PROMOTION_COUNT 4
#define DEMOTION_COUNT 1
struct ladder_device_state ;
struct ladder_device ;
static DEFINE_PER_CPU(struct ladder_device, ladder_devices);
static inline void ladder_do_selection(struct ladder_device *ldev,
int old_idx, int new_idx)
static int ladder_select_state(struct cpuidle_device *dev)
static int ladder_enable_device(struct cpuidle_device *dev)
static struct cpuidle_governor ladder_governor = ;
static int __init init_ladder(void)
static void __exit exit_ladder(void)
MODULE_LICENSE("GPL");
module_init(init_ladder);
module_exit(exit_ladder);
