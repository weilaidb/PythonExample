#define _ET61X251_SENSOR_H_
struct et61x251_device;
struct et61x251_sensor;
extern int et61x251_probe_tas5130d1b(struct et61x251_device* cam);
#define ET61X251_SENSOR_TABLE                                                 \                          \
static int (*et61x251_sensor_table[])(struct et61x251_device*) = ;
extern struct et61x251_device*
et61x251_match_id(struct et61x251_device* cam, const struct usb_device_id *id);
extern void
et61x251_attach_sensor(struct et61x251_device* cam,
const struct et61x251_sensor* sensor);
extern int et61x251_write_reg(struct et61x251_device*, u8 value, u16 index);
extern int et61x251_i2c_raw_write(struct et61x251_device*, u8 n, u8 data1,
u8 data2, u8 data3, u8 data4, u8 data5,
u8 data6, u8 data7, u8 data8, u8 address);
enum et61x251_i2c_sysfs_ops ;
enum et61x251_i2c_interface ;
enum et61x251_i2c_rsta ;
#define ET61X251_MAX_CTRLS (V4L2_CID_LASTP1-V4L2_CID_BASE+10)
struct et61x251_sensor ;
