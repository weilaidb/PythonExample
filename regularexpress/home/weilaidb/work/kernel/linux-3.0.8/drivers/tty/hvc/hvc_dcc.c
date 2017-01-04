#define DCC_STATUS_RX		(1 << 30)
#define DCC_STATUS_TX		(1 << 29)
static inline u32 __dcc_getstatus(void)
static inline char __dcc_getchar(void)
static inline void __dcc_putchar(char c)
static int hvc_dcc_put_chars(uint32_t vt, const char *buf, int count)
static int hvc_dcc_get_chars(uint32_t vt, char *buf, int count)
static const struct hv_ops hvc_dcc_get_put_ops = ;
static int __init hvc_dcc_console_init(void)
console_initcall(hvc_dcc_console_init);
static int __init hvc_dcc_init(void)
device_initcall(hvc_dcc_init);
