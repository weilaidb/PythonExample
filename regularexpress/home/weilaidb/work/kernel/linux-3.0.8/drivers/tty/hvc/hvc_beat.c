extern int64_t beat_get_term_char(uint64_t, uint64_t *, uint64_t *, uint64_t *);
extern int64_t beat_put_term_char(uint64_t, uint64_t, uint64_t, uint64_t);
struct hvc_struct *hvc_beat_dev = NULL;
static int hvc_beat_get_chars(uint32_t vtermno, char *buf, int cnt)
static int hvc_beat_put_chars(uint32_t vtermno, const char *buf, int cnt)
static const struct hv_ops hvc_beat_get_put_ops = ;
static int hvc_beat_useit = 1;
static int hvc_beat_config(char *p)
static int __init hvc_beat_console_init(void)
static int __init hvc_beat_init(void)
static void __exit hvc_beat_exit(void)
module_init(hvc_beat_init);
module_exit(hvc_beat_exit);
__setup("hvc_beat=", hvc_beat_config);
console_initcall(hvc_beat_console_init);
