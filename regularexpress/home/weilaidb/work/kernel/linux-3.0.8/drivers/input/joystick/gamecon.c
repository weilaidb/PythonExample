#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("NES, SNES, N64, MultiSystem, PSX gamepad driver");
MODULE_LICENSE("GPL");
#define GC_MAX_PORTS		3
#define GC_MAX_DEVICES		5
struct gc_config ;
static struct gc_config gc_cfg[GC_MAX_PORTS] __initdata;
module_param_array_named(map, gc_cfg[0].args, int, &gc_cfg[0].nargs, 0);
MODULE_PARM_DESC(map, "Describes first set of devices (<parport#>,<pad1>,<pad2>,..<pad5>)");
module_param_array_named(map2, gc_cfg[1].args, int, &gc_cfg[1].nargs, 0);
MODULE_PARM_DESC(map2, "Describes second set of devices");
module_param_array_named(map3, gc_cfg[2].args, int, &gc_cfg[2].nargs, 0);
MODULE_PARM_DESC(map3, "Describes third set of devices");
enum gc_type ;
#define GC_REFRESH_TIME	HZ/100
struct gc_pad ;
struct gc ;
struct gc_subdev ;
static struct gc *gc_base[3];
static const int gc_status_bit[] = ;
static const char *gc_names[] = ;
static const unsigned char gc_n64_bytes[] = ;
static const short gc_n64_btn[] = ;
#define GC_N64_LENGTH		32
#define GC_N64_STOP_LENGTH	5
#define GC_N64_CMD_00		0x11111111UL
#define GC_N64_CMD_01		0xd1111111UL
#define GC_N64_CMD_03		0xdd111111UL
#define GC_N64_CMD_1b		0xdd1dd111UL
#define GC_N64_CMD_c0		0x111111ddUL
#define GC_N64_CMD_80		0x1111111dUL
#define GC_N64_STOP_BIT		0x1d
#define GC_N64_REQUEST_DATA	GC_N64_CMD_01
#define GC_N64_DELAY		133
#define GC_N64_DWS		3
#define GC_N64_POWER_W		0xe2
#define GC_N64_POWER_R		0xfd
#define GC_N64_OUT		0x1d
#define GC_N64_CLOCK		0x02
static void gc_n64_send_command(struct gc *gc, unsigned long cmd,
unsigned char target)
static void gc_n64_send_stop_bit(struct gc *gc, unsigned char target)
static void gc_n64_read_packet(struct gc *gc, unsigned char *data)
static void gc_n64_process_packet(struct gc *gc)
static int gc_n64_play_effect(struct input_dev *dev, void *data,
struct ff_effect *effect)
static int __init gc_n64_init_ff(struct input_dev *dev, int i)
#define GC_NES_DELAY		6
#define GC_NES_LENGTH		8
#define GC_SNES_LENGTH		12
#define GC_SNESMOUSE_LENGTH	32
#define GC_NES_POWER	0xfc
#define GC_NES_CLOCK	0x01
#define GC_NES_LATCH	0x02
static const unsigned char gc_nes_bytes[] = ;
static const unsigned char gc_snes_bytes[] = ;
static const short gc_snes_btn[] = ;
static void gc_nes_read_packet(struct gc *gc, int length, unsigned char *data)
static void gc_nes_process_packet(struct gc *gc)
#define GC_MULTI_LENGTH		5
#define GC_MULTI2_LENGTH	6
static void gc_multi_read_packet(struct gc *gc, int length, unsigned char *data)
static void gc_multi_process_packet(struct gc *gc)
#define GC_PSX_DELAY	25
#define GC_PSX_LENGTH	8
#define GC_PSX_BYTES	6
#define GC_PSX_MOUSE	1
#define GC_PSX_NEGCON	2
#define GC_PSX_NORMAL	4
#define GC_PSX_ANALOG	5
#define GC_PSX_RUMBLE	7
#define GC_PSX_CLOCK	0x04
#define GC_PSX_COMMAND	0x01
#define GC_PSX_POWER	0xf8
#define GC_PSX_SELECT	0x02
#define GC_PSX_ID(x)	((x) >> 4)
#define GC_PSX_LEN(x)	(((x) & 0xf) << 1)
static int gc_psx_delay = GC_PSX_DELAY;
module_param_named(psx_delay, gc_psx_delay, uint, 0);
MODULE_PARM_DESC(psx_delay, "Delay when accessing Sony PSX controller (usecs)");
static const short gc_psx_abs[] = ;
static const short gc_psx_btn[] = ;
static const short gc_psx_ddr_btn[] = ;
static void gc_psx_command(struct gc *gc, int b, unsigned char *data)
static void gc_psx_read_packet(struct gc *gc,
unsigned char data[GC_MAX_DEVICES][GC_PSX_BYTES],
unsigned char id[GC_MAX_DEVICES])
static void gc_psx_report_one(struct gc_pad *pad, unsigned char psx_type,
unsigned char *data)
static void gc_psx_process_packet(struct gc *gc)
static void gc_timer(unsigned long private)
static int gc_open(struct input_dev *dev)
static void gc_close(struct input_dev *dev)
static int __init gc_setup_pad(struct gc *gc, int idx, int pad_type)
static struct gc __init *gc_probe(int parport, int *pads, int n_pads)
static void gc_remove(struct gc *gc)
static int __init gc_init(void)
static void __exit gc_exit(void)
module_init(gc_init);
module_exit(gc_exit);
