#define _AIC94XX_H_
#define ASD_DRIVER_NAME		"aic94xx"
#define ASD_DRIVER_DESCRIPTION	"Adaptec aic94xx SAS/SATA driver"
#define asd_printk(fmt, ...)	printk(KERN_NOTICE ASD_DRIVER_NAME ": " fmt, ## __VA_ARGS__)
#define ENTER  printk(KERN_NOTICE "%s: ENTER %s\n", ASD_DRIVER_NAME, \
__func__)
#define EXIT   printk(KERN_NOTICE "%s: --EXIT %s\n", ASD_DRIVER_NAME, \
__func__)
#define ENTER
#define EXIT
#define ASD_DPRINTK asd_printk
#define ASD_DPRINTK(fmt, ...)
#define AIC94XX_SCB_TIMEOUT  (5*HZ)
extern struct kmem_cache *asd_dma_token_cache;
extern struct kmem_cache *asd_ascb_cache;
static inline void asd_stringify_sas_addr(char *p, const u8 *sas_addr)
struct asd_ha_struct;
struct asd_ascb;
int  asd_read_ocm(struct asd_ha_struct *asd_ha);
int  asd_read_flash(struct asd_ha_struct *asd_ha);
int  asd_dev_found(struct domain_device *dev);
void asd_dev_gone(struct domain_device *dev);
void asd_invalidate_edb(struct asd_ascb *ascb, int edb_id);
int  asd_execute_task(struct sas_task *, int num, gfp_t gfp_flags);
int  asd_abort_task(struct sas_task *);
int  asd_abort_task_set(struct domain_device *, u8 *lun);
int  asd_clear_aca(struct domain_device *, u8 *lun);
int  asd_clear_task_set(struct domain_device *, u8 *lun);
int  asd_lu_reset(struct domain_device *, u8 *lun);
int  asd_I_T_nexus_reset(struct domain_device *dev);
int  asd_query_task(struct sas_task *);
int  asd_clear_nexus_port(struct asd_sas_port *port);
int  asd_clear_nexus_ha(struct sas_ha_struct *sas_ha);
int  asd_control_phy(struct asd_sas_phy *phy, enum phy_func func, void *arg);
