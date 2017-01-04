#define pcmcia_info(args...) printk(KERN_INFO "m8xx_pcmcia: "args)
#define pcmcia_error(args...) printk(KERN_ERR "m8xx_pcmcia: "args)
static const char *version = "Version 0.06, Aug 2005";
MODULE_LICENSE("Dual MPL/GPL");
#if !defined(CONFIG_PCMCIA_SLOT_A) && !defined(CONFIG_PCMCIA_SLOT_B)
#if defined(CONFIG_RPXCLASSIC) || defined(CONFIG_RPXLITE)
#define CONFIG_PCMCIA_SLOT_B
#define CONFIG_BD_IS_MHZ
#define CONFIG_PCMCIA_SLOT_A
#define CONFIG_BD_IS_MHZ
#if defined(CONFIG_MPC860T) || defined(CONFIG_MPC860) || defined(CONFIG_MPC821)
#define CONFIG_PCMCIA_SLOT_A
#define CONFIG_PCMCIA_SLOT_B
#if defined(CONFIG_MPC885ADS)
#define CONFIG_PCMCIA_SLOT_A
#define PCMCIA_GLITCHY_CD
#define CONFIG_PCMCIA_SLOT_A
#define CONFIG_PCMCIA_SLOT_B
#if defined(CONFIG_PCMCIA_SLOT_A) && defined(CONFIG_PCMCIA_SLOT_B)
#define PCMCIA_SOCKETS_NO 2
#define PCMCIA_MEM_WIN_NO 2
#define PCMCIA_IO_WIN_NO  2
#define PCMCIA_SLOT_MSG "SLOT_A and SLOT_B"
#elif defined(CONFIG_PCMCIA_SLOT_A) || defined(CONFIG_PCMCIA_SLOT_B)
#define PCMCIA_SOCKETS_NO 1
#define PCMCIA_MEM_WIN_NO 5
#define PCMCIA_IO_WIN_NO  2
#define _slot_ 0
#define PCMCIA_SLOT_MSG "SLOT_A"
#define _slot_ 1
#define PCMCIA_SLOT_MSG "SLOT_B"
#error m8xx_pcmcia: Bad configuration!
#define PCMCIA_MEM_WIN_BASE 0xe0000000
#define PCMCIA_MEM_WIN_SIZE 0x04000000
#define PCMCIA_IO_WIN_BASE  _IO_BASE
static int pcmcia_schlvl;
static DEFINE_SPINLOCK(events_lock);
#define PCMCIA_SOCKET_KEY_5V 1
#define PCMCIA_SOCKET_KEY_LV 2
static u32 *m8xx_pgcrx[2];
struct pcmcia_win ;
#define M8XX_PCMCIA_VS1(slot)      (0x80000000 >> (slot << 4))
#define M8XX_PCMCIA_VS2(slot)      (0x40000000 >> (slot << 4))
#define M8XX_PCMCIA_VS_MASK(slot)  (0xc0000000 >> (slot << 4))
#define M8XX_PCMCIA_VS_SHIFT(slot) (30 - (slot << 4))
#define M8XX_PCMCIA_WP(slot)       (0x20000000 >> (slot << 4))
#define M8XX_PCMCIA_CD2(slot)      (0x10000000 >> (slot << 4))
#define M8XX_PCMCIA_CD1(slot)      (0x08000000 >> (slot << 4))
#define M8XX_PCMCIA_BVD2(slot)     (0x04000000 >> (slot << 4))
#define M8XX_PCMCIA_BVD1(slot)     (0x02000000 >> (slot << 4))
#define M8XX_PCMCIA_RDY(slot)      (0x01000000 >> (slot << 4))
#define M8XX_PCMCIA_RDY_L(slot)    (0x00800000 >> (slot << 4))
#define M8XX_PCMCIA_RDY_H(slot)    (0x00400000 >> (slot << 4))
#define M8XX_PCMCIA_RDY_R(slot)    (0x00200000 >> (slot << 4))
#define M8XX_PCMCIA_RDY_F(slot)    (0x00100000 >> (slot << 4))
#define M8XX_PCMCIA_MASK(slot)     (0xFFFF0000 >> (slot << 4))
#define M8XX_PCMCIA_POR_VALID    0x00000001
#define M8XX_PCMCIA_POR_WRPROT   0x00000002
#define M8XX_PCMCIA_POR_ATTRMEM  0x00000010
#define M8XX_PCMCIA_POR_IO       0x00000018
#define M8XX_PCMCIA_POR_16BIT    0x00000040
#define M8XX_PGCRX(slot)  m8xx_pgcrx[slot]
#define M8XX_PGCRX_CXOE    0x00000080
#define M8XX_PGCRX_CXRESET 0x00000040
#define PCMCIA_EVENTS_MAX 5
struct event_table ;
static const char driver_name[] = "m8xx-pcmcia";
struct socket_info ;
static struct socket_info socket[PCMCIA_SOCKETS_NO];
#define M8XX_SIZES_NO 32
static const u32 m8xx_size_to_gray[M8XX_SIZES_NO] = ;
static irqreturn_t m8xx_interrupt(int irq, void *dev);
#define PCMCIA_BMT_LIMIT (15*4)
#if defined(CONFIG_RPXCLASSIC) || defined(CONFIG_RPXLITE)
#define PCMCIA_BOARD_MSG "RPX CLASSIC or RPX LITE"
#undef PCMCIA_BMT_LIMIT
#define PCMCIA_BMT_LIMIT (6*8)
static int voltage_set(int slot, int vcc, int vpp)
#define socket_get(_slot_) PCMCIA_SOCKET_KEY_5V
#define hardware_enable(_slot_)
#define hardware_disable(_slot_)
#if defined(CONFIG_FADS)
#define PCMCIA_BOARD_MSG "FADS"
static int voltage_set(int slot, int vcc, int vpp)
#define socket_get(_slot_) PCMCIA_SOCKET_KEY_5V
static void hardware_enable(int slot)
static void hardware_disable(int slot)
#if defined(CONFIG_MPC885ADS)
#define PCMCIA_BOARD_MSG "MPC885ADS"
#define socket_get(_slot_) PCMCIA_SOCKET_KEY_5V
static inline void hardware_enable(int slot)
static inline void hardware_disable(int slot)
static inline int voltage_set(int slot, int vcc, int vpp)
#if defined(CONFIG_MBX)
#define PCMCIA_BOARD_MSG "MBX"
static int voltage_set(int slot, int vcc, int vpp)
#define socket_get(_slot_) PCMCIA_SOCKET_KEY_5V
#define hardware_enable(_slot_)
#define hardware_disable(_slot_)
#if defined(CONFIG_PRxK)
extern volatile fpga_pc_regs *fpga_pc;
#define PCMCIA_BOARD_MSG "MPC855T"
static int voltage_set(int slot, int vcc, int vpp)
#define socket_get(_slot_) PCMCIA_SOCKET_KEY_LV
#define hardware_enable(_slot_)
#define hardware_disable(_slot_)
static u32 pending_events[PCMCIA_SOCKETS_NO];
static DEFINE_SPINLOCK(pending_event_lock);
static irqreturn_t m8xx_interrupt(int irq, void *dev)
static u32 m8xx_get_graycode(u32 size)
static u32 m8xx_get_speed(u32 ns, u32 is_io, u32 bus_freq)
static int m8xx_get_status(struct pcmcia_socket *sock, unsigned int *value)
static int m8xx_set_socket(struct pcmcia_socket *sock, socket_state_t * state)
static int m8xx_set_io_map(struct pcmcia_socket *sock, struct pccard_io_map *io)
static int m8xx_set_mem_map(struct pcmcia_socket *sock,
struct pccard_mem_map *mem)
static int m8xx_sock_init(struct pcmcia_socket *sock)
static int m8xx_sock_suspend(struct pcmcia_socket *sock)
static struct pccard_operations m8xx_services = ;
static int __init m8xx_probe(struct platform_device *ofdev)
static int m8xx_remove(struct platform_device *ofdev)
static const struct of_device_id m8xx_pcmcia_match[] = ;
MODULE_DEVICE_TABLE(of, m8xx_pcmcia_match);
static struct platform_driver m8xx_pcmcia_driver = ;
static int __init m8xx_init(void)
static void __exit m8xx_exit(void)
module_init(m8xx_init);
module_exit(m8xx_exit);
