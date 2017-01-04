#define IPATH_EEPROM_DEV_V1 0xA0
#define IPATH_EEPROM_DEV_V2 0xA2
#define IPATH_TEMP_DEV 0x98
#define IPATH_BAD_DEV (IPATH_EEPROM_DEV_V2+2)
#define IPATH_NO_DEV (0xFF)
static struct i2c_chain_desc  i2c_chains[] = ;
enum i2c_type ;
enum i2c_state ;
#define READ_CMD 1
#define WRITE_CMD 0
static int i2c_gpio_set(struct ipath_devdata *dd,
enum i2c_type line,
enum i2c_state new_line_state)
static int i2c_gpio_get(struct ipath_devdata *dd,
enum i2c_type line,
enum i2c_state *curr_statep)
static void i2c_wait_for_writes(struct ipath_devdata *dd)
static void scl_out(struct ipath_devdata *dd, u8 bit)
static void sda_out(struct ipath_devdata *dd, u8 bit)
static u8 sda_in(struct ipath_devdata *dd, int wait)
static int i2c_ackrcv(struct ipath_devdata *dd)
static int rd_byte(struct ipath_devdata *dd)
static int wr_byte(struct ipath_devdata *dd, u8 data)
static void send_ack(struct ipath_devdata *dd)
static int i2c_startcmd(struct ipath_devdata *dd, u8 offset_dir)
static void stop_cmd(struct ipath_devdata *dd)
static int eeprom_reset(struct ipath_devdata *dd)
static int i2c_probe(struct ipath_devdata *dd, int devaddr)
static struct i2c_chain_desc *ipath_i2c_type(struct ipath_devdata *dd)
static int ipath_eeprom_internal_read(struct ipath_devdata *dd,
u8 eeprom_offset, void *buffer, int len)
static int ipath_eeprom_internal_write(struct ipath_devdata *dd, u8 eeprom_offset,
const void *buffer, int len)
int ipath_eeprom_read(struct ipath_devdata *dd, u8 eeprom_offset,
void *buff, int len)
int ipath_eeprom_write(struct ipath_devdata *dd, u8 eeprom_offset,
const void *buff, int len)
static u8 flash_csum(struct ipath_flash *ifp, int adjust)
void ipath_get_eeprom_info(struct ipath_devdata *dd)
int ipath_update_eeprom_log(struct ipath_devdata *dd)
void ipath_inc_eeprom_err(struct ipath_devdata *dd, u32 eidx, u32 incr)
static int ipath_tempsense_internal_read(struct ipath_devdata *dd, u8 regnum)
#define VALID_TS_RD_REG_MASK 0xBF
int ipath_tempsense_read(struct ipath_devdata *dd, u8 regnum)
static int ipath_tempsense_internal_write(struct ipath_devdata *dd,
u8 regnum, u8 data)
#define VALID_TS_WR_REG_MASK ((1 << 9) | (1 << 0xB) | (1 << 0xD))
int ipath_tempsense_write(struct ipath_devdata *dd, u8 regnum, u8 data)
