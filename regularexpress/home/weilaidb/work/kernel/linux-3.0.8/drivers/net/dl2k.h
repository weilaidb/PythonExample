#define __DL2K_H__
#define TX_RING_SIZE	256
#define TX_QUEUE_LEN	(TX_RING_SIZE - 1)
#define RX_RING_SIZE 	256
#define TX_TOTAL_SIZE	TX_RING_SIZE*sizeof(struct netdev_desc)
#define RX_TOTAL_SIZE	RX_RING_SIZE*sizeof(struct netdev_desc)
#undef readb
#undef readw
#undef readl
#undef writeb
#undef writew
#undef writel
#define readb inb
#define readw inw
#define readl inl
#define writeb outb
#define writew outw
#define writel outl
enum dl2x_offsets ;
enum IntStatus_bits ;
enum ReceiveMode_bits ;
enum MACCtrl_bits ;
enum ASICCtrl_LoWord_bits ;
enum ASICCtrl_HiWord_bits ;
enum TFC_bits ;
enum RFS_bits ;
#define MII_RESET_TIME_OUT		10000
enum _mii_reg ;
enum _pcs_reg ;
enum _mii_bmcr ;
enum _mii_bmsr ;
enum _mii_anar ;
enum _mii_anlpar ;
enum _mii_aner ;
enum _mii_mscr ;
enum _mii_mssr ;
enum _mii_esr ;
typedef enum t_MII_ADMIN_STATUS  MII_ADMIN_t, *PMII_ADMIN_t;
enum _pcs_anar ;
enum _pcs_anlpar ;
typedef struct t_SROM  SROM_t, *PSROM_t;
struct ioctl_data ;
struct mii_data ;
struct netdev_desc ;
#define PRIV_ALIGN	15
struct netdev_private ;
static DEFINE_PCI_DEVICE_TABLE(rio_pci_tbl) = ;
MODULE_DEVICE_TABLE (pci, rio_pci_tbl);
#define TX_TIMEOUT  (4*HZ)
#define PACKET_SIZE		1536
#define MAX_JUMBO		8000
#define RIO_IO_SIZE             340
#define DEFAULT_RXC		5
#define DEFAULT_RXT		750
#define DEFAULT_TXC		1
#define MAX_TXC			8
