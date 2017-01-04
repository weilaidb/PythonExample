static const char hfc4s8s_rev[] = "Revision: 1.10";
#define TRANS_FIFO_THRES 5
#define CLOCKMODE_0     0
#define CLOCKMODE_1     1
#define CHIP_ID_SHIFT   4
#define HFC_MAX_ST 8
#define MAX_D_FRAME_SIZE 270
#define MAX_B_FRAME_SIZE 1536
#define TRANS_TIMER_MODE (TRANS_FIFO_THRES & 0xf)
#define TRANS_FIFO_BYTES (2 << TRANS_FIFO_THRES)
#define MAX_F_CNT 0x0f
#define CLKDEL_NT 0x6c
#define CLKDEL_TE 0xf
#define CTRL0_NT  4
#define CTRL0_TE  0
#define L1_TIMER_T4 2
#define L1_TIMER_T3 (7 * HZ)
#define L1_TIMER_T1 ((120 * HZ) / 1000)
static int card_cnt;
typedef struct  hfc4s8s_param;
static struct pci_device_id hfc4s8s_ids[] = ;
MODULE_DEVICE_TABLE(pci, hfc4s8s_ids);
MODULE_AUTHOR("Werner Cornelius, werner@cornelius-consult.de");
MODULE_DESCRIPTION("ISDN layer 1 for Cologne Chip HFC-4S/8S chips");
MODULE_LICENSE("GPL");
struct hfc4s8s_btype ;
struct _hfc4s8s_hw;
struct hfc4s8s_l1 ;
typedef struct _hfc4s8s_hw  hfc4s8s_hw;
#define Write_hfc8(a,b,c)
#define fWrite_hfc8(a,b,c) (*((volatile u_char *)(a->membase+b)) = c)
#define Read_hfc8(a,b) (*((volatile u_char *)(a->membase+b)))
#define Write_hfc16(a,b,c) (*((volatile unsigned short *)(a->membase+b)) = c)
#define Read_hfc16(a,b) (*((volatile unsigned short *)(a->membase+b)))
#define Write_hfc32(a,b,c) (*((volatile unsigned long *)(a->membase+b)) = c)
#define Read_hfc32(a,b) (*((volatile unsigned long *)(a->membase+b)))
#define wait_busy(a)
#define PCI_ENA_MEMIO	0x03
static inline void
SetRegAddr(hfc4s8s_hw * a, u_char b)
static inline u_char
GetRegAddr(hfc4s8s_hw * a)
static inline void
Write_hfc8(hfc4s8s_hw * a, u_char b, u_char c)
static inline void
fWrite_hfc8(hfc4s8s_hw * a, u_char c)
static inline void
Write_hfc16(hfc4s8s_hw * a, u_char b, u_short c)
static inline void
Write_hfc32(hfc4s8s_hw * a, u_char b, u_long c)
static inline void
fWrite_hfc32(hfc4s8s_hw * a, u_long c)
static inline u_char
Read_hfc8(hfc4s8s_hw * a, u_char b)
static inline u_char
fRead_hfc8(hfc4s8s_hw * a)
static inline u_short
Read_hfc16(hfc4s8s_hw * a, u_char b)
static inline u_long
Read_hfc32(hfc4s8s_hw * a, u_char b)
static inline u_long
fRead_hfc32(hfc4s8s_hw * a)
static inline void
wait_busy(hfc4s8s_hw * a)
#define PCI_ENA_REGIO	0x01
static u_char
Read_hfc8_stable(hfc4s8s_hw * hw, int reg)
static int
Read_hfc16_stable(hfc4s8s_hw * hw, int reg)
static void
dch_l2l1(struct hisax_d_if *iface, int pr, void *arg)
static void
bch_l2l1(struct hisax_if *ifc, int pr, void *arg)
static void
hfc_l1_timer(struct hfc4s8s_l1 *l1)
static void
rx_d_frame(struct hfc4s8s_l1 *l1p, int ech)
static void
rx_b_frame(struct hfc4s8s_btype *bch)
static void
tx_d_frame(struct hfc4s8s_l1 *l1p)
static void
tx_b_frame(struct hfc4s8s_btype *bch)
static void
hfc4s8s_bh(struct work_struct *work)
static irqreturn_t
hfc4s8s_interrupt(int intno, void *dev_id)
static void
chipreset(hfc4s8s_hw * hw)
static void
hfc_hardware_enable(hfc4s8s_hw * hw, int enable, int nt_mode)
static void
release_pci_ports(hfc4s8s_hw * hw)
static void
enable_pci_ports(hfc4s8s_hw * hw)
static int __devinit
setup_instance(hfc4s8s_hw * hw)
static int __devinit
hfc4s8s_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit
hfc4s8s_remove(struct pci_dev *pdev)
static struct pci_driver hfc4s8s_driver = ;
static int __init
hfc4s8s_module_init(void)
static void __exit
hfc4s8s_module_exit(void)
module_init(hfc4s8s_module_init);
module_exit(hfc4s8s_module_exit);
