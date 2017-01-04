static int prism2_enable_aux_port(struct net_device *dev, int enable)
static int hfa384x_from_aux(struct net_device *dev, unsigned int addr, int len,
void *buf)
static int hfa384x_to_aux(struct net_device *dev, unsigned int addr, int len,
void *buf)
static int prism2_pda_ok(u8 *buf)
static int prism2_download_aux_dump(struct net_device *dev,
unsigned int addr, int len, u8 *buf)
static u8 * prism2_read_pda(struct net_device *dev)
static int prism2_download_volatile(local_info_t *local,
struct prism2_download_data *param)
static int prism2_enable_genesis(local_info_t *local, int hcr)
static int prism2_get_ram_size(local_info_t *local)
static int prism2_download_genesis(local_info_t *local,
struct prism2_download_data *param)
static inline int prism2_download_block(struct net_device *dev,
u32 addr, u8 *data,
u32 bufaddr, int rest_len)
static int prism2_download_nonvolatile(local_info_t *local,
struct prism2_download_data *dl)
static void prism2_download_free_data(struct prism2_download_data *dl)
static int prism2_download(local_info_t *local,
struct prism2_download_param *param)
