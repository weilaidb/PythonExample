#define __NET_TULIP_H__
#define TULIP_DEBUG 1
#define TULIP_BAR	1
#define TULIP_BAR	0
struct tulip_chip_table ;
enum tbl_flag ;
enum chips ;
enum MediaIs ;
enum tulip_offsets ;
enum pci_cfg_driver_reg ;
#define RxPollInt (RxIntr|RxNoBuf|RxDied|RxJabber)
enum status_bits ;
#define CSR5_TS	0x00700000
#define CSR5_RS	0x000e0000
enum tulip_mode_bits ;
enum tulip_busconfig_bits ;
struct tulip_rx_desc ;
struct tulip_tx_desc ;
enum desc_status_bits ;
enum t21143_csr6_bits ;
enum tulip_comet_csr13_bits ;
enum tulip_comet_csr18_bits ;
enum tulip_comet_csr20_bits ;
#define TX_RING_SIZE	32
#define RX_RING_SIZE	128
#define MEDIA_MASK     31
#define PKT_BUF_SZ	(1536 + 4)
#define TULIP_MIN_CACHE_LINE	8
#if defined(__sparc__) || defined(__hppa__)
#define TULIP_MAX_CACHE_LINE	16
#define TULIP_MAX_CACHE_LINE	32
#define DESC_RING_WRAP 0x02000000
#define EEPROM_SIZE 512
#define RUN_AT(x) (jiffies + (x))
#define get_u16(ptr) get_unaligned_le16((ptr))
struct medialeaf ;
struct mediatable ;
struct mediainfo ;
struct ring_info ;
struct tulip_private ;
struct eeprom_fixup ;
extern u16 t21142_csr14[];
void t21142_media_task(struct work_struct *work);
void t21142_start_nway(struct net_device *dev);
void t21142_lnk_change(struct net_device *dev, int csr5);
void pnic2_lnk_change(struct net_device *dev, int csr5);
void pnic2_timer(unsigned long data);
void pnic2_start_nway(struct net_device *dev);
void pnic2_lnk_change(struct net_device *dev, int csr5);
void tulip_parse_eeprom(struct net_device *dev);
int tulip_read_eeprom(struct net_device *dev, int location, int addr_len);
extern unsigned int tulip_max_interrupt_work;
extern int tulip_rx_copybreak;
irqreturn_t tulip_interrupt(int irq, void *dev_instance);
int tulip_refill_rx(struct net_device *dev);
int tulip_poll(struct napi_struct *napi, int budget);
int tulip_mdio_read(struct net_device *dev, int phy_id, int location);
void tulip_mdio_write(struct net_device *dev, int phy_id, int location, int value);
void tulip_select_media(struct net_device *dev, int startup);
int tulip_check_duplex(struct net_device *dev);
void tulip_find_mii (struct net_device *dev, int board_idx);
void pnic_do_nway(struct net_device *dev);
void pnic_lnk_change(struct net_device *dev, int csr5);
void pnic_timer(unsigned long data);
void tulip_media_task(struct work_struct *work);
void mxic_timer(unsigned long data);
void comet_timer(unsigned long data);
extern int tulip_debug;
extern const char * const medianame[];
extern const char tulip_media_cap[];
extern struct tulip_chip_table tulip_tbl[];
void oom_timer(unsigned long data);
extern u8 t21040_csr13[];
static inline void tulip_start_rxtx(struct tulip_private *tp)
static inline void tulip_stop_rxtx(struct tulip_private *tp)
static inline void tulip_restart_rxtx(struct tulip_private *tp)
static inline void tulip_tx_timeout_complete(struct tulip_private *tp, void __iomem *ioaddr)
