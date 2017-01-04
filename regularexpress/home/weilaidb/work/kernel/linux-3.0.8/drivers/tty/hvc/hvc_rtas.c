#define hvc_rtas_cookie 0x67781e15
struct hvc_struct *hvc_rtas_dev;
static int rtascons_put_char_token = RTAS_UNKNOWN_SERVICE;
static int rtascons_get_char_token = RTAS_UNKNOWN_SERVICE;
static inline int hvc_rtas_write_console(uint32_t vtermno, const char *buf,
int count)
static int hvc_rtas_read_console(uint32_t vtermno, char *buf, int count)
static const struct hv_ops hvc_rtas_get_put_ops = ;
static int __init hvc_rtas_init(void)
module_init(hvc_rtas_init);
static void __exit hvc_rtas_exit(void)
module_exit(hvc_rtas_exit);
static int __init hvc_rtas_console_init(void)
console_initcall(hvc_rtas_console_init);
