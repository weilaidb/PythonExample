static enum wl12xx_acx_int_reg wl1251_io_reg_table[ACX_REG_TABLE_LEN] = ;
static int wl1251_translate_reg_addr(struct wl1251 *wl, int addr)
static int wl1251_translate_mem_addr(struct wl1251 *wl, int addr)
void wl1251_mem_read(struct wl1251 *wl, int addr, void *buf, size_t len)
void wl1251_mem_write(struct wl1251 *wl, int addr, void *buf, size_t len)
u32 wl1251_mem_read32(struct wl1251 *wl, int addr)
void wl1251_mem_write32(struct wl1251 *wl, int addr, u32 val)
u32 wl1251_reg_read32(struct wl1251 *wl, int addr)
void wl1251_reg_write32(struct wl1251 *wl, int addr, u32 val)
void wl1251_set_partition(struct wl1251 *wl,
u32 mem_start, u32 mem_size,
u32 reg_start, u32 reg_size)
