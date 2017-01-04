#if !defined(SDIO_VENDOR_ID_BROADCOM)
#define SDIO_VENDOR_ID_BROADCOM		0x02d0
#define SDIO_DEVICE_ID_BROADCOM_DEFAULT	0x0000
#if !defined(SDIO_DEVICE_ID_BROADCOM_4325_SDGWB)
#define SDIO_DEVICE_ID_BROADCOM_4325_SDGWB	0x0492
#if !defined(SDIO_DEVICE_ID_BROADCOM_4325)
#define SDIO_DEVICE_ID_BROADCOM_4325	0x0493
#if !defined(SDIO_DEVICE_ID_BROADCOM_4329)
#define SDIO_DEVICE_ID_BROADCOM_4329	0x4329
#if !defined(SDIO_DEVICE_ID_BROADCOM_4319)
#define SDIO_DEVICE_ID_BROADCOM_4319	0x4319
extern void sdioh_sdmmc_devintr_off(sdioh_info_t *sd);
extern void sdioh_sdmmc_devintr_on(sdioh_info_t *sd);
int sdio_function_init(void);
void sdio_function_cleanup(void);
static int clockoverride;
module_param(clockoverride, int, 0644);
MODULE_PARM_DESC(clockoverride, "SDIO card clock override");
PBCMSDH_SDMMC_INSTANCE gInstance;
#define BCMSDH_SDMMC_MAX_DEVICES 1
extern int bcmsdh_probe(struct device *dev);
extern int bcmsdh_remove(struct device *dev);
struct device sdmmc_dev;
static int bcmsdh_sdmmc_probe(struct sdio_func *func,
const struct sdio_device_id *id)
static void bcmsdh_sdmmc_remove(struct sdio_func *func)
static const struct sdio_device_id bcmsdh_sdmmc_ids[] = ;
MODULE_DEVICE_TABLE(sdio, bcmsdh_sdmmc_ids);
static struct sdio_driver bcmsdh_sdmmc_driver = ;
struct sdos_info ;
int sdioh_sdmmc_osinit(sdioh_info_t *sd)
void sdioh_sdmmc_osfree(sdioh_info_t *sd)
SDIOH_API_RC sdioh_interrupt_set(sdioh_info_t *sd, bool enable)
int sdio_function_init(void)
extern int bcmsdh_remove(struct device *dev);
void sdio_function_cleanup(void)
