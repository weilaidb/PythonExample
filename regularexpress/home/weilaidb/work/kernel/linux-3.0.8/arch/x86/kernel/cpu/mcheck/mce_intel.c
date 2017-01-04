static DEFINE_PER_CPU(mce_banks_t, mce_banks_owned);
static DEFINE_SPINLOCK(cmci_discover_lock);
#define CMCI_THRESHOLD 1
static int cmci_supported(int *banks)
static void intel_threshold_interrupt(void)
static void print_update(char *type, int *hdr, int num)
static void cmci_discover(int banks, int boot)
void cmci_recheck(void)
void cmci_clear(void)
void cmci_rediscover(int dying)
void cmci_reenable(void)
static void intel_init_cmci(void)
void mce_intel_feature_init(struct cpuinfo_x86 *c)
