#define DRIVER_DESC	"Gravis Grip Multiport driver"
MODULE_AUTHOR("Brian Bonnlander");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define dbg(format, arg...) printk(KERN_ERR __FILE__ ": " format "\n" , ## arg)
#define dbg(format, arg...) do  while (0)
#define GRIP_MAX_PORTS	4
struct grip_port ;
struct grip_mp ;
#define PACKET_FULL          0x80000000
#define PACKET_IO_FAST       0x40000000
#define PACKET_IO_SLOW       0x20000000
#define PACKET_MP_MORE       0x04000000
#define PACKET_MP_DONE       0x02000000
#define IO_GOT_PACKET        0x0100
#define IO_MODE_FAST         0x0200
#define IO_SLOT_CHANGE       0x0800
#define IO_DONE              0x1000
#define IO_RETRY             0x4000
#define IO_RESET             0x8000
#define GRIP_INIT_DELAY         2000
#define GRIP_MODE_NONE		0
#define GRIP_MODE_RESET         1
#define GRIP_MODE_GP		2
#define GRIP_MODE_C64		3
static const int grip_btn_gp[]  = ;
static const int grip_btn_c64[] = ;
static const int grip_abs_gp[]  = ;
static const int grip_abs_c64[] = ;
static const int *grip_abs[] = ;
static const int *grip_btn[] = ;
static const char *grip_name[] = ;
static const int init_seq[] = ;
static const int axis_map[] = ;
static int register_slot(int i, struct grip_mp *grip);
static int bit_parity(u32 pkt)
static inline int poll_until(u8 onbits, u8 offbits, int u_sec, struct gameport* gp, u8 *data)
static int mp_io(struct gameport* gameport, int sendflags, int sendcode, u32 *packet)
static int multiport_io(struct gameport* gameport, int sendflags, int sendcode, u32 *packet)
static int dig_mode_start(struct gameport *gameport, u32 *packet)
static int get_and_decode_packet(struct grip_mp *grip, int flags)
static int slots_valid(struct grip_mp *grip)
static int multiport_init(struct grip_mp *grip)
static void report_slot(struct grip_mp *grip, int slot)
static void grip_poll(struct gameport *gameport)
static int grip_open(struct input_dev *dev)
static void grip_close(struct input_dev *dev)
static int register_slot(int slot, struct grip_mp *grip)
static int grip_connect(struct gameport *gameport, struct gameport_driver *drv)
static void grip_disconnect(struct gameport *gameport)
static struct gameport_driver grip_drv = ;
static int __init grip_init(void)
static void __exit grip_exit(void)
module_init(grip_init);
module_exit(grip_exit);
