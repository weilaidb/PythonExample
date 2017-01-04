#define NUM_VCI			(1024)
#define DEBUG
#undef DEBUG_RW
#define FULL_MEMORY_TEST
#define SERVICE_ENTRIES		(1024)
#define TX_FIFO_DEPTH		(7)
#define LANAI_POLL_PERIOD	(10*HZ)
#define AAL5_RX_MULTIPLIER	(3)
#define AAL5_TX_MULTIPLIER	(3)
#define AAL0_TX_MULTIPLIER	(40)
#define AAL0_RX_BUFFER_SIZE	(PAGE_SIZE)
#define DEV_LABEL "lanai"
#define DPRINTK(format, args...) \
printk(KERN_DEBUG DEV_LABEL ": " format, ##args)
#define APRINTK(truth, format, args...) \
do  while (0)
#define DPRINTK(format, args...)
#define APRINTK(truth, format, args...)
#define RWDEBUG(format, args...) \
printk(KERN_DEBUG DEV_LABEL ": " format, ##args)
#define RWDEBUG(format, args...)
#define LANAI_MAPPING_SIZE	(0x40000)
#define LANAI_EEPROM_SIZE	(128)
typedef int vci_t;
typedef void __iomem *bus_addr_t;
struct lanai_buffer ;
struct lanai_vcc_stats ;
struct lanai_dev;
struct lanai_vcc ;
enum lanai_type ;
struct lanai_dev_stats ;
struct lanai_dev ;
static void vci_bitfield_iterate(struct lanai_dev *lanai,
const unsigned long *lp,
void (*func)(struct lanai_dev *,vci_t vci))
#define LANAI_PAGE_SIZE   ((PAGE_SIZE >= 1024) ? PAGE_SIZE : 1024)
static void lanai_buf_allocate(struct lanai_buffer *buf,
size_t bytes, size_t minbytes, struct pci_dev *pci)
static inline size_t lanai_buf_size(const struct lanai_buffer *buf)
static void lanai_buf_deallocate(struct lanai_buffer *buf,
struct pci_dev *pci)
static int lanai_buf_size_cardorder(const struct lanai_buffer *buf)
enum lanai_register ;
static inline bus_addr_t reg_addr(const struct lanai_dev *lanai,
enum lanai_register reg)
static inline u32 reg_read(const struct lanai_dev *lanai,
enum lanai_register reg)
static inline void reg_write(const struct lanai_dev *lanai, u32 val,
enum lanai_register reg)
static inline void conf1_write(const struct lanai_dev *lanai)
static inline void conf2_write(const struct lanai_dev *lanai)
static inline void conf2_write_if_powerup(const struct lanai_dev *lanai)
static inline void reset_board(const struct lanai_dev *lanai)
#define SRAM_START (0x20000)
#define SRAM_BYTES (0x20000)
static inline bus_addr_t sram_addr(const struct lanai_dev *lanai, int offset)
static inline u32 sram_read(const struct lanai_dev *lanai, int offset)
static inline void sram_write(const struct lanai_dev *lanai,
u32 val, int offset)
static int __devinit sram_test_word(const struct lanai_dev *lanai,
int offset, u32 pattern)
static int __devinit sram_test_pass(const struct lanai_dev *lanai, u32 pattern)
static int __devinit sram_test_and_clear(const struct lanai_dev *lanai)
enum lanai_vcc_offset ;
#define CARDVCC_SIZE	(0x40)
static inline bus_addr_t cardvcc_addr(const struct lanai_dev *lanai,
vci_t vci)
static inline u32 cardvcc_read(const struct lanai_vcc *lvcc,
enum lanai_vcc_offset offset)
static inline void cardvcc_write(const struct lanai_vcc *lvcc,
u32 val, enum lanai_vcc_offset offset)
static inline int aal5_size(int size)
static inline int aal5_spacefor(int space)
static inline void lanai_free_skb(struct atm_vcc *atmvcc, struct sk_buff *skb)
static void host_vcc_start_rx(const struct lanai_vcc *lvcc)
static void host_vcc_start_tx(const struct lanai_vcc *lvcc)
static void lanai_shutdown_rx_vci(const struct lanai_vcc *lvcc)
static void lanai_shutdown_tx_vci(struct lanai_dev *lanai,
struct lanai_vcc *lvcc)
static inline int aal0_buffer_allocate(struct lanai_dev *lanai)
static inline void aal0_buffer_free(struct lanai_dev *lanai)
#define EEPROM_COPYRIGHT	(0)
#define EEPROM_COPYRIGHT_LEN	(44)
#define EEPROM_CHECKSUM		(62)
#define EEPROM_CHECKSUM_REV	(63)
#define EEPROM_MAC		(64)
#define EEPROM_MAC_REV		(70)
#define EEPROM_SERIAL		(112)
#define EEPROM_SERIAL_REV	(116)
#define EEPROM_MAGIC		(120)
#define EEPROM_MAGIC_REV	(124)
#define EEPROM_MAGIC_VALUE	(0x5AB478D2)
static int __devinit eeprom_read(struct lanai_dev *lanai)
static int __devinit eeprom_validate(struct lanai_dev *lanai)
static int __devinit eeprom_read(struct lanai_dev *lanai)
static inline u32 eeprom_be4(const struct lanai_dev *lanai, int address)
static int __devinit eeprom_validate(struct lanai_dev *lanai)
static inline const u8 *eeprom_mac(const struct lanai_dev *lanai)
#define INT_STATS	(0x00000002)
#define INT_SOOL	(0x00000004)
#define INT_LOCD	(0x00000008)
#define INT_LED		(0x00000010)
#define INT_GPIN	(0x00000020)
#define INT_PING	(0x00000040)
#define INT_WAKE	(0x00000080)
#define INT_CBR0	(0x00000100)
#define INT_LOCK	(0x00000200)
#define INT_MISMATCH	(0x00000400)
#define INT_AAL0_STR	(0x00000800)
#define INT_AAL0	(0x00001000)
#define INT_SERVICE	(0x00002000)
#define INT_TABORTSENT	(0x00004000)
#define INT_TABORTBM	(0x00008000)
#define INT_TIMEOUTBM	(0x00010000)
#define INT_PCIPARITY	(0x00020000)
#define INT_ALL		(0x0003FFFE)
#define INT_STATUS	(0x0000003C)
#define INT_DMASHUT	(0x00038000)
#define INT_SEGSHUT	(0x00000700)
static inline u32 intr_pending(const struct lanai_dev *lanai)
static inline void intr_enable(const struct lanai_dev *lanai, u32 i)
static inline void intr_disable(const struct lanai_dev *lanai, u32 i)
static void status_message(int itf, const char *name, int status)
static void lanai_check_status(struct lanai_dev *lanai)
static void pcistatus_got(int itf, const char *name)
static void pcistatus_check(struct lanai_dev *lanai, int clearonly)
static inline int vcc_tx_space(const struct lanai_vcc *lvcc, int endptr)
static inline int vcc_is_backlogged(const struct lanai_vcc *lvcc)
#define DESCRIPTOR_MAGIC	(0xD0000000)
#define DESCRIPTOR_AAL5		(0x00008000)
#define DESCRIPTOR_AAL5_STREAM	(0x00004000)
#define DESCRIPTOR_CLP		(0x00002000)
static inline void vcc_tx_add_aal5_descriptor(struct lanai_vcc *lvcc,
u32 flags, int len)
static inline void vcc_tx_add_aal5_trailer(struct lanai_vcc *lvcc,
int len, int cpi, int uu)
static inline void vcc_tx_memcpy(struct lanai_vcc *lvcc,
const unsigned char *src, int n)
static inline void vcc_tx_memzero(struct lanai_vcc *lvcc, int n)
static inline void lanai_endtx(struct lanai_dev *lanai,
const struct lanai_vcc *lvcc)
static void lanai_send_one_aal5(struct lanai_dev *lanai,
struct lanai_vcc *lvcc, struct sk_buff *skb, int pdusize)
static void vcc_tx_unqueue_aal5(struct lanai_dev *lanai,
struct lanai_vcc *lvcc, int endptr)
static void vcc_tx_aal5(struct lanai_dev *lanai, struct lanai_vcc *lvcc,
struct sk_buff *skb)
static void vcc_tx_unqueue_aal0(struct lanai_dev *lanai,
struct lanai_vcc *lvcc, int endptr)
static void vcc_tx_aal0(struct lanai_dev *lanai, struct lanai_vcc *lvcc,
struct sk_buff *skb)
static inline void vcc_rx_memcpy(unsigned char *dest,
const struct lanai_vcc *lvcc, int n)
static void vcc_rx_aal5(struct lanai_vcc *lvcc, int endptr)
static void vcc_rx_aal0(struct lanai_dev *lanai)
#if (NUM_VCI * BITS_PER_LONG) <= PAGE_SIZE
#define VCCTABLE_GETFREEPAGE
static int __devinit vcc_table_allocate(struct lanai_dev *lanai)
static inline void vcc_table_deallocate(const struct lanai_dev *lanai)
static inline struct lanai_vcc *new_lanai_vcc(void)
static int lanai_get_sized_buffer(struct lanai_dev *lanai,
struct lanai_buffer *buf, int max_sdu, int multiplier,
const char *name)
static inline int lanai_setup_rx_vci_aal5(struct lanai_dev *lanai,
struct lanai_vcc *lvcc, const struct atm_qos *qos)
static int lanai_setup_tx_vci(struct lanai_dev *lanai, struct lanai_vcc *lvcc,
const struct atm_qos *qos)
static inline void host_vcc_bind(struct lanai_dev *lanai,
struct lanai_vcc *lvcc, vci_t vci)
static inline void host_vcc_unbind(struct lanai_dev *lanai,
struct lanai_vcc *lvcc)
static void lanai_reset(struct lanai_dev *lanai)
static int __devinit service_buffer_allocate(struct lanai_dev *lanai)
static inline void service_buffer_deallocate(struct lanai_dev *lanai)
#define SERVICE_TX	(0x80000000)
#define SERVICE_TRASH	(0x40000000)
#define SERVICE_CRCERR	(0x20000000)
#define SERVICE_CI	(0x10000000)
#define SERVICE_CLP	(0x08000000)
#define SERVICE_STREAM	(0x04000000)
#define SERVICE_GET_VCI(x) (((x)>>16)&0x3FF)
#define SERVICE_GET_END(x) ((x)&0x1FFF)
static int handle_service(struct lanai_dev *lanai, u32 s)
static void iter_transmit(struct lanai_dev *lanai, vci_t vci)
static void run_service(struct lanai_dev *lanai)
static void get_statistics(struct lanai_dev *lanai)
static void iter_dequeue(struct lanai_dev *lanai, vci_t vci)
static void lanai_timed_poll(unsigned long arg)
static inline void lanai_timed_poll_start(struct lanai_dev *lanai)
static inline void lanai_timed_poll_stop(struct lanai_dev *lanai)
static inline void lanai_int_1(struct lanai_dev *lanai, u32 reason)
static irqreturn_t lanai_int(int irq, void *devid)
static int check_board_id_and_rev(const char *name, u32 val, int *revp)
static int __devinit lanai_pci_start(struct lanai_dev *lanai)
static inline int vci0_is_ok(struct lanai_dev *lanai,
const struct atm_qos *qos)
static int vci_is_ok(struct lanai_dev *lanai, vci_t vci,
const struct atm_vcc *atmvcc)
static int lanai_normalize_ci(struct lanai_dev *lanai,
const struct atm_vcc *atmvcc, short *vpip, vci_t *vcip)
#define CBRICG_FRAC_BITS	(4)
#define CBRICG_MAX		(2046 << CBRICG_FRAC_BITS)
static int pcr_to_cbricg(const struct atm_qos *qos)
static inline void lanai_cbr_setup(struct lanai_dev *lanai)
static inline void lanai_cbr_shutdown(struct lanai_dev *lanai)
static int __devinit lanai_dev_open(struct atm_dev *atmdev)
static void lanai_dev_close(struct atm_dev *atmdev)
static void lanai_close(struct atm_vcc *atmvcc)
static int lanai_open(struct atm_vcc *atmvcc)
static int lanai_send(struct atm_vcc *atmvcc, struct sk_buff *skb)
static int lanai_change_qos(struct atm_vcc *atmvcc, struct atm_qos *qos, int flags)
#define lanai_proc_read NULL
static int lanai_proc_read(struct atm_dev *atmdev, loff_t *pos, char *page)
static const struct atmdev_ops ops = ;
static int __devinit lanai_init_one(struct pci_dev *pci,
const struct pci_device_id *ident)
static struct pci_device_id lanai_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, lanai_pci_tbl);
static struct pci_driver lanai_driver = ;
static int __init lanai_module_init(void)
static void __exit lanai_module_exit(void)
module_init(lanai_module_init);
module_exit(lanai_module_exit);
MODULE_AUTHOR("Mitchell Blank Jr <mitch@sfgoth.com>");
MODULE_DESCRIPTION("Efficient Networks Speedstream 3010 driver");
MODULE_LICENSE("GPL");
