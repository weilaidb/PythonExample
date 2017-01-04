#define SAA7164_MAXBOARDS 8
#define UNSET (-1U)
#define SAA7164_BOARD_NOAUTO			UNSET
#define SAA7164_BOARD_UNKNOWN			0
#define SAA7164_BOARD_UNKNOWN_REV2		1
#define SAA7164_BOARD_UNKNOWN_REV3		2
#define SAA7164_BOARD_HAUPPAUGE_HVR2250		3
#define SAA7164_BOARD_HAUPPAUGE_HVR2200		4
#define SAA7164_BOARD_HAUPPAUGE_HVR2200_2	5
#define SAA7164_BOARD_HAUPPAUGE_HVR2200_3	6
#define SAA7164_BOARD_HAUPPAUGE_HVR2250_2	7
#define SAA7164_BOARD_HAUPPAUGE_HVR2250_3	8
#define SAA7164_MAX_UNITS		8
#define SAA7164_TS_NUMBER_OF_LINES	312
#define SAA7164_PS_NUMBER_OF_LINES	256
#define SAA7164_PT_ENTRIES		16
#define SAA7164_MAX_ENCODER_BUFFERS	64
#define SAA7164_MAX_VBI_BUFFERS		64
#define SAA7164_PORT_TS1	(0)
#define SAA7164_PORT_TS2	(SAA7164_PORT_TS1 + 1)
#define SAA7164_PORT_ENC1	(SAA7164_PORT_TS2 + 1)
#define SAA7164_PORT_ENC2	(SAA7164_PORT_ENC1 + 1)
#define SAA7164_PORT_VBI1	(SAA7164_PORT_ENC2 + 1)
#define SAA7164_PORT_VBI2	(SAA7164_PORT_VBI1 + 1)
#define SAA7164_MAX_PORTS	(SAA7164_PORT_VBI2 + 1)
#define DBGLVL_FW    4
#define DBGLVL_DVB   8
#define DBGLVL_I2C  16
#define DBGLVL_API  32
#define DBGLVL_CMD  64
#define DBGLVL_BUS 128
#define DBGLVL_IRQ 256
#define DBGLVL_BUF 512
#define DBGLVL_ENC 1024
#define DBGLVL_VBI 2048
#define DBGLVL_THR 4096
#define DBGLVL_CPU 8192
#define SAA7164_NORMS \
(V4L2_STD_NTSC_M |  V4L2_STD_NTSC_M_JP |  V4L2_STD_NTSC_443)
enum port_t ;
enum saa7164_i2c_bus_nr ;
enum saa7164_buffer_flags ;
enum saa7164_unit_type ;
struct saa7164_unit ;
struct saa7164_board ;
struct saa7164_subid ;
struct saa7164_encoder_fh ;
struct saa7164_vbi_fh ;
struct saa7164_histogram_bucket ;
struct saa7164_histogram ;
struct saa7164_user_buffer ;
struct saa7164_fw_status ;
struct saa7164_dvb ;
struct saa7164_i2c ;
struct saa7164_ctrl ;
struct saa7164_tvnorm ;
struct saa7164_encoder_params ;
struct saa7164_vbi_params ;
struct saa7164_port;
struct saa7164_buffer ;
struct saa7164_port ;
struct saa7164_dev ;
extern struct list_head saa7164_devlist;
extern unsigned int waitsecs;
extern unsigned int encoder_buffers;
extern unsigned int vbi_buffers;
void saa7164_dumpregs(struct saa7164_dev *dev, u32 addr);
void saa7164_dumphex16(struct saa7164_dev *dev, u8 *buf, int len);
void saa7164_getfirmwarestatus(struct saa7164_dev *dev);
u32 saa7164_getcurrentfirmwareversion(struct saa7164_dev *dev);
void saa7164_histogram_update(struct saa7164_histogram *hg, u32 val);
int saa7164_downloadfirmware(struct saa7164_dev *dev);
extern int saa7164_i2c_register(struct saa7164_i2c *bus);
extern int saa7164_i2c_unregister(struct saa7164_i2c *bus);
extern void saa7164_call_i2c_clients(struct saa7164_i2c *bus,
unsigned int cmd, void *arg);
int saa7164_bus_setup(struct saa7164_dev *dev);
void saa7164_bus_dump(struct saa7164_dev *dev);
int saa7164_bus_set(struct saa7164_dev *dev, struct tmComResInfo* msg,
void *buf);
int saa7164_bus_get(struct saa7164_dev *dev, struct tmComResInfo* msg,
void *buf, int peekonly);
int saa7164_cmd_send(struct saa7164_dev *dev,
u8 id, enum tmComResCmd command, u16 controlselector,
u16 size, void *buf);
void saa7164_cmd_signal(struct saa7164_dev *dev, u8 seqno);
int saa7164_irq_dequeue(struct saa7164_dev *dev);
int saa7164_api_get_fw_version(struct saa7164_dev *dev, u32 *version);
int saa7164_api_enum_subdevs(struct saa7164_dev *dev);
int saa7164_api_i2c_read(struct saa7164_i2c *bus, u8 addr, u32 reglen, u8 *reg,
u32 datalen, u8 *data);
int saa7164_api_i2c_write(struct saa7164_i2c *bus, u8 addr,
u32 datalen, u8 *data);
int saa7164_api_dif_write(struct saa7164_i2c *bus, u8 addr,
u32 datalen, u8 *data);
int saa7164_api_read_eeprom(struct saa7164_dev *dev, u8 *buf, int buflen);
int saa7164_api_set_gpiobit(struct saa7164_dev *dev, u8 unitid, u8 pin);
int saa7164_api_clear_gpiobit(struct saa7164_dev *dev, u8 unitid, u8 pin);
int saa7164_api_transition_port(struct saa7164_port *port, u8 mode);
int saa7164_api_initialize_dif(struct saa7164_port *port);
int saa7164_api_configure_dif(struct saa7164_port *port, u32 std);
int saa7164_api_set_encoder(struct saa7164_port *port);
int saa7164_api_get_encoder(struct saa7164_port *port);
int saa7164_api_set_aspect_ratio(struct saa7164_port *port);
int saa7164_api_set_usercontrol(struct saa7164_port *port, u8 ctl);
int saa7164_api_get_usercontrol(struct saa7164_port *port, u8 ctl);
int saa7164_api_set_videomux(struct saa7164_port *port);
int saa7164_api_audio_mute(struct saa7164_port *port, int mute);
int saa7164_api_set_audio_volume(struct saa7164_port *port, s8 level);
int saa7164_api_set_audio_std(struct saa7164_port *port);
int saa7164_api_set_audio_detection(struct saa7164_port *port, int autodetect);
int saa7164_api_get_videomux(struct saa7164_port *port);
int saa7164_api_set_vbi_format(struct saa7164_port *port);
int saa7164_api_set_debug(struct saa7164_dev *dev, u8 level);
int saa7164_api_collect_debug(struct saa7164_dev *dev);
int saa7164_api_get_load_info(struct saa7164_dev *dev,
struct tmFwInfoStruct *i);
extern struct saa7164_board saa7164_boards[];
extern const unsigned int saa7164_bcount;
extern struct saa7164_subid saa7164_subids[];
extern const unsigned int saa7164_idcount;
extern void saa7164_card_list(struct saa7164_dev *dev);
extern void saa7164_gpio_setup(struct saa7164_dev *dev);
extern void saa7164_card_setup(struct saa7164_dev *dev);
extern int saa7164_i2caddr_to_reglen(struct saa7164_i2c *bus, int addr);
extern int saa7164_i2caddr_to_unitid(struct saa7164_i2c *bus, int addr);
extern char *saa7164_unitid_name(struct saa7164_dev *dev, u8 unitid);
extern int saa7164_dvb_register(struct saa7164_port *port);
extern int saa7164_dvb_unregister(struct saa7164_port *port);
extern struct saa7164_buffer *saa7164_buffer_alloc(
struct saa7164_port *port, u32 len);
extern int saa7164_buffer_dealloc(struct saa7164_buffer *buf);
extern void saa7164_buffer_display(struct saa7164_buffer *buf);
extern int saa7164_buffer_activate(struct saa7164_buffer *buf, int i);
extern int saa7164_buffer_cfg_port(struct saa7164_port *port);
extern struct saa7164_user_buffer *saa7164_buffer_alloc_user(
struct saa7164_dev *dev, u32 len);
extern void saa7164_buffer_dealloc_user(struct saa7164_user_buffer *buf);
extern int saa7164_buffer_zero_offsets(struct saa7164_port *port, int i);
int saa7164_encoder_register(struct saa7164_port *port);
void saa7164_encoder_unregister(struct saa7164_port *port);
int saa7164_vbi_register(struct saa7164_port *port);
void saa7164_vbi_unregister(struct saa7164_port *port);
extern unsigned int crc_checking;
extern unsigned int saa_debug;
#define dprintk(level, fmt, arg...)\
do  while (0)
#define log_warn(fmt, arg...)\
do  while (0)
#define log_err(fmt, arg...)\
do  while (0)
#define saa7164_readl(reg) readl(dev->lmmio + ((reg) >> 2))
#define saa7164_writel(reg, value) writel((value), dev->lmmio + ((reg) >> 2))
#define saa7164_readb(reg)             readl(dev->bmmio + (reg))
#define saa7164_writeb(reg, value)     writel((value), dev->bmmio + (reg))
