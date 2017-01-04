#define FIMC_CORE_H_
#define err(fmt, args...) \
printk(KERN_ERR "%s:%d: " fmt "\n", __func__, __LINE__, ##args)
#define dbg(fmt, args...) \
pr_debug("%s:%d: " fmt "\n", __func__, __LINE__, ##args)
#define FIMC_SHUTDOWN_TIMEOUT	((100*HZ)/1000)
#define MAX_FIMC_CLOCKS		3
#define MODULE_NAME		"s5p-fimc"
#define FIMC_MAX_DEVS		4
#define FIMC_MAX_OUT_BUFS	4
#define SCALER_MAX_HRATIO	64
#define SCALER_MAX_VRATIO	64
#define DMA_MIN_SIZE		8
enum ;
enum fimc_dev_flags ;
#define fimc_m2m_active(dev) test_bit(ST_OUTDMA_RUN, &(dev)->state)
#define fimc_m2m_pending(dev) test_bit(ST_M2M_PEND, &(dev)->state)
#define fimc_capture_running(dev) test_bit(ST_CAPT_RUN, &(dev)->state)
#define fimc_capture_pending(dev) test_bit(ST_CAPT_PEND, &(dev)->state)
enum fimc_datapath ;
enum fimc_color_fmt ;
#define fimc_fmt_is_rgb(x) ((x) & 0x10)
#define	S5P_FIMC_LSB_CRCB	S5P_CIOCTRL_ORDER422_2P_LSB_CRCB
#define	S5P_FIMC_EFFECT_ORIGINAL	S5P_CIIMGEFF_FIN_BYPASS
#define	S5P_FIMC_EFFECT_ARBITRARY	S5P_CIIMGEFF_FIN_ARBITRARY
#define	S5P_FIMC_EFFECT_NEGATIVE	S5P_CIIMGEFF_FIN_NEGATIVE
#define	S5P_FIMC_EFFECT_ARTFREEZE	S5P_CIIMGEFF_FIN_ARTFREEZE
#define	S5P_FIMC_EFFECT_EMBOSSING	S5P_CIIMGEFF_FIN_EMBOSSING
#define	S5P_FIMC_EFFECT_SIKHOUETTE	S5P_CIIMGEFF_FIN_SILHOUETTE
#define	FIMC_PARAMS		(1 << 0)
#define	FIMC_SRC_ADDR		(1 << 1)
#define	FIMC_DST_ADDR		(1 << 2)
#define	FIMC_SRC_FMT		(1 << 3)
#define	FIMC_DST_FMT		(1 << 4)
#define	FIMC_CTX_M2M		(1 << 5)
#define	FIMC_CTX_CAP		(1 << 6)
#define	FIMC_CTX_SHUT		(1 << 7)
#define	FIMC_IN_DMA_ACCESS_TILED	(1 << 0)
#define	FIMC_IN_DMA_ACCESS_LINEAR	(0 << 0)
#define	FIMC_OUT_DMA_ACCESS_TILED	(1 << 1)
#define	FIMC_OUT_DMA_ACCESS_LINEAR	(0 << 1)
#define	FIMC_SCAN_MODE_PROGRESSIVE	(0 << 2)
#define	FIMC_SCAN_MODE_INTERLACED	(1 << 2)
#define	FIMC_COLOR_RANGE_WIDE		(0 << 3)
#define	FIMC_COLOR_RANGE_NARROW		(1 << 3)
#define	FLIP_NONE			0
#define	FLIP_X_AXIS			1
#define	FLIP_Y_AXIS			2
#define	FLIP_XY_AXIS			(FLIP_X_AXIS | FLIP_Y_AXIS)
struct fimc_fmt ;
struct fimc_dma_offset ;
struct fimc_effect ;
struct fimc_scaler ;
struct fimc_addr ;
struct fimc_vid_buffer ;
struct fimc_frame ;
struct fimc_m2m_device ;
struct fimc_vid_cap ;
struct fimc_pix_limit ;
struct samsung_fimc_variant ;
struct samsung_fimc_driverdata ;
struct fimc_ctx;
struct fimc_dev ;
struct fimc_ctx ;
static inline bool fimc_capture_active(struct fimc_dev *fimc)
static inline void fimc_ctx_state_lock_set(u32 state, struct fimc_ctx *ctx)
static inline bool fimc_ctx_state_is_set(u32 mask, struct fimc_ctx *ctx)
static inline int tiled_fmt(struct fimc_fmt *fmt)
static inline void fimc_hw_clear_irq(struct fimc_dev *dev)
static inline void fimc_hw_enable_scaler(struct fimc_dev *dev, bool on)
static inline void fimc_hw_activate_input_dma(struct fimc_dev *dev, bool on)
static inline void fimc_hw_dis_capture(struct fimc_dev *dev)
static inline void fimc_hw_set_dma_seq(struct fimc_dev *dev, u32 mask)
static inline struct fimc_frame *ctx_get_frame(struct fimc_ctx *ctx,
enum v4l2_buf_type type)
static inline u32 fimc_hw_get_frame_index(struct fimc_dev *dev)
void fimc_hw_reset(struct fimc_dev *fimc);
void fimc_hw_set_rotation(struct fimc_ctx *ctx);
void fimc_hw_set_target_format(struct fimc_ctx *ctx);
void fimc_hw_set_out_dma(struct fimc_ctx *ctx);
void fimc_hw_en_lastirq(struct fimc_dev *fimc, int enable);
void fimc_hw_en_irq(struct fimc_dev *fimc, int enable);
void fimc_hw_set_prescaler(struct fimc_ctx *ctx);
void fimc_hw_set_mainscaler(struct fimc_ctx *ctx);
void fimc_hw_en_capture(struct fimc_ctx *ctx);
void fimc_hw_set_effect(struct fimc_ctx *ctx);
void fimc_hw_set_in_dma(struct fimc_ctx *ctx);
void fimc_hw_set_input_path(struct fimc_ctx *ctx);
void fimc_hw_set_output_path(struct fimc_ctx *ctx);
void fimc_hw_set_input_addr(struct fimc_dev *fimc, struct fimc_addr *paddr);
void fimc_hw_set_output_addr(struct fimc_dev *fimc, struct fimc_addr *paddr,
int index);
int fimc_hw_set_camera_source(struct fimc_dev *fimc,
struct s5p_fimc_isp_info *cam);
int fimc_hw_set_camera_offset(struct fimc_dev *fimc, struct fimc_frame *f);
int fimc_hw_set_camera_polarity(struct fimc_dev *fimc,
struct s5p_fimc_isp_info *cam);
int fimc_hw_set_camera_type(struct fimc_dev *fimc,
struct s5p_fimc_isp_info *cam);
int fimc_vidioc_enum_fmt_mplane(struct file *file, void *priv,
struct v4l2_fmtdesc *f);
int fimc_vidioc_g_fmt_mplane(struct file *file, void *priv,
struct v4l2_format *f);
int fimc_vidioc_try_fmt_mplane(struct file *file, void *priv,
struct v4l2_format *f);
int fimc_vidioc_queryctrl(struct file *file, void *priv,
struct v4l2_queryctrl *qc);
int fimc_vidioc_g_ctrl(struct file *file, void *priv,
struct v4l2_control *ctrl);
int fimc_try_crop(struct fimc_ctx *ctx, struct v4l2_crop *cr);
int check_ctrl_val(struct fimc_ctx *ctx,  struct v4l2_control *ctrl);
int fimc_s_ctrl(struct fimc_ctx *ctx, struct v4l2_control *ctrl);
struct fimc_fmt *find_format(struct v4l2_format *f, unsigned int mask);
struct fimc_fmt *find_mbus_format(struct v4l2_mbus_framefmt *f,
unsigned int mask);
int fimc_check_scaler_ratio(int sw, int sh, int dw, int dh, int rot);
int fimc_set_scaler_info(struct fimc_ctx *ctx);
int fimc_prepare_config(struct fimc_ctx *ctx, u32 flags);
int fimc_prepare_addr(struct fimc_ctx *ctx, struct vb2_buffer *vb,
struct fimc_frame *frame, struct fimc_addr *paddr);
int fimc_register_capture_device(struct fimc_dev *fimc);
void fimc_unregister_capture_device(struct fimc_dev *fimc);
int fimc_sensor_sd_init(struct fimc_dev *fimc, int index);
int fimc_vid_cap_buf_queue(struct fimc_dev *fimc,
struct fimc_vid_buffer *fimc_vb);
static inline void fimc_activate_capture(struct fimc_ctx *ctx)
static inline void fimc_deactivate_capture(struct fimc_dev *fimc)
static inline void active_queue_add(struct fimc_vid_cap *vid_cap,
struct fimc_vid_buffer *buf)
static inline struct fimc_vid_buffer *
active_queue_pop(struct fimc_vid_cap *vid_cap)
static inline void fimc_pending_queue_add(struct fimc_vid_cap *vid_cap,
struct fimc_vid_buffer *buf)
static inline struct fimc_vid_buffer *
pending_queue_pop(struct fimc_vid_cap *vid_cap)
