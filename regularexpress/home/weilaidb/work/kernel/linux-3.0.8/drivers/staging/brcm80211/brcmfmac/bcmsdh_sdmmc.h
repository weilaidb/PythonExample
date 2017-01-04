#define __BCMSDH_SDMMC_H__
#define sd_err(x)	\
do  while (0)
#define sd_trace(x)	\
do  while (0)
#define sd_info(x)	\
do  while (0)
#define sd_debug(x)	\
do  while (0)
#define sd_data(x)	\
do  while (0)
#define sd_ctrl(x)	\
do  while (0)
#define sd_err(x)
#define sd_trace(x)
#define sd_info(x)
#define sd_debug(x)
#define sd_data(x)
#define sd_ctrl(x)
extern int sdioh_sdmmc_osinit(sdioh_info_t *sd);
extern void sdioh_sdmmc_osfree(sdioh_info_t *sd);
#define BLOCK_SIZE_64 64
#define BLOCK_SIZE_512 512
#define BLOCK_SIZE_4318 64
#define BLOCK_SIZE_4328 512
#define SUCCESS	0
#define ERROR	1
#define SDIOH_MODE_SD4		2
#define CLIENT_INTR 		0x100
struct sdioh_info {
struct osl_info *osh;
bool client_intr_enabled;
bool intr_handler_valid;
sdioh_cb_fn_t intr_handler;
void *intr_handler_arg;
u16 intmask;
void *sdos_info;
uint irq;
int intrcount;
bool sd_use_dma;
bool sd_blockmode;
bool use_client_ints;
int sd_mode;
int client_block_size[SDIOD_MAX_IOFUNCS];
u8 num_funcs;
u32 com_cis_ptr;
u32 func_cis_ptr[SDIOD_MAX_IOFUNCS];
uint max_dma_len;
uint max_dma_descriptors;
extern uint sd_msglevel;
extern bool check_client_intr(sdioh_info_t *sd);
extern void sdioh_sdmmc_devintr_on(sdioh_info_t *sd);
extern void sdioh_sdmmc_devintr_off(sdioh_info_t *sd);
extern u32 *sdioh_sdmmc_reg_map(s32 addr, int size);
extern void sdioh_sdmmc_reg_unmap(s32 addr, int size);
extern int sdioh_sdmmc_register_irq(sdioh_info_t *sd, uint irq);
extern void sdioh_sdmmc_free_irq(uint irq, sdioh_info_t *sd);
typedef struct _BCMSDH_SDMMC_INSTANCE  BCMSDH_SDMMC_INSTANCE, *PBCMSDH_SDMMC_INSTANCE;
