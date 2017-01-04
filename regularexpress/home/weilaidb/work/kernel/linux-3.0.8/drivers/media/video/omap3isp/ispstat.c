#define IS_COHERENT_BUF(stat)	((stat)->dma_ch >= 0)
#define MAGIC_SIZE		16
#define MAGIC_NUM		0x55
#define AF_EXTRA_DATA		OMAP3ISP_AF_PAXEL_SIZE
#define NUM_H3A_RECOVER_BUFS	10
#define IS_H3A_AF(stat)		((stat) == &(stat)->isp->isp_af)
#define IS_H3A_AEWB(stat)	((stat) == &(stat)->isp->isp_aewb)
#define IS_H3A(stat)		(IS_H3A_AF(stat) || IS_H3A_AEWB(stat))
static void __isp_stat_buf_sync_magic(struct ispstat *stat,
struct ispstat_buffer *buf,
u32 buf_size, enum dma_data_direction dir,
void (*dma_sync)(struct device *,
dma_addr_t, unsigned long, size_t,
enum dma_data_direction))
static void isp_stat_buf_sync_magic_for_device(struct ispstat *stat,
struct ispstat_buffer *buf,
u32 buf_size,
enum dma_data_direction dir)
static void isp_stat_buf_sync_magic_for_cpu(struct ispstat *stat,
struct ispstat_buffer *buf,
u32 buf_size,
enum dma_data_direction dir)
static int isp_stat_buf_check_magic(struct ispstat *stat,
struct ispstat_buffer *buf)
static void isp_stat_buf_insert_magic(struct ispstat *stat,
struct ispstat_buffer *buf)
static void isp_stat_buf_sync_for_device(struct ispstat *stat,
struct ispstat_buffer *buf)
static void isp_stat_buf_sync_for_cpu(struct ispstat *stat,
struct ispstat_buffer *buf)
static void isp_stat_buf_clear(struct ispstat *stat)
static struct ispstat_buffer *
__isp_stat_buf_find(struct ispstat *stat, int look_empty)
static inline struct ispstat_buffer *
isp_stat_buf_find_oldest(struct ispstat *stat)
static inline struct ispstat_buffer *
isp_stat_buf_find_oldest_or_empty(struct ispstat *stat)
static int isp_stat_buf_queue(struct ispstat *stat)
static void isp_stat_buf_next(struct ispstat *stat)
static void isp_stat_buf_release(struct ispstat *stat)
static struct ispstat_buffer *isp_stat_buf_get(struct ispstat *stat,
struct omap3isp_stat_data *data)
static void isp_stat_bufs_free(struct ispstat *stat)
static int isp_stat_bufs_alloc_iommu(struct ispstat *stat, unsigned int size)
static int isp_stat_bufs_alloc_dma(struct ispstat *stat, unsigned int size)
static int isp_stat_bufs_alloc(struct ispstat *stat, u32 size)
static void isp_stat_queue_event(struct ispstat *stat, int err)
int omap3isp_stat_request_statistics(struct ispstat *stat,
struct omap3isp_stat_data *data)
int omap3isp_stat_config(struct ispstat *stat, void *new_conf)
static int isp_stat_buf_process(struct ispstat *stat, int buf_state)
int omap3isp_stat_pcr_busy(struct ispstat *stat)
int omap3isp_stat_busy(struct ispstat *stat)
static void isp_stat_pcr_enable(struct ispstat *stat, u8 pcr_enable)
void omap3isp_stat_suspend(struct ispstat *stat)
void omap3isp_stat_resume(struct ispstat *stat)
static void isp_stat_try_enable(struct ispstat *stat)
void omap3isp_stat_isr_frame_sync(struct ispstat *stat)
void omap3isp_stat_sbl_overflow(struct ispstat *stat)
int omap3isp_stat_enable(struct ispstat *stat, u8 enable)
int omap3isp_stat_s_stream(struct v4l2_subdev *subdev, int enable)
static void __stat_isr(struct ispstat *stat, int from_dma)
void omap3isp_stat_isr(struct ispstat *stat)
void omap3isp_stat_dma_isr(struct ispstat *stat)
static int isp_stat_init_entities(struct ispstat *stat, const char *name,
const struct v4l2_subdev_ops *sd_ops)
int omap3isp_stat_subscribe_event(struct v4l2_subdev *subdev,
struct v4l2_fh *fh,
struct v4l2_event_subscription *sub)
int omap3isp_stat_unsubscribe_event(struct v4l2_subdev *subdev,
struct v4l2_fh *fh,
struct v4l2_event_subscription *sub)
void omap3isp_stat_unregister_entities(struct ispstat *stat)
int omap3isp_stat_register_entities(struct ispstat *stat,
struct v4l2_device *vdev)
int omap3isp_stat_init(struct ispstat *stat, const char *name,
const struct v4l2_subdev_ops *sd_ops)
void omap3isp_stat_free(struct ispstat *stat)
