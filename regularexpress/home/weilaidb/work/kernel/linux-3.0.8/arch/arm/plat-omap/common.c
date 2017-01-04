#define NO_LENGTH_CHECK 0xffffffff
struct omap_board_config_kernel *omap_board_config __initdata;
int omap_board_config_size;
static const void *__init get_config(u16 tag, size_t len,
int skip, size_t *len_out)
const void *__init __omap_get_config(u16 tag, size_t len, int nr)
const void *__init omap_get_var_config(u16 tag, size_t *len)
void __init omap_reserve(void)
