#define _SN9C102_SENSOR_H_
struct sn9c102_device;
struct sn9c102_sensor;
enum sn9c102_bridge ;
enum sn9c102_bridge sn9c102_get_bridge(struct sn9c102_device* cam);
struct sn9c102_sensor* sn9c102_get_sensor(struct sn9c102_device* cam);
extern struct sn9c102_device*
sn9c102_match_id(struct sn9c102_device* cam, const struct usb_device_id *id);
extern void
sn9c102_attach_sensor(struct sn9c102_device* cam,
const struct sn9c102_sensor* sensor);
extern int sn9c102_i2c_try_read(struct sn9c102_device*,
const struct sn9c102_sensor*, u8 address);
extern int sn9c102_i2c_try_raw_write(struct sn9c102_device* cam,
const struct sn9c102_sensor* sensor, u8 n,
u8 data0, u8 data1, u8 data2, u8 data3,
u8 data4, u8 data5);
extern int sn9c102_i2c_try_raw_read(struct sn9c102_device* cam,
const struct sn9c102_sensor* sensor,
u8 data0, u8 data1, u8 n, u8 buffer[]);
extern int sn9c102_i2c_write(struct sn9c102_device*, u8 address, u8 value);
extern int sn9c102_i2c_read(struct sn9c102_device*, u8 address);
extern int sn9c102_read_reg(struct sn9c102_device*, u16 index);
extern int sn9c102_pread_reg(struct sn9c102_device*, u16 index);
extern int sn9c102_write_reg(struct sn9c102_device*, u8 value, u16 index);
extern int sn9c102_write_regs(struct sn9c102_device*, const u8 valreg[][2],
int count);
#define sn9c102_write_const_regs(sn9c102_device, data...)                     \
()
enum sn9c102_i2c_sysfs_ops ;
enum sn9c102_i2c_frequency ;
enum sn9c102_i2c_interface ;
#define SN9C102_MAX_CTRLS (V4L2_CID_LASTP1-V4L2_CID_BASE+10)
struct sn9c102_sensor ;
#define SN9C102_V4L2_CID_DAC_MAGNITUDE (V4L2_CID_PRIVATE_BASE + 0)
#define SN9C102_V4L2_CID_GREEN_BALANCE (V4L2_CID_PRIVATE_BASE + 1)
#define SN9C102_V4L2_CID_RESET_LEVEL (V4L2_CID_PRIVATE_BASE + 2)
#define SN9C102_V4L2_CID_PIXEL_BIAS_VOLTAGE (V4L2_CID_PRIVATE_BASE + 3)
#define SN9C102_V4L2_CID_GAMMA (V4L2_CID_PRIVATE_BASE + 4)
#define SN9C102_V4L2_CID_BAND_FILTER (V4L2_CID_PRIVATE_BASE + 5)
#define SN9C102_V4L2_CID_BRIGHT_LEVEL (V4L2_CID_PRIVATE_BASE + 6)
