#define SOC_CAMERA_H
extern struct bus_type soc_camera_bus_type;
struct file;
struct soc_camera_device ;
struct soc_camera_host ;
struct soc_camera_host_ops ;
#define SOCAM_SENSOR_INVERT_PCLK	(1 << 0)
#define SOCAM_SENSOR_INVERT_MCLK	(1 << 1)
#define SOCAM_SENSOR_INVERT_HSYNC	(1 << 2)
#define SOCAM_SENSOR_INVERT_VSYNC	(1 << 3)
#define SOCAM_SENSOR_INVERT_DATA	(1 << 4)
#define SOCAM_MIPI_1LANE		(1 << 5)
#define SOCAM_MIPI_2LANE		(1 << 6)
#define SOCAM_MIPI_3LANE		(1 << 7)
#define SOCAM_MIPI_4LANE		(1 << 8)
#define SOCAM_MIPI	(SOCAM_MIPI_1LANE | SOCAM_MIPI_2LANE | \
SOCAM_MIPI_3LANE | SOCAM_MIPI_4LANE)
struct i2c_board_info;
struct regulator_bulk_data;
struct soc_camera_link ;
static inline struct soc_camera_device *to_soc_camera_dev(
const struct device *dev)
static inline struct soc_camera_host *to_soc_camera_host(
const struct device *dev)
static inline struct soc_camera_link *to_soc_camera_link(
const struct soc_camera_device *icd)
static inline struct device *to_soc_camera_control(
const struct soc_camera_device *icd)
static inline struct v4l2_subdev *soc_camera_to_subdev(
const struct soc_camera_device *icd)
int soc_camera_host_register(struct soc_camera_host *ici);
void soc_camera_host_unregister(struct soc_camera_host *ici);
const struct soc_camera_format_xlate *soc_camera_xlate_by_fourcc(
struct soc_camera_device *icd, unsigned int fourcc);
struct soc_camera_format_xlate ;
struct soc_camera_ops ;
#define SOCAM_SENSE_PCLK_CHANGED	(1 << 0)
struct soc_camera_sense ;
static inline struct v4l2_queryctrl const *soc_camera_find_qctrl(
struct soc_camera_ops *ops, int id)
#define SOCAM_MASTER			(1 << 0)
#define SOCAM_SLAVE			(1 << 1)
#define SOCAM_HSYNC_ACTIVE_HIGH		(1 << 2)
#define SOCAM_HSYNC_ACTIVE_LOW		(1 << 3)
#define SOCAM_VSYNC_ACTIVE_HIGH		(1 << 4)
#define SOCAM_VSYNC_ACTIVE_LOW		(1 << 5)
#define SOCAM_DATAWIDTH_4		(1 << 6)
#define SOCAM_DATAWIDTH_8		(1 << 7)
#define SOCAM_DATAWIDTH_9		(1 << 8)
#define SOCAM_DATAWIDTH_10		(1 << 9)
#define SOCAM_DATAWIDTH_15		(1 << 10)
#define SOCAM_DATAWIDTH_16		(1 << 11)
#define SOCAM_PCLK_SAMPLE_RISING	(1 << 12)
#define SOCAM_PCLK_SAMPLE_FALLING	(1 << 13)
#define SOCAM_DATA_ACTIVE_HIGH		(1 << 14)
#define SOCAM_DATA_ACTIVE_LOW		(1 << 15)
#define SOCAM_DATAWIDTH_MASK (SOCAM_DATAWIDTH_4 | SOCAM_DATAWIDTH_8 | \
SOCAM_DATAWIDTH_9 | SOCAM_DATAWIDTH_10 | \
SOCAM_DATAWIDTH_15 | SOCAM_DATAWIDTH_16)
static inline unsigned long soc_camera_bus_param_compatible(
unsigned long camera_flags, unsigned long bus_flags)
static inline void soc_camera_limit_side(int *start, int *length,
unsigned int start_min,
unsigned int length_min, unsigned int length_max)
extern unsigned long soc_camera_apply_sensor_flags(struct soc_camera_link *icl,
unsigned long flags);
static inline struct video_device *soc_camera_i2c_to_vdev(struct i2c_client *client)
static inline struct soc_camera_device *soc_camera_from_vb2q(struct vb2_queue *vq)
static inline struct soc_camera_device *soc_camera_from_vbq(struct videobuf_queue *vq)
void soc_camera_lock(struct vb2_queue *vq);
void soc_camera_unlock(struct vb2_queue *vq);
