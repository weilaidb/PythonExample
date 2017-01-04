#define EMUDOF   0x00000001
#define EMUDIF   0x00000002
#define EMUDOOVF 0x00000004
#define EMUDIOVF 0x00000008
static inline uint32_t bfin_write_emudat(uint32_t emudat)
static inline uint32_t bfin_read_emudat(void)
static int hvc_bfin_put_chars(uint32_t vt, const char *buf, int count)
static int hvc_bfin_get_chars(uint32_t vt, char *buf, int count)
static const struct hv_ops hvc_bfin_get_put_ops = ;
static int __init hvc_bfin_console_init(void)
console_initcall(hvc_bfin_console_init);
static int __init hvc_bfin_init(void)
device_initcall(hvc_bfin_init);
