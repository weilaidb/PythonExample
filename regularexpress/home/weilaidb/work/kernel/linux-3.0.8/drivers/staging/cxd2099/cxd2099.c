#define MAX_BUFFER_SIZE 248
struct cxd ;
static int i2c_write_reg(struct i2c_adapter *adapter, u8 adr,
u8 reg, u8 data)
static int i2c_write(struct i2c_adapter *adapter, u8 adr,
u8 *data, u8 len)
static int i2c_read_reg(struct i2c_adapter *adapter, u8 adr,
u8 reg, u8 *val)
static int i2c_read(struct i2c_adapter *adapter, u8 adr,
u8 reg, u8 *data, u8 n)
static int read_block(struct cxd *ci, u8 adr, u8 *data, u8 n)
static int read_reg(struct cxd *ci, u8 reg, u8 *val)
static int read_pccard(struct cxd *ci, u16 address, u8 *data, u8 n)
static int write_pccard(struct cxd *ci, u16 address, u8 *data, u8 n)
static int read_io(struct cxd *ci, u16 address, u8 *val)
static int write_io(struct cxd *ci, u16 address, u8 val)
static int write_regm(struct cxd *ci, u8 reg, u8 val, u8 mask)
static int write_reg(struct cxd *ci, u8 reg, u8 val)
static int write_block(struct cxd *ci, u8 adr, u8 *data, int n)
static void set_mode(struct cxd *ci, int mode)
static void cam_mode(struct cxd *ci, int mode)
#define CHK_ERROR(s) if ((status = s)) break
static int init(struct cxd *ci)
static int read_attribute_mem(struct dvb_ca_en50221 *ca,
int slot, int address)
static int write_attribute_mem(struct dvb_ca_en50221 *ca, int slot,
int address, u8 value)
static int read_cam_control(struct dvb_ca_en50221 *ca,
int slot, u8 address)
static int write_cam_control(struct dvb_ca_en50221 *ca, int slot,
u8 address, u8 value)
static int slot_reset(struct dvb_ca_en50221 *ca, int slot)
static int slot_shutdown(struct dvb_ca_en50221 *ca, int slot)
static int slot_ts_enable(struct dvb_ca_en50221 *ca, int slot)
static int campoll(struct cxd *ci)
static int poll_slot_status(struct dvb_ca_en50221 *ca, int slot, int open)
static int read_data(struct dvb_ca_en50221 *ca, int slot, u8 *ebuf, int ecount)
static int write_data(struct dvb_ca_en50221 *ca, int slot, u8 *ebuf, int ecount)
static struct dvb_ca_en50221 en_templ = ;
struct dvb_ca_en50221 *cxd2099_attach(u8 adr, void *priv,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(cxd2099_attach);
MODULE_DESCRIPTION("cxd2099");
MODULE_AUTHOR("Ralph Metzler <rjkm@metzlerbros.de>");
MODULE_LICENSE("GPL");
