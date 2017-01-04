void d40_log_cfg(struct stedma40_chan_cfg *cfg,
u32 *lcsp1, u32 *lcsp3)
void d40_phy_cfg(struct stedma40_chan_cfg *cfg,
u32 *src_cfg, u32 *dst_cfg, bool is_log)
static int d40_phy_fill_lli(struct d40_phy_lli *lli,
dma_addr_t data,
u32 data_size,
dma_addr_t next_lli,
u32 reg_cfg,
struct stedma40_half_channel_info *info,
unsigned int flags)
static int d40_seg_size(int size, int data_width1, int data_width2)
static struct d40_phy_lli *
d40_phy_buf_to_lli(struct d40_phy_lli *lli, dma_addr_t addr, u32 size,
dma_addr_t lli_phys, dma_addr_t first_phys, u32 reg_cfg,
struct stedma40_half_channel_info *info,
struct stedma40_half_channel_info *otherinfo,
unsigned long flags)
int d40_phy_sg_to_lli(struct scatterlist *sg,
int sg_len,
dma_addr_t target,
struct d40_phy_lli *lli_sg,
dma_addr_t lli_phys,
u32 reg_cfg,
struct stedma40_half_channel_info *info,
struct stedma40_half_channel_info *otherinfo,
unsigned long flags)
static void d40_log_lli_link(struct d40_log_lli *lli_dst,
struct d40_log_lli *lli_src,
int next, unsigned int flags)
void d40_log_lli_lcpa_write(struct d40_log_lli_full *lcpa,
struct d40_log_lli *lli_dst,
struct d40_log_lli *lli_src,
int next, unsigned int flags)
void d40_log_lli_lcla_write(struct d40_log_lli *lcla,
struct d40_log_lli *lli_dst,
struct d40_log_lli *lli_src,
int next, unsigned int flags)
static void d40_log_fill_lli(struct d40_log_lli *lli,
dma_addr_t data, u32 data_size,
u32 reg_cfg,
u32 data_width,
unsigned int flags)
static struct d40_log_lli *d40_log_buf_to_lli(struct d40_log_lli *lli_sg,
dma_addr_t addr,
int size,
u32 lcsp13,
u32 data_width1,
u32 data_width2,
unsigned int flags)
int d40_log_sg_to_lli(struct scatterlist *sg,
int sg_len,
dma_addr_t dev_addr,
struct d40_log_lli *lli_sg,
u32 lcsp13,
u32 data_width1, u32 data_width2)
