#define VAL(n)		STR(n)
#define LONG_L_		VAL(LONG_L) " "
#define LONG_S_		VAL(LONG_S) " "
#define PTR_LA_		VAL(PTR_LA) " "
#warning TODO: 64-bit code needs to be verified
#define REG_SIZE	"8"
#define REG_SIZE	"4"
static void register_panic_notifier(void);
static int panic_handler(struct notifier_block *notifier_block,
unsigned long event, void *cause_string);
const char *get_system_type(void)
void __init plat_mem_setup(void)
static void register_panic_notifier()
static int panic_handler(struct notifier_block *notifier_block,
unsigned long event, void *cause_string)
static bool have_rfmac;
static u8 rfmac[ETH_ALEN];
static int rfmac_param(char *p)
early_param("rfmac", rfmac_param);
void platform_random_ether_addr(u8 addr[ETH_ALEN])
