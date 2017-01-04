struct olpc_platform_t olpc_platform_info;
EXPORT_SYMBOL_GPL(olpc_platform_info);
static DEFINE_SPINLOCK(ec_lock);
#define EC_BASE_TIMEOUT 20
static int ec_timeout = EC_BASE_TIMEOUT;
static int __init olpc_ec_timeout_set(char *str)
__setup("olpc_ec_timeout=", olpc_ec_timeout_set);
static inline unsigned int ibf_status(unsigned int port)
static inline unsigned int obf_status(unsigned int port)
#define wait_on_ibf(p, d) __wait_on_ibf(__LINE__, (p), (d))
static int __wait_on_ibf(unsigned int line, unsigned int port, int desired)
#define wait_on_obf(p, d) __wait_on_obf(__LINE__, (p), (d))
static int __wait_on_obf(unsigned int line, unsigned int port, int desired)
int olpc_ec_cmd(unsigned char cmd, unsigned char *inbuf, size_t inlen,
unsigned char *outbuf,  size_t outlen)
EXPORT_SYMBOL_GPL(olpc_ec_cmd);
static bool __init check_ofw_architecture(struct device_node *root)
static u32 __init get_board_revision(struct device_node *root)
static bool __init platform_detect(void)
static int __init add_xo1_platform_devices(void)
static int __init olpc_init(void)
postcore_initcall(olpc_init);
