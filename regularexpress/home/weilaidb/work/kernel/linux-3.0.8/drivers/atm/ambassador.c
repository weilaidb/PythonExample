#define maintainer_string "Giuliano Procida at Madge Networks <gprocida@madge.com>"
#define description_string "Madge ATM Ambassador driver"
#define version_string "1.2.4"
static inline void __init show_version (void)
static void do_housekeeping (unsigned long arg);
static unsigned short debug = 0;
static unsigned int cmds = 8;
static unsigned int txs = 32;
static unsigned int rxs[NUM_RX_POOLS] = ;
static unsigned int rxs_bs[NUM_RX_POOLS] = ;
static unsigned int rx_lats = 7;
static unsigned char pci_lat = 0;
static const unsigned long onegigmask = -1 << 30;
static inline void wr_plain (const amb_dev * dev, size_t addr, u32 data)
static inline u32 rd_plain (const amb_dev * dev, size_t addr)
static inline void wr_mem (const amb_dev * dev, size_t addr, u32 data)
static inline u32 rd_mem (const amb_dev * dev, size_t addr)
static inline void dump_registers (const amb_dev * dev)
static inline void dump_loader_block (volatile loader_block * lb)
static inline void dump_command (command * cmd)
static inline void dump_skb (char * prefix, unsigned int vc, struct sk_buff * skb)
static int check_area (void * start, size_t length)
static void amb_kfree_skb (struct sk_buff * skb)
static void tx_complete (amb_dev * dev, tx_out * tx)
static void rx_complete (amb_dev * dev, rx_out * rx)
static int command_do (amb_dev * dev, command * cmd)
static int tx_give (amb_dev * dev, tx_in * tx)
static int tx_take (amb_dev * dev)
static int rx_give (amb_dev * dev, rx_in * rx, unsigned char pool)
static int rx_take (amb_dev * dev, unsigned char pool)
static void drain_rx_pool (amb_dev * dev, unsigned char pool)
static void drain_rx_pools (amb_dev * dev)
static void fill_rx_pool (amb_dev * dev, unsigned char pool,
gfp_t priority)
static void fill_rx_pools (amb_dev * dev)
static void interrupts_on (amb_dev * dev)
static void interrupts_off (amb_dev * dev)
static irqreturn_t interrupt_handler(int irq, void *dev_id)
static int make_rate (unsigned int rate, rounding r,
u16 * bits, unsigned int * actual)
static int amb_open (struct atm_vcc * atm_vcc)
static void amb_close (struct atm_vcc * atm_vcc)
static int amb_send (struct atm_vcc * atm_vcc, struct sk_buff * skb)
static int amb_proc_read (struct atm_dev * atm_dev, loff_t * pos, char * page)
static const struct atmdev_ops amb_ops = ;
static void do_housekeeping (unsigned long arg)
static int __devinit create_queues (amb_dev * dev, unsigned int cmds,
unsigned int txs, unsigned int * rxs,
unsigned int * rx_buffer_sizes)
static void destroy_queues (amb_dev * dev)
static unsigned int command_timeouts [] = ;
static unsigned int command_successes [] = ;
static  int decode_loader_result (loader_command cmd, u32 result)
static int __devinit do_loader_command (volatile loader_block * lb,
const amb_dev * dev, loader_command cmd)
static int __devinit get_loader_version (loader_block * lb,
const amb_dev * dev, u32 * version)
static int __devinit loader_write (loader_block* lb,
const amb_dev *dev,
const struct ihex_binrec *rec)
static int __devinit loader_verify (loader_block * lb,
const amb_dev *dev,
const struct ihex_binrec *rec)
static int __devinit loader_start (loader_block * lb,
const amb_dev * dev, u32 address)
static inline void sf (const char * msg)
static int amb_reset (amb_dev * dev, int diags)
static int __devinit ucode_init (loader_block * lb, amb_dev * dev)
static inline __be32 bus_addr(void * addr)
static int __devinit amb_talk (amb_dev * dev)
static void __devinit amb_ucode_version (amb_dev * dev)
static void __devinit amb_esi (amb_dev * dev, u8 * esi)
static void fixup_plx_window (amb_dev *dev, loader_block *lb)
static int __devinit amb_init (amb_dev * dev)
static void setup_dev(amb_dev *dev, struct pci_dev *pci_dev)
static void setup_pci_dev(struct pci_dev *pci_dev)
static int __devinit amb_probe(struct pci_dev *pci_dev, const struct pci_device_id *pci_ent)
static void __devexit amb_remove_one(struct pci_dev *pci_dev)
static void __init amb_check_args (void)
MODULE_AUTHOR(maintainer_string);
MODULE_DESCRIPTION(description_string);
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("atmsar11.fw");
module_param(debug,   ushort, 0644);
module_param(cmds,    uint, 0);
module_param(txs,     uint, 0);
module_param_array(rxs,     uint, NULL, 0);
module_param_array(rxs_bs,  uint, NULL, 0);
module_param(rx_lats, uint, 0);
module_param(pci_lat, byte, 0);
MODULE_PARM_DESC(debug,   "debug bitmap, see .h file");
MODULE_PARM_DESC(cmds,    "number of command queue entries");
MODULE_PARM_DESC(txs,     "number of TX queue entries");
MODULE_PARM_DESC(rxs,     "number of RX queue entries [" __MODULE_STRING(NUM_RX_POOLS) "]");
MODULE_PARM_DESC(rxs_bs,  "size of RX buffers [" __MODULE_STRING(NUM_RX_POOLS) "]");
MODULE_PARM_DESC(rx_lats, "number of extra buffers to cope with RX latencies");
MODULE_PARM_DESC(pci_lat, "PCI latency in bus cycles");
static struct pci_device_id amb_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, amb_pci_tbl);
static struct pci_driver amb_driver = ;
static int __init amb_module_init (void)
static void __exit amb_module_exit (void)
module_init(amb_module_init);
module_exit(amb_module_exit);
