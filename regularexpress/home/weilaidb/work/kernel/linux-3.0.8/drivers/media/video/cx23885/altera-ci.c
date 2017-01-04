#define NETUP_CI_INT_CTRL	0x00
#define NETUP_CI_BUSCTRL2	0x01
#define NETUP_CI_ADDR0		0x04
#define NETUP_CI_ADDR1		0x05
#define NETUP_CI_DATA		0x06
#define NETUP_CI_BUSCTRL	0x07
#define NETUP_CI_PID_ADDR0	0x08
#define NETUP_CI_PID_ADDR1	0x09
#define NETUP_CI_PID_DATA	0x0a
#define NETUP_CI_TSA_DIV	0x0c
#define NETUP_CI_TSB_DIV	0x0d
#define NETUP_CI_REVISION	0x0f
#define NETUP_CI_FLG_CTL	1
#define NETUP_CI_FLG_RD		1
#define NETUP_CI_FLG_AD		1
static unsigned int ci_dbg;
module_param(ci_dbg, int, 0644);
MODULE_PARM_DESC(ci_dbg, "Enable CI debugging");
static unsigned int pid_dbg;
module_param(pid_dbg, int, 0644);
MODULE_PARM_DESC(pid_dbg, "Enable PID filtering debugging");
MODULE_DESCRIPTION("altera FPGA CI module");
MODULE_AUTHOR("Igor M. Liplianin  <liplianin@netup.ru>");
MODULE_LICENSE("GPL");
#define ci_dbg_print(args...) \
do  while (0)
#define pid_dbg_print(args...) \
do  while (0)
struct altera_ci_state;
struct netup_hw_pid_filter;
struct fpga_internal ;
struct altera_ci_state ;
struct netup_hw_pid_filter ;
struct fpga_inode ;
static struct fpga_inode *fpga_first_inode;
static struct fpga_inode *find_inode(void *dev)
static struct fpga_internal *check_filter(struct fpga_internal *temp_int,
void *demux_dev, int filt_nr)
static struct fpga_inode *find_dinode(void *demux_dev)
static void remove_inode(struct fpga_internal *internal)
static struct fpga_inode *append_internal(struct fpga_internal *internal)
static int netup_fpga_op_rw(struct fpga_internal *inter, int addr,
u8 val, u8 read)
int altera_ci_op_cam(struct dvb_ca_en50221 *en50221, int slot,
u8 flag, u8 read, int addr, u8 val)
int altera_ci_read_attribute_mem(struct dvb_ca_en50221 *en50221,
int slot, int addr)
int altera_ci_write_attribute_mem(struct dvb_ca_en50221 *en50221,
int slot, int addr, u8 data)
int altera_ci_read_cam_ctl(struct dvb_ca_en50221 *en50221, int slot, u8 addr)
int altera_ci_write_cam_ctl(struct dvb_ca_en50221 *en50221, int slot,
u8 addr, u8 data)
int altera_ci_slot_reset(struct dvb_ca_en50221 *en50221, int slot)
int altera_ci_slot_shutdown(struct dvb_ca_en50221 *en50221, int slot)
int altera_ci_slot_ts_ctl(struct dvb_ca_en50221 *en50221, int slot)
static void netup_read_ci_status(struct work_struct *work)
int altera_ci_irq(void *dev)
EXPORT_SYMBOL(altera_ci_irq);
int altera_poll_ci_slot_status(struct dvb_ca_en50221 *en50221, int slot,
int open)
void altera_hw_filt_release(void *main_dev, int filt_nr)
EXPORT_SYMBOL(altera_hw_filt_release);
void altera_ci_release(void *dev, int ci_nr)
EXPORT_SYMBOL(altera_ci_release);
static void altera_pid_control(struct netup_hw_pid_filter *pid_filt,
u16 pid, int onoff)
static void altera_toggle_fullts_streaming(struct netup_hw_pid_filter *pid_filt,
int filt_nr, int onoff)
int altera_pid_feed_control(void *demux_dev, int filt_nr,
struct dvb_demux_feed *feed, int onoff)
EXPORT_SYMBOL(altera_pid_feed_control);
int altera_ci_start_feed(struct dvb_demux_feed *feed, int num)
int altera_ci_stop_feed(struct dvb_demux_feed *feed, int num)
int altera_ci_start_feed_1(struct dvb_demux_feed *feed)
int altera_ci_stop_feed_1(struct dvb_demux_feed *feed)
int altera_ci_start_feed_2(struct dvb_demux_feed *feed)
int altera_ci_stop_feed_2(struct dvb_demux_feed *feed)
int altera_hw_filt_init(struct altera_ci_config *config, int hw_filt_nr)
EXPORT_SYMBOL(altera_hw_filt_init);
int altera_ci_init(struct altera_ci_config *config, int ci_nr)
EXPORT_SYMBOL(altera_ci_init);
int altera_ci_tuner_reset(void *dev, int ci_nr)
EXPORT_SYMBOL(altera_ci_tuner_reset);
