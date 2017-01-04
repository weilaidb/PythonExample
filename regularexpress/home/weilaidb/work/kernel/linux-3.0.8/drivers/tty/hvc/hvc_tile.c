static int hvc_tile_put_chars(uint32_t vt, const char *buf, int count)
static int hvc_tile_get_chars(uint32_t vt, char *buf, int count)
static const struct hv_ops hvc_tile_get_put_ops = ;
static int __init hvc_tile_console_init(void)
console_initcall(hvc_tile_console_init);
static int __init hvc_tile_init(void)
device_initcall(hvc_tile_init);
