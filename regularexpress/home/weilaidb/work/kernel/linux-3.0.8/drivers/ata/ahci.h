#define _AHCI_H
#define EM_CTRL_MSG_TYPE              0x000f0000
#define EM_MSG_LED_HBA_PORT           0x0000000f
#define EM_MSG_LED_PMP_SLOT           0x0000ff00
#define EM_MSG_LED_VALUE              0xffff0000
#define EM_MSG_LED_VALUE_ACTIVITY     0x00070000
#define EM_MSG_LED_VALUE_OFF          0xfff80000
#define EM_MSG_LED_VALUE_ON           0x00010000
enum ;
struct ahci_cmd_hdr ;
struct ahci_sg ;
struct ahci_em_priv ;
struct ahci_port_priv ;
struct ahci_host_priv ;
extern int ahci_ignore_sss;
extern struct device_attribute *ahci_shost_attrs[];
extern struct device_attribute *ahci_sdev_attrs[];
#define AHCI_SHT(drv_name)						\
ATA_NCQ_SHT(drv_name),						\
.can_queue		= AHCI_MAX_CMDS - 1,			\
.sg_tablesize		= AHCI_MAX_SG,				\
.dma_boundary		= AHCI_DMA_BOUNDARY,			\
.shost_attrs		= ahci_shost_attrs,			\
.sdev_attrs		= ahci_sdev_attrs
extern struct ata_port_operations ahci_ops;
void ahci_fill_cmd_slot(struct ahci_port_priv *pp, unsigned int tag,
u32 opts);
void ahci_save_initial_config(struct device *dev,
struct ahci_host_priv *hpriv,
unsigned int force_port_map,
unsigned int mask_port_map);
void ahci_init_controller(struct ata_host *host);
int ahci_reset_controller(struct ata_host *host);
int ahci_do_softreset(struct ata_link *link, unsigned int *class,
int pmp, unsigned long deadline,
int (*check_ready)(struct ata_link *link));
int ahci_stop_engine(struct ata_port *ap);
void ahci_start_engine(struct ata_port *ap);
int ahci_check_ready(struct ata_link *link);
int ahci_kick_engine(struct ata_port *ap);
int ahci_port_resume(struct ata_port *ap);
void ahci_set_em_messages(struct ahci_host_priv *hpriv,
struct ata_port_info *pi);
int ahci_reset_em(struct ata_host *host);
irqreturn_t ahci_interrupt(int irq, void *dev_instance);
void ahci_print_info(struct ata_host *host, const char *scc_s);
static inline void __iomem *__ahci_port_base(struct ata_host *host,
unsigned int port_no)
static inline void __iomem *ahci_port_base(struct ata_port *ap)
static inline int ahci_nr_ports(u32 cap)
