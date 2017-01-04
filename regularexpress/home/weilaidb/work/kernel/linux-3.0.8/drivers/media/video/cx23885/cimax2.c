#define NETUP_DATA		0x000000ff
#define NETUP_WR		0x00008000
#define NETUP_RD		0x00004000
#define NETUP_ACK		0x00001000
#define NETUP_ADHI		0x00000800
#define NETUP_ADLO		0x00000400
#define NETUP_CS1		0x00000200
#define NETUP_CS0		0x00000100
#define NETUP_EN_ALL		0x00001000
#define NETUP_CTRL_OFF		(NETUP_CS1 | NETUP_CS0 | NETUP_WR | NETUP_RD)
#define NETUP_CI_CTL		0x04
#define NETUP_CI_RD		1
#define NETUP_IRQ_DETAM 	0x1
#define NETUP_IRQ_IRQAM		0x4
static unsigned int ci_dbg;
module_param(ci_dbg, int, 0644);
MODULE_PARM_DESC(ci_dbg, "Enable CI debugging");
static unsigned int ci_irq_enable;
module_param(ci_irq_enable, int, 0644);
MODULE_PARM_DESC(ci_irq_enable, "Enable IRQ from CAM");
#define ci_dbg_print(args...) \
do  while (0)
#define ci_irq_flags() (ci_irq_enable ? NETUP_IRQ_IRQAM : 0)
struct netup_ci_state ;
int netup_read_i2c(struct i2c_adapter *i2c_adap, u8 addr, u8 reg,
u8 *buf, int len)
int netup_write_i2c(struct i2c_adapter *i2c_adap, u8 addr, u8 reg,
u8 *buf, int len)
int netup_ci_get_mem(struct cx23885_dev *dev)
int netup_ci_op_cam(struct dvb_ca_en50221 *en50221, int slot,
u8 flag, u8 read, int addr, u8 data)
int netup_ci_read_attribute_mem(struct dvb_ca_en50221 *en50221,
int slot, int addr)
int netup_ci_write_attribute_mem(struct dvb_ca_en50221 *en50221,
int slot, int addr, u8 data)
int netup_ci_read_cam_ctl(struct dvb_ca_en50221 *en50221, int slot, u8 addr)
int netup_ci_write_cam_ctl(struct dvb_ca_en50221 *en50221, int slot,
u8 addr, u8 data)
int netup_ci_slot_reset(struct dvb_ca_en50221 *en50221, int slot)
int netup_ci_slot_shutdown(struct dvb_ca_en50221 *en50221, int slot)
int netup_ci_set_irq(struct dvb_ca_en50221 *en50221, u8 irq_mode)
int netup_ci_slot_ts_ctl(struct dvb_ca_en50221 *en50221, int slot)
static void netup_read_ci_status(struct work_struct *work)
int netup_ci_slot_status(struct cx23885_dev *dev, u32 pci_status)
int netup_poll_ci_slot_status(struct dvb_ca_en50221 *en50221, int slot, int open)
int netup_ci_init(struct cx23885_tsport *port)
void netup_ci_exit(struct cx23885_tsport *port)
