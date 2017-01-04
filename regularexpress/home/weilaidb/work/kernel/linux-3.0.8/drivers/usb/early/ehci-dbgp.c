static int dbgp_phys_port = 1;
static struct ehci_caps __iomem *ehci_caps;
static struct ehci_regs __iomem *ehci_regs;
static struct ehci_dbg_port __iomem *ehci_debug;
static int dbgp_not_safe;
static unsigned int dbgp_endpoint_out;
static unsigned int dbgp_endpoint_in;
struct ehci_dev ;
static struct ehci_dev ehci_dev;
#define USB_DEBUG_DEVNUM 127
#define dbgp_printk printk
static void dbgp_ehci_status(char *str)
static inline void dbgp_ehci_status(char *str)
static inline void dbgp_printk(const char *fmt, ...)
static inline u32 dbgp_len_update(u32 x, u32 len)
static struct kgdb_io kgdbdbgp_io_ops;
#define dbgp_kgdb_mode (dbg_io_ops == &kgdbdbgp_io_ops)
#define dbgp_kgdb_mode (0)
#define EARLY_HC_LENGTH(p)	(0x00ff & (p))
#define USB_PID_OUT		0xe1
#define USB_PID_IN		0x69
#define USB_PID_SOF		0xa5
#define USB_PID_SETUP		0x2d
#define USB_PID_ACK		0xd2
#define USB_PID_NAK		0x5a
#define USB_PID_STALL		0x1e
#define USB_PID_NYET		0x96
#define USB_PID_DATA0		0xc3
#define USB_PID_DATA1		0x4b
#define USB_PID_DATA2		0x87
#define USB_PID_MDATA		0x0f
#define USB_PID_PREAMBLE	0x3c
#define USB_PID_ERR		0x3c
#define USB_PID_SPLIT		0x78
#define USB_PID_PING		0xb4
#define USB_PID_UNDEF_0		0xf0
#define USB_PID_DATA_TOGGLE	0x88
#define DBGP_CLAIM (DBGP_OWNER | DBGP_ENABLED | DBGP_INUSE)
#define PCI_CAP_ID_EHCI_DEBUG	0xa
#define HUB_ROOT_RESET_TIME	50
#define HUB_SHORT_RESET_TIME	10
#define HUB_LONG_RESET_TIME	200
#define HUB_RESET_TIMEOUT	500
#define DBGP_MAX_PACKET		8
#define DBGP_TIMEOUT		(250 * 1000)
#define DBGP_LOOPS		1000
static inline u32 dbgp_pid_write_update(u32 x, u32 tok)
static inline u32 dbgp_pid_read_update(u32 x, u32 tok)
static int dbgp_wait_until_complete(void)
static inline void dbgp_mdelay(int ms)
static void dbgp_breath(void)
static int dbgp_wait_until_done(unsigned ctrl, int loop)
static inline void dbgp_set_data(const void *buf, int size)
static inline void dbgp_get_data(void *buf, int size)
static int dbgp_bulk_write(unsigned devnum, unsigned endpoint,
const char *bytes, int size)
static int dbgp_bulk_read(unsigned devnum, unsigned endpoint, void *data,
int size, int loops)
static int dbgp_control_msg(unsigned devnum, int requesttype,
int request, int value, int index, void *data, int size)
static u32 __init find_cap(u32 num, u32 slot, u32 func, int cap)
static u32 __init __find_dbgp(u32 bus, u32 slot, u32 func)
static u32 __init find_dbgp(int ehci_num, u32 *rbus, u32 *rslot, u32 *rfunc)
static int dbgp_ehci_startup(void)
static int dbgp_ehci_controller_reset(void)
static int ehci_wait_for_port(int port);
int dbgp_external_startup(void)
EXPORT_SYMBOL_GPL(dbgp_external_startup);
static int ehci_reset_port(int port)
static int ehci_wait_for_port(int port)
typedef void (*set_debug_port_t)(int port);
static void __init default_set_debug_port(int port)
static set_debug_port_t __initdata set_debug_port = default_set_debug_port;
static void __init nvidia_set_debug_port(int port)
static void __init detect_set_debug_port(void)
#define EHCI_USBLEGSUP_BIOS	(1 << 16)
#define EHCI_USBLEGCTLSTS	4
static void __init early_ehci_bios_handoff(void)
static int __init ehci_setup(void)
int __init early_dbgp_init(char *s)
static void early_dbgp_write(struct console *con, const char *str, u32 n)
struct console early_dbgp_console = ;
int dbgp_reset_prep(void)
EXPORT_SYMBOL_GPL(dbgp_reset_prep);
static char kgdbdbgp_buf[DBGP_MAX_PACKET];
static int kgdbdbgp_buf_sz;
static int kgdbdbgp_buf_idx;
static int kgdbdbgp_loop_cnt = DBGP_LOOPS;
static int kgdbdbgp_read_char(void)
static void kgdbdbgp_write_char(u8 chr)
static struct kgdb_io kgdbdbgp_io_ops = ;
static int kgdbdbgp_wait_time;
static int __init kgdbdbgp_parse_config(char *str)
early_param("kgdbdbgp", kgdbdbgp_parse_config);
static int kgdbdbgp_reader_thread(void *ptr)
static int __init kgdbdbgp_start_thread(void)
module_init(kgdbdbgp_start_thread);
