struct go7007;
#define GO7007_BOARDID_MATRIX_II	0
#define GO7007_BOARDID_MATRIX_RELOAD	1
#define GO7007_BOARDID_STAR_TREK	2
#define GO7007_BOARDID_PCI_VOYAGER	3
#define GO7007_BOARDID_XMEN		4
#define GO7007_BOARDID_XMEN_II		5
#define GO7007_BOARDID_XMEN_III		6
#define GO7007_BOARDID_MATRIX_REV	7
#define GO7007_BOARDID_PX_M402U		16
#define GO7007_BOARDID_PX_TV402U_ANY	17
#define GO7007_BOARDID_PX_TV402U_NA	18
#define GO7007_BOARDID_PX_TV402U_EU	19
#define GO7007_BOARDID_PX_TV402U_JP	20
#define GO7007_BOARDID_LIFEVIEW_LR192	21
#define GO7007_BOARDID_ENDURA		22
#define GO7007_BOARDID_ADLINK_MPG24	23
#define GO7007_BOARDID_SENSORAY_2250	24
#define GO7007_BOARD_HAS_AUDIO		(1<<0)
#define GO7007_BOARD_USE_ONBOARD_I2C	(1<<1)
#define GO7007_BOARD_HAS_TUNER		(1<<2)
#define GO7007_SENSOR_VALID_POLAR	(1<<0)
#define GO7007_SENSOR_HREF_POLAR	(1<<1)
#define GO7007_SENSOR_VREF_POLAR	(1<<2)
#define GO7007_SENSOR_FIELD_ID_POLAR	(1<<3)
#define GO7007_SENSOR_BIT_WIDTH		(1<<4)
#define GO7007_SENSOR_VALID_ENABLE	(1<<5)
#define GO7007_SENSOR_656		(1<<6)
#define GO7007_SENSOR_CONFIG_MASK	0x7f
#define GO7007_SENSOR_TV		(1<<7)
#define GO7007_SENSOR_VBI		(1<<8)
#define GO7007_SENSOR_SCALING		(1<<9)
#define GO7007_AUDIO_I2S_MODE_1		(1)
#define GO7007_AUDIO_I2S_MODE_2		(2)
#define GO7007_AUDIO_I2S_MODE_3		(3)
#define GO7007_AUDIO_BCLK_POLAR		(1<<2)
#define GO7007_AUDIO_WORD_14		(14<<4)
#define GO7007_AUDIO_WORD_16		(16<<4)
#define GO7007_AUDIO_ONE_CHANNEL	(1<<11)
#define GO7007_AUDIO_I2S_MASTER		(1<<16)
#define GO7007_AUDIO_OKI_MODE		(1<<17)
struct go7007_board_info ;
struct go7007_hpi_ops ;
#define	GO7007_BUF_PAGES	(128 * 1024 / PAGE_SIZE)
#define	GO7007_BUF_SIZE		(GO7007_BUF_PAGES << PAGE_SHIFT)
struct go7007_buffer ;
struct go7007_file ;
#define	GO7007_FORMAT_MJPEG	0
#define GO7007_FORMAT_MPEG4	1
#define GO7007_FORMAT_MPEG1	2
#define GO7007_FORMAT_MPEG2	3
#define GO7007_FORMAT_H263	4
#define GO7007_RATIO_1_1	0
#define GO7007_RATIO_4_3	1
#define GO7007_RATIO_16_9	2
enum go7007_parser_state ;
struct go7007 ;
static inline struct go7007 *to_go7007(struct v4l2_device *v4l2_dev)
#define go7007_interface_reset(go) \
((go)->hpi_ops->interface_reset(go))
#define	go7007_write_interrupt(go, x, y) \
((go)->hpi_ops->write_interrupt)((go), (x), (y))
#define go7007_stream_start(go) \
((go)->hpi_ops->stream_start(go))
#define go7007_stream_stop(go) \
((go)->hpi_ops->stream_stop(go))
#define	go7007_send_firmware(go, x, y) \
((go)->hpi_ops->send_firmware)((go), (x), (y))
#define go7007_write_addr(go, x, y) \
((go)->hpi_ops->write_interrupt)((go), (x)|0x8000, (y))
int go7007_read_addr(struct go7007 *go, u16 addr, u16 *data);
int go7007_read_interrupt(struct go7007 *go, u16 *value, u16 *data);
int go7007_boot_encoder(struct go7007 *go, int init_i2c);
int go7007_reset_encoder(struct go7007 *go);
int go7007_register_encoder(struct go7007 *go);
int go7007_start_encoder(struct go7007 *go);
void go7007_parse_video_stream(struct go7007 *go, u8 *buf, int length);
struct go7007 *go7007_alloc(struct go7007_board_info *board,
struct device *dev);
void go7007_remove(struct go7007 *go);
int go7007_construct_fw_image(struct go7007 *go, u8 **fw, int *fwlen);
int go7007_i2c_init(struct go7007 *go);
int go7007_i2c_remove(struct go7007 *go);
int go7007_v4l2_init(struct go7007 *go);
void go7007_v4l2_remove(struct go7007 *go);
int go7007_snd_init(struct go7007 *go);
int go7007_snd_remove(struct go7007 *go);
