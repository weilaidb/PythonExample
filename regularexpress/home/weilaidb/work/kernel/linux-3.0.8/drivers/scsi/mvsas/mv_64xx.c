static void mvs_64xx_detect_porttype(struct mvs_info *mvi, int i)
static void __devinit mvs_64xx_enable_xmt(struct mvs_info *mvi, int phy_id)
static void __devinit mvs_64xx_phy_hacks(struct mvs_info *mvi)
static void mvs_64xx_stp_reset(struct mvs_info *mvi, u32 phy_id)
static void mvs_64xx_phy_reset(struct mvs_info *mvi, u32 phy_id, int hard)
void mvs_64xx_clear_srs_irq(struct mvs_info *mvi, u8 reg_set, u8 clear_all)
static int __devinit mvs_64xx_chip_reset(struct mvs_info *mvi)
static void mvs_64xx_phy_disable(struct mvs_info *mvi, u32 phy_id)
static void mvs_64xx_phy_enable(struct mvs_info *mvi, u32 phy_id)
static int __devinit mvs_64xx_init(struct mvs_info *mvi)
static int mvs_64xx_ioremap(struct mvs_info *mvi)
static void mvs_64xx_iounmap(struct mvs_info *mvi)
static void mvs_64xx_interrupt_enable(struct mvs_info *mvi)
static void mvs_64xx_interrupt_disable(struct mvs_info *mvi)
static u32 mvs_64xx_isr_status(struct mvs_info *mvi, int irq)
static irqreturn_t mvs_64xx_isr(struct mvs_info *mvi, int irq, u32 stat)
static void mvs_64xx_command_active(struct mvs_info *mvi, u32 slot_idx)
static void mvs_64xx_issue_stop(struct mvs_info *mvi, enum mvs_port_type type,
u32 tfs)
static void mvs_64xx_free_reg_set(struct mvs_info *mvi, u8 *tfs)
static u8 mvs_64xx_assign_reg_set(struct mvs_info *mvi, u8 *tfs)
void mvs_64xx_make_prd(struct scatterlist *scatter, int nr, void *prd)
static int mvs_64xx_oob_done(struct mvs_info *mvi, int i)
static void mvs_64xx_fix_phy_info(struct mvs_info *mvi, int i,
struct sas_identify_frame *id)
static void mvs_64xx_phy_work_around(struct mvs_info *mvi, int i)
void mvs_64xx_phy_set_link_rate(struct mvs_info *mvi, u32 phy_id,
struct sas_phy_linkrates *rates)
static void mvs_64xx_clear_active_cmds(struct mvs_info *mvi)
u32 mvs_64xx_spi_read_data(struct mvs_info *mvi)
void mvs_64xx_spi_write_data(struct mvs_info *mvi, u32 data)
int mvs_64xx_spi_buildcmd(struct mvs_info *mvi,
u32      *dwCmd,
u8       cmd,
u8       read,
u8       length,
u32      addr
)
int mvs_64xx_spi_issuecmd(struct mvs_info *mvi, u32 cmd)
int mvs_64xx_spi_waitdataready(struct mvs_info *mvi, u32 timeout)
void mvs_64xx_fix_dma(dma_addr_t buf_dma, int buf_len, int from, void *prd)
const struct mvs_dispatch mvs_64xx_dispatch = ;
