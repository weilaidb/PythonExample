static int vxp_reg_offset[VX_REG_MAX] = ;
static inline unsigned long vxp_reg_addr(struct vx_core *_chip, int reg)
static unsigned char vxp_inb(struct vx_core *chip, int offset)
static void vxp_outb(struct vx_core *chip, int offset, unsigned char val)
#undef vx_inb
#define vx_inb(chip,reg)	vxp_inb((struct vx_core *)(chip), VX_##reg)
#undef vx_outb
#define vx_outb(chip,reg,val)	vxp_outb((struct vx_core *)(chip), VX_##reg,val)
static int vx_check_magic(struct vx_core *chip)
#define XX_DSP_RESET_WAIT_TIME		2
static void vxp_reset_dsp(struct vx_core *_chip)
static void vxp_reset_codec(struct vx_core *_chip)
static int vxp_load_xilinx_binary(struct vx_core *_chip, const struct firmware *fw)
static int vxp_load_dsp(struct vx_core *vx, int index, const struct firmware *fw)
static int vxp_test_and_ack(struct vx_core *_chip)
static void vxp_validate_irq(struct vx_core *_chip, int enable)
static void vx_setup_pseudo_dma(struct vx_core *_chip, int do_write)
static void vx_release_pseudo_dma(struct vx_core *_chip)
static void vxp_dma_write(struct vx_core *chip, struct snd_pcm_runtime *runtime,
struct vx_pipe *pipe, int count)
static void vxp_dma_read(struct vx_core *chip, struct snd_pcm_runtime *runtime,
struct vx_pipe *pipe, int count)
static void vxp_write_codec_reg(struct vx_core *chip, int codec, unsigned int data)
void vx_set_mic_boost(struct vx_core *chip, int boost)
static int vx_compute_mic_level(int level)
void vx_set_mic_level(struct vx_core *chip, int level)
static void vxp_change_audio_source(struct vx_core *_chip, int src)
static void vxp_set_clock_source(struct vx_core *_chip, int source)
static void vxp_reset_board(struct vx_core *_chip, int cold_reset)
struct snd_vx_ops snd_vxpocket_ops = ;
