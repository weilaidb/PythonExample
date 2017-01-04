static unsigned int vpibits = 1;
#define ATM_IDT77252_SEND_IDLE 1
#define DEBUG_MODULE 1
#undef HAVE_EEPROM
static unsigned long debug = DBG_GENERAL;
#define SAR_RX_DELAY	(SAR_CFG_RXINT_NODELAY)
static struct scq_info *alloc_scq(struct idt77252_dev *, int);
static void free_scq(struct idt77252_dev *, struct scq_info *);
static int queue_skb(struct idt77252_dev *, struct vc_map *,
struct sk_buff *, int oam);
static void drain_scq(struct idt77252_dev *, struct vc_map *);
static unsigned long get_free_scd(struct idt77252_dev *, struct vc_map *);
static void fill_scd(struct idt77252_dev *, struct scq_info *, int);
static int push_rx_skb(struct idt77252_dev *,
struct sk_buff *, int queue);
static void recycle_rx_skb(struct idt77252_dev *, struct sk_buff *);
static void flush_rx_pool(struct idt77252_dev *, struct rx_pool *);
static void recycle_rx_pool_skb(struct idt77252_dev *,
struct rx_pool *);
static void add_rx_skb(struct idt77252_dev *, int queue,
unsigned int size, unsigned int count);
static int init_rsq(struct idt77252_dev *);
static void deinit_rsq(struct idt77252_dev *);
static void idt77252_rx(struct idt77252_dev *);
static int init_tsq(struct idt77252_dev *);
static void deinit_tsq(struct idt77252_dev *);
static void idt77252_tx(struct idt77252_dev *);
static void idt77252_dev_close(struct atm_dev *dev);
static int idt77252_open(struct atm_vcc *vcc);
static void idt77252_close(struct atm_vcc *vcc);
static int idt77252_send(struct atm_vcc *vcc, struct sk_buff *skb);
static int idt77252_send_oam(struct atm_vcc *vcc, void *cell,
int flags);
static void idt77252_phy_put(struct atm_dev *dev, unsigned char value,
unsigned long addr);
static unsigned char idt77252_phy_get(struct atm_dev *dev, unsigned long addr);
static int idt77252_change_qos(struct atm_vcc *vcc, struct atm_qos *qos,
int flags);
static int idt77252_proc_read(struct atm_dev *dev, loff_t * pos,
char *page);
static void idt77252_softint(struct work_struct *work);
static struct atmdev_ops idt77252_ops =
;
static struct idt77252_dev *idt77252_chain = NULL;
static unsigned int idt77252_sram_write_errors = 0;
static void
waitfor_idle(struct idt77252_dev *card)
static u32
read_sram(struct idt77252_dev *card, unsigned long addr)
static void
write_sram(struct idt77252_dev *card, unsigned long addr, u32 value)
static u8
read_utility(void *dev, unsigned long ubus_addr)
static void
write_utility(void *dev, unsigned long ubus_addr, u8 value)
static u32 rdsrtab[] =
;
static u32 wrentab[] =
;
static u32 rdtab[] =
;
static u32 wrtab[] =
;
static u32 clktab[] =
;
static u32
idt77252_read_gp(struct idt77252_dev *card)
static void
idt77252_write_gp(struct idt77252_dev *card, u32 value)
static u8
idt77252_eeprom_read_status(struct idt77252_dev *card)
static u8
idt77252_eeprom_read_byte(struct idt77252_dev *card, u8 offset)
static void
idt77252_eeprom_write_byte(struct idt77252_dev *card, u8 offset, u8 data)
static void
idt77252_eeprom_init(struct idt77252_dev *card)
static void
dump_tct(struct idt77252_dev *card, int index)
static void
idt77252_tx_dump(struct idt77252_dev *card)
static int
sb_pool_add(struct idt77252_dev *card, struct sk_buff *skb, int queue)
static void
sb_pool_remove(struct idt77252_dev *card, struct sk_buff *skb)
static struct sk_buff *
sb_pool_skb(struct idt77252_dev *card, u32 handle)
static struct scq_info *
alloc_scq(struct idt77252_dev *card, int class)
static void
free_scq(struct idt77252_dev *card, struct scq_info *scq)
static int
push_on_scq(struct idt77252_dev *card, struct vc_map *vc, struct sk_buff *skb)
static void
drain_scq(struct idt77252_dev *card, struct vc_map *vc)
static int
queue_skb(struct idt77252_dev *card, struct vc_map *vc,
struct sk_buff *skb, int oam)
static unsigned long
get_free_scd(struct idt77252_dev *card, struct vc_map *vc)
static void
fill_scd(struct idt77252_dev *card, struct scq_info *scq, int class)
static void
clear_scd(struct idt77252_dev *card, struct scq_info *scq, int class)
static int
init_rsq(struct idt77252_dev *card)
static void
deinit_rsq(struct idt77252_dev *card)
static void
dequeue_rx(struct idt77252_dev *card, struct rsq_entry *rsqe)
static void
idt77252_rx(struct idt77252_dev *card)
static void
idt77252_rx_raw(struct idt77252_dev *card)
static int
init_tsq(struct idt77252_dev *card)
static void
deinit_tsq(struct idt77252_dev *card)
static void
idt77252_tx(struct idt77252_dev *card)
static void
tst_timer(unsigned long data)
static int
__fill_tst(struct idt77252_dev *card, struct vc_map *vc,
int n, unsigned int opc)
static int
fill_tst(struct idt77252_dev *card, struct vc_map *vc, int n, unsigned int opc)
static int
__clear_tst(struct idt77252_dev *card, struct vc_map *vc)
static int
clear_tst(struct idt77252_dev *card, struct vc_map *vc)
static int
change_tst(struct idt77252_dev *card, struct vc_map *vc,
int n, unsigned int opc)
static int
set_tct(struct idt77252_dev *card, struct vc_map *vc)
static __inline__ int
idt77252_fbq_level(struct idt77252_dev *card, int queue)
static __inline__ int
idt77252_fbq_full(struct idt77252_dev *card, int queue)
static int
push_rx_skb(struct idt77252_dev *card, struct sk_buff *skb, int queue)
static void
add_rx_skb(struct idt77252_dev *card, int queue,
unsigned int size, unsigned int count)
static void
recycle_rx_skb(struct idt77252_dev *card, struct sk_buff *skb)
static void
flush_rx_pool(struct idt77252_dev *card, struct rx_pool *rpp)
static void
recycle_rx_pool_skb(struct idt77252_dev *card, struct rx_pool *rpp)
static void
idt77252_phy_put(struct atm_dev *dev, unsigned char value, unsigned long addr)
static unsigned char
idt77252_phy_get(struct atm_dev *dev, unsigned long addr)
static inline int
idt77252_send_skb(struct atm_vcc *vcc, struct sk_buff *skb, int oam)
static int idt77252_send(struct atm_vcc *vcc, struct sk_buff *skb)
static int
idt77252_send_oam(struct atm_vcc *vcc, void *cell, int flags)
static __inline__ unsigned int
idt77252_fls(unsigned int x)
static u16
idt77252_int_to_atmfp(unsigned int rate)
static u8
idt77252_rate_logindex(struct idt77252_dev *card, int pcr)
static void
idt77252_est_timer(unsigned long data)
static struct rate_estimator *
idt77252_init_est(struct vc_map *vc, int pcr)
static int
idt77252_init_cbr(struct idt77252_dev *card, struct vc_map *vc,
struct atm_vcc *vcc, struct atm_qos *qos)
static int
idt77252_init_ubr(struct idt77252_dev *card, struct vc_map *vc,
struct atm_vcc *vcc, struct atm_qos *qos)
static int
idt77252_init_tx(struct idt77252_dev *card, struct vc_map *vc,
struct atm_vcc *vcc, struct atm_qos *qos)
static int
idt77252_init_rx(struct idt77252_dev *card, struct vc_map *vc,
struct atm_vcc *vcc, struct atm_qos *qos)
static int
idt77252_open(struct atm_vcc *vcc)
static void
idt77252_close(struct atm_vcc *vcc)
static int
idt77252_change_qos(struct atm_vcc *vcc, struct atm_qos *qos, int flags)
static int
idt77252_proc_read(struct atm_dev *dev, loff_t * pos, char *page)
static void
idt77252_collect_stat(struct idt77252_dev *card)
static irqreturn_t
idt77252_interrupt(int irq, void *dev_id)
static void
idt77252_softint(struct work_struct *work)
static int
open_card_oam(struct idt77252_dev *card)
static void
close_card_oam(struct idt77252_dev *card)
static int
open_card_ubr0(struct idt77252_dev *card)
static int
idt77252_dev_open(struct idt77252_dev *card)
static void idt77252_dev_close(struct atm_dev *dev)
static void
deinit_card(struct idt77252_dev *card)
static void __devinit
init_sram(struct idt77252_dev *card)
static int __devinit
init_card(struct atm_dev *dev)
static int __devinit
idt77252_preset(struct idt77252_dev *card)
static unsigned long __devinit
probe_sram(struct idt77252_dev *card)
static int __devinit
idt77252_init_one(struct pci_dev *pcidev, const struct pci_device_id *id)
static struct pci_device_id idt77252_pci_tbl[] =
;
MODULE_DEVICE_TABLE(pci, idt77252_pci_tbl);
static struct pci_driver idt77252_driver = ;
static int __init idt77252_init(void)
static void __exit idt77252_exit(void)
module_init(idt77252_init);
module_exit(idt77252_exit);
MODULE_LICENSE("GPL");
module_param(vpibits, uint, 0);
MODULE_PARM_DESC(vpibits, "number of VPI bits supported (0, 1, or 2)");
module_param(debug, ulong, 0644);
MODULE_PARM_DESC(debug,   "debug bitmap, see drivers/atm/idt77252.h");
MODULE_AUTHOR("Eddie C. Dost <ecd@atecom.com>");
MODULE_DESCRIPTION("IDT77252 ABR SAR Driver");
