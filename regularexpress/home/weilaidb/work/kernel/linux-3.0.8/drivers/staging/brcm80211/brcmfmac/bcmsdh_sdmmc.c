extern int sdio_function_init(void);
extern void sdio_function_cleanup(void);
#if !defined(OOB_INTR_ONLY)
static void IRQHandler(struct sdio_func *func);
static void IRQHandlerF2(struct sdio_func *func);
static int sdioh_sdmmc_get_cisaddr(sdioh_info_t *sd, u32 regaddr);
extern int sdio_reset_comm(struct mmc_card *card);
extern PBCMSDH_SDMMC_INSTANCE gInstance;
uint sd_sdmode = SDIOH_MODE_SD4;
uint sd_f2_blocksize = 512;
uint sd_divisor = 2;
uint sd_power = 1;
uint sd_clock = 1;
uint sd_hiok = false;
uint sd_msglevel = 0x01;
uint sd_use_dma = true;
DHD_PM_RESUME_WAIT_INIT(sdioh_request_byte_wait);
DHD_PM_RESUME_WAIT_INIT(sdioh_request_word_wait);
DHD_PM_RESUME_WAIT_INIT(sdioh_request_packet_wait);
DHD_PM_RESUME_WAIT_INIT(sdioh_request_buffer_wait);
#define DMA_ALIGN_MASK	0x03
int sdioh_sdmmc_card_regread(sdioh_info_t *sd, int func, u32 regaddr,
int regsize, u32 *data);
void sdioh_sdio_set_host_pm_flags(int flag)
static int sdioh_sdmmc_card_enablefuncs(sdioh_info_t *sd)
sdioh_info_t *sdioh_attach(void *bar0, uint irq)
extern SDIOH_API_RC sdioh_detach(sdioh_info_t *sd)
#if defined(OOB_INTR_ONLY) && defined(HW_OOB)
extern SDIOH_API_RC sdioh_enable_func_intr(void)
extern SDIOH_API_RC sdioh_disable_func_intr(void)
extern SDIOH_API_RC
sdioh_interrupt_register(sdioh_info_t *sd, sdioh_cb_fn_t fn, void *argh)
extern SDIOH_API_RC sdioh_interrupt_deregister(sdioh_info_t *sd)
extern SDIOH_API_RC sdioh_interrupt_query(sdioh_info_t *sd, bool *onoff)
#if defined(DHD_DEBUG)
extern bool sdioh_interrupt_pending(sdioh_info_t *sd)
uint sdioh_query_iofnum(sdioh_info_t *sd)
enum ;
const bcm_iovar_t sdioh_iovars[] = ;
int
sdioh_iovar_op(sdioh_info_t *si, const char *name,
void *params, int plen, void *arg, int len, bool set)
#if defined(OOB_INTR_ONLY) && defined(HW_OOB)
SDIOH_API_RC sdioh_enable_hw_oob_intr(sdioh_info_t *sd, bool enable)
extern SDIOH_API_RC
sdioh_cfg_read(sdioh_info_t *sd, uint fnc_num, u32 addr, u8 *data)
extern SDIOH_API_RC
sdioh_cfg_write(sdioh_info_t *sd, uint fnc_num, u32 addr, u8 *data)
static int sdioh_sdmmc_get_cisaddr(sdioh_info_t *sd, u32 regaddr)
extern SDIOH_API_RC
sdioh_cis_read(sdioh_info_t *sd, uint func, u8 *cisd, u32 length)
extern SDIOH_API_RC
sdioh_request_byte(sdioh_info_t *sd, uint rw, uint func, uint regaddr,
u8 *byte)
extern SDIOH_API_RC
sdioh_request_word(sdioh_info_t *sd, uint cmd_type, uint rw, uint func,
uint addr, u32 *word, uint nbytes)
static SDIOH_API_RC
sdioh_request_packet(sdioh_info_t *sd, uint fix_inc, uint write, uint func,
uint addr, struct sk_buff *pkt)
extern SDIOH_API_RC
sdioh_request_buffer(sdioh_info_t *sd, uint pio_dma, uint fix_inc, uint write,
uint func, uint addr, uint reg_width, uint buflen_u,
u8 *buffer, struct sk_buff *pkt)
extern int sdioh_abort(sdioh_info_t *sd, uint func)
int sdioh_sdio_reset(sdioh_info_t *si)
void sdioh_sdmmc_devintr_off(sdioh_info_t *sd)
void sdioh_sdmmc_devintr_on(sdioh_info_t *sd)
int
sdioh_sdmmc_card_regread(sdioh_info_t *sd, int func, u32 regaddr,
int regsize, u32 *data)
#if !defined(OOB_INTR_ONLY)
static void IRQHandler(struct sdio_func *func)
static void IRQHandlerF2(struct sdio_func *func)
static int
sdioh_sdmmc_card_regwrite(sdioh_info_t *sd, int func, u32 regaddr,
int regsize, u32 data)
int sdioh_start(sdioh_info_t *si, int stage)
int sdioh_stop(sdioh_info_t *si)
