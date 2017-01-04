#define SBF_RESERVED (0x78)
#define SBF_PNPOS    (1<<0)
#define SBF_BOOTING  (1<<1)
#define SBF_DIAG     (1<<2)
#define SBF_PARITY   (1<<7)
int sbf_port __initdata = -1;
static int __init parity(u8 v)
static void __init sbf_write(u8 v)
static u8 __init sbf_read(void)
static int __init sbf_value_valid(u8 v)
static int __init sbf_init(void)
module_init(sbf_init);
