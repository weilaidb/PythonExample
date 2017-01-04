#define maintainer_string "Giuliano Procida at Madge Networks <gprocida@madge.com>"
#define description_string "Madge ATM Horizon [Ultra] driver"
#define version_string "1.2.1"
static inline void __init show_version (void)
static void do_housekeeping (unsigned long arg);
static unsigned short debug = 0;
static unsigned short vpi_bits = 0;
static int max_tx_size = 9000;
static int max_rx_size = 9000;
static unsigned char pci_lat = 0;
static inline void wr_regl (const hrz_dev * dev, unsigned char reg, u32 data)
static inline u32 rd_regl (const hrz_dev * dev, unsigned char reg)
static inline void wr_regw (const hrz_dev * dev, unsigned char reg, u16 data)
static inline u16 rd_regw (const hrz_dev * dev, unsigned char reg)
static inline void wrs_regb (const hrz_dev * dev, unsigned char reg, void * addr, u32 len)
static inline void rds_regb (const hrz_dev * dev, unsigned char reg, void * addr, u32 len)
static inline void wr_mem (const hrz_dev * dev, HDW * addr, u32 data)
static inline u32 rd_mem (const hrz_dev * dev, HDW * addr)
static inline void wr_framer (const hrz_dev * dev, u32 addr, u32 data)
static inline u32 rd_framer (const hrz_dev * dev, u32 addr)
static inline void FLUSH_RX_CHANNEL (hrz_dev * dev, u16 channel)
static void WAIT_FLUSH_RX_COMPLETE (hrz_dev * dev)
static inline void SELECT_RX_CHANNEL (hrz_dev * dev, u16 channel)
static void WAIT_UPDATE_COMPLETE (hrz_dev * dev)
static inline void SELECT_TX_CHANNEL (hrz_dev * dev, u16 tx_channel)
static inline void update_tx_channel_config (hrz_dev * dev, short chan, u8 mode, u16 value)
static inline u16 query_tx_channel_config (hrz_dev * dev, short chan, u8 mode)
static inline void dump_skb (char * prefix, unsigned int vc, struct sk_buff * skb)
static inline void dump_regs (hrz_dev * dev)
static inline void dump_framer (hrz_dev * dev)
static inline int channel_to_vpivci (const u16 channel, short * vpi, int * vci)
static inline int vpivci_to_channel (u16 * channel, const short vpi, const int vci)
static inline u16 rx_q_entry_to_length (u32 x)
static inline u16 rx_q_entry_to_rx_channel (u32 x)
#define BR_UKN 1031250l
#define BR_HRZ 4000000l
#define BR_ULT 5000000l
#define CR_MIND 0
#define CR_MAXD 14
#define CR_MAXPEXP 4
static int make_rate (const hrz_dev * dev, u32 c, rounding r,
u16 * bits, unsigned int * actual)
static int make_rate_with_tolerance (const hrz_dev * dev, u32 c, rounding r, unsigned int tol,
u16 * bit_pattern, unsigned int * actual)
static int hrz_open_rx (hrz_dev * dev, u16 channel)
static void hrz_kfree_skb (struct sk_buff * skb)
static void hrz_close_rx (hrz_dev * dev, u16 vc)
static void rx_schedule (hrz_dev * dev, int irq)
static void rx_bus_master_complete_handler (hrz_dev * dev)
static int tx_hold (hrz_dev * dev)
static inline void tx_release (hrz_dev * dev)
static void tx_schedule (hrz_dev * const dev, int irq)
static void tx_bus_master_complete_handler (hrz_dev * dev)
static u32 rx_queue_entry_next (hrz_dev * dev)
static inline void rx_disabled_handler (hrz_dev * dev)
static void rx_data_av_handler (hrz_dev * dev)
static irqreturn_t interrupt_handler(int irq, void *dev_id)
static void do_housekeeping (unsigned long arg)
static short setup_idle_tx_channel (hrz_dev * dev, hrz_vcc * vcc)
static int hrz_send (struct atm_vcc * atm_vcc, struct sk_buff * skb)
static void hrz_reset (const hrz_dev * dev)
static void WRITE_IT_WAIT (const hrz_dev *dev, u32 ctrl)
static void CLOCK_IT (const hrz_dev *dev, u32 ctrl)
static u16 __devinit read_bia (const hrz_dev * dev, u16 addr)
static int __devinit hrz_init (hrz_dev * dev)
static int check_max_sdu (hrz_aal aal, struct atm_trafprm * tp, unsigned int max_frame_size)
static int atm_pcr_check (struct atm_trafprm * tp, unsigned int pcr)
static int hrz_open (struct atm_vcc *atm_vcc)
static void hrz_close (struct atm_vcc * atm_vcc)
static int hrz_proc_read (struct atm_dev * atm_dev, loff_t * pos, char * page)
static const struct atmdev_ops hrz_ops = ;
static int __devinit hrz_probe(struct pci_dev *pci_dev, const struct pci_device_id *pci_ent)
static void __devexit hrz_remove_one(struct pci_dev *pci_dev)
static void __init hrz_check_args (void)
MODULE_AUTHOR(maintainer_string);
MODULE_DESCRIPTION(description_string);
MODULE_LICENSE("GPL");
module_param(debug, ushort, 0644);
module_param(vpi_bits, ushort, 0);
module_param(max_tx_size, int, 0);
module_param(max_rx_size, int, 0);
module_param(pci_lat, byte, 0);
MODULE_PARM_DESC(debug, "debug bitmap, see .h file");
MODULE_PARM_DESC(vpi_bits, "number of bits (0..4) to allocate to VPIs");
MODULE_PARM_DESC(max_tx_size, "maximum size of TX AAL5 frames");
MODULE_PARM_DESC(max_rx_size, "maximum size of RX AAL5 frames");
MODULE_PARM_DESC(pci_lat, "PCI latency in bus cycles");
static struct pci_device_id hrz_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, hrz_pci_tbl);
static struct pci_driver hrz_driver = ;
static int __init hrz_module_init (void)
static void __exit hrz_module_exit (void)
module_init(hrz_module_init);
module_exit(hrz_module_exit);
