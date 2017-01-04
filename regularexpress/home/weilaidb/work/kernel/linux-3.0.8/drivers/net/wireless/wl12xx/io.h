#define __IO_H__
#define HW_ACCESS_MEMORY_MAX_RANGE	0x1FFC0
#define HW_PARTITION_REGISTERS_ADDR     0x1FFC0
#define HW_PART0_SIZE_ADDR              (HW_PARTITION_REGISTERS_ADDR)
#define HW_PART0_START_ADDR             (HW_PARTITION_REGISTERS_ADDR + 4)
#define HW_PART1_SIZE_ADDR              (HW_PARTITION_REGISTERS_ADDR + 8)
#define HW_PART1_START_ADDR             (HW_PARTITION_REGISTERS_ADDR + 12)
#define HW_PART2_SIZE_ADDR              (HW_PARTITION_REGISTERS_ADDR + 16)
#define HW_PART2_START_ADDR             (HW_PARTITION_REGISTERS_ADDR + 20)
#define HW_PART3_START_ADDR             (HW_PARTITION_REGISTERS_ADDR + 24)
#define HW_ACCESS_REGISTER_SIZE         4
#define HW_ACCESS_PRAM_MAX_RANGE	0x3c000
struct wl1271;
void wl1271_disable_interrupts(struct wl1271 *wl);
void wl1271_enable_interrupts(struct wl1271 *wl);
void wl1271_io_reset(struct wl1271 *wl);
void wl1271_io_init(struct wl1271 *wl);
static inline struct device *wl1271_wl_to_dev(struct wl1271 *wl)
static inline void wl1271_raw_write(struct wl1271 *wl, int addr, void *buf,
size_t len, bool fixed)
static inline void wl1271_raw_read(struct wl1271 *wl, int addr, void *buf,
size_t len, bool fixed)
static inline u32 wl1271_raw_read32(struct wl1271 *wl, int addr)
static inline void wl1271_raw_write32(struct wl1271 *wl, int addr, u32 val)
static inline int wl1271_translate_addr(struct wl1271 *wl, int addr)
static inline void wl1271_read(struct wl1271 *wl, int addr, void *buf,
size_t len, bool fixed)
static inline void wl1271_write(struct wl1271 *wl, int addr, void *buf,
size_t len, bool fixed)
static inline u32 wl1271_read32(struct wl1271 *wl, int addr)
static inline void wl1271_write32(struct wl1271 *wl, int addr, u32 val)
static inline void wl1271_power_off(struct wl1271 *wl)
static inline int wl1271_power_on(struct wl1271 *wl)
void wl1271_top_reg_write(struct wl1271 *wl, int addr, u16 val);
u16 wl1271_top_reg_read(struct wl1271 *wl, int addr);
int wl1271_set_partition(struct wl1271 *wl,
struct wl1271_partition_set *p);
int wl1271_register_hw(struct wl1271 *wl);
void wl1271_unregister_hw(struct wl1271 *wl);
int wl1271_init_ieee80211(struct wl1271 *wl);
struct ieee80211_hw *wl1271_alloc_hw(void);
int wl1271_free_hw(struct wl1271 *wl);
irqreturn_t wl1271_irq(int irq, void *data);
bool wl1271_set_block_size(struct wl1271 *wl);
int wl1271_tx_dummy_packet(struct wl1271 *wl);
void wl1271_configure_filters(struct wl1271 *wl, unsigned int filters);
