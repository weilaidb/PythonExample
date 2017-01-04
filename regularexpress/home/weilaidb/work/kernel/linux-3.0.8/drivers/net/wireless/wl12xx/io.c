#define OCP_CMD_LOOP  32
#define OCP_CMD_WRITE 0x1
#define OCP_CMD_READ  0x2
#define OCP_READY_MASK  BIT(18)
#define OCP_STATUS_MASK (BIT(16) | BIT(17))
#define OCP_STATUS_NO_RESP    0x00000
#define OCP_STATUS_OK         0x10000
#define OCP_STATUS_REQ_FAILED 0x20000
#define OCP_STATUS_RESP_ERROR 0x30000
bool wl1271_set_block_size(struct wl1271 *wl)
void wl1271_disable_interrupts(struct wl1271 *wl)
void wl1271_enable_interrupts(struct wl1271 *wl)
int wl1271_set_partition(struct wl1271 *wl,
struct wl1271_partition_set *p)
EXPORT_SYMBOL_GPL(wl1271_set_partition);
void wl1271_io_reset(struct wl1271 *wl)
void wl1271_io_init(struct wl1271 *wl)
void wl1271_top_reg_write(struct wl1271 *wl, int addr, u16 val)
u16 wl1271_top_reg_read(struct wl1271 *wl, int addr)
