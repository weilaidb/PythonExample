static void calculate_output_format_register(struct saa7146_dev* saa, u32 palette, u32* clip_format)
static void calculate_hps_source_and_sync(struct saa7146_dev *dev, int source, int sync, u32* hps_ctrl)
static void calculate_hxo_and_hyo(struct saa7146_vv *vv, u32* hps_h_scale, u32* hps_ctrl)
static struct  hps_h_coeff_tab [] = ;
static u8 h_attenuation[] = ;
static int calculate_h_scale_registers(struct saa7146_dev *dev,
int in_x, int out_x, int flip_lr,
u32* hps_ctrl, u32* hps_v_gain, u32* hps_h_prescale, u32* hps_h_scale)
static struct  hps_v_coeff_tab [] = ;
static u16 v_attenuation[] = ;
static int calculate_v_scale_registers(struct saa7146_dev *dev, enum v4l2_field field,
int in_y, int out_y, u32* hps_v_scale, u32* hps_v_gain)
static int sort_and_eliminate(u32* values, int* count)
static void calculate_clipping_registers_rect(struct saa7146_dev *dev, struct saa7146_fh *fh,
struct saa7146_video_dma *vdma2, u32* clip_format, u32* arbtr_ctrl, enum v4l2_field field)
static void saa7146_disable_clipping(struct saa7146_dev *dev)
static void saa7146_set_clipping_rect(struct saa7146_fh *fh)
static void saa7146_set_window(struct saa7146_dev *dev, int width, int height, enum v4l2_field field)
static void saa7146_set_position(struct saa7146_dev *dev, int w_x, int w_y, int w_height, enum v4l2_field field, u32 pixelformat)
static void saa7146_set_output_format(struct saa7146_dev *dev, unsigned long palette)
void saa7146_set_hps_source_and_sync(struct saa7146_dev *dev, int source, int sync)
EXPORT_SYMBOL_GPL(saa7146_set_hps_source_and_sync);
int saa7146_enable_overlay(struct saa7146_fh *fh)
void saa7146_disable_overlay(struct saa7146_fh *fh)
void saa7146_write_out_dma(struct saa7146_dev* dev, int which, struct saa7146_video_dma* vdma)
static int calculate_video_dma_grab_packed(struct saa7146_dev* dev, struct saa7146_buf *buf)
static int calc_planar_422(struct saa7146_vv *vv, struct saa7146_buf *buf, struct saa7146_video_dma *vdma2, struct saa7146_video_dma *vdma3)
static int calc_planar_420(struct saa7146_vv *vv, struct saa7146_buf *buf, struct saa7146_video_dma *vdma2, struct saa7146_video_dma *vdma3)
static int calculate_video_dma_grab_planar(struct saa7146_dev* dev, struct saa7146_buf *buf)
static void program_capture_engine(struct saa7146_dev *dev, int planar)
void saa7146_set_capture(struct saa7146_dev *dev, struct saa7146_buf *buf, struct saa7146_buf *next)
