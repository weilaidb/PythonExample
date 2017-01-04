#define INTERN_H
#define JOBR_UNASSIGNED 0
#define JOBR_ASSIGNED 1
#define JOBR_DEPTH (1 << CONFIG_CRYPTO_DEV_FSL_CAAM_RINGSIZE)
#define JOBR_INTC JRCFG_ICEN
#define JOBR_INTC_TIME_THLD CONFIG_CRYPTO_DEV_FSL_CAAM_INTC_TIME_THLD
#define JOBR_INTC_COUNT_THLD CONFIG_CRYPTO_DEV_FSL_CAAM_INTC_COUNT_THLD
#define JOBR_INTC 0
#define JOBR_INTC_TIME_THLD 0
#define JOBR_INTC_COUNT_THLD 0
struct caam_jrentry_info ;
struct caam_drv_private_jr ;
struct caam_drv_private ;
void caam_jr_algapi_init(struct device *dev);
void caam_jr_algapi_remove(struct device *dev);
