static int _softing_fct_cmd(struct softing *card, int16_t cmd, uint16_t vector,
const char *msg)
static int softing_fct_cmd(struct softing *card, int16_t cmd, const char *msg)
int softing_bootloader_command(struct softing *card, int16_t cmd,
const char *msg)
static int fw_parse(const uint8_t **pmem, uint16_t *ptype, uint32_t *paddr,
uint16_t *plen, const uint8_t **pdat)
int softing_load_fw(const char *file, struct softing *card,
__iomem uint8_t *dpram, unsigned int size, int offset)
int softing_load_app_fw(const char *file, struct softing *card)
static int softing_reset_chip(struct softing *card)
int softing_chip_poweron(struct softing *card)
static void softing_initialize_timestamp(struct softing *card)
ktime_t softing_raw2ktime(struct softing *card, u32 raw)
static inline int softing_error_reporting(struct net_device *netdev)
int softing_startstop(struct net_device *dev, int up)
int softing_default_output(struct net_device *netdev)
