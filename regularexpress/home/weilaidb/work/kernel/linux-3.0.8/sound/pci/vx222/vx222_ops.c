static int vx2_reg_offset[VX_REG_MAX] = ;
static int vx2_reg_index[VX_REG_MAX] = ;
static inline unsigned long vx2_reg_addr(struct vx_core *_chip, int reg)
static unsigned char vx2_inb(struct vx_core *chip, int offset)
static void vx2_outb(struct vx_core *chip, int offset, unsigned char val)
static unsigned int vx2_inl(struct vx_core *chip, int offset)
static void vx2_outl(struct vx_core *chip, int offset, unsigned int val)
#undef vx_inb
#define vx_inb(chip,reg)	vx2_inb((struct vx_core*)(chip), VX_##reg)
#undef vx_outb
#define vx_outb(chip,reg,val)	vx2_outb((struct vx_core*)(chip), VX_##reg, val)
#undef vx_inl
#define vx_inl(chip,reg)	vx2_inl((struct vx_core*)(chip), VX_##reg)
#undef vx_outl
#define vx_outl(chip,reg,val)	vx2_outl((struct vx_core*)(chip), VX_##reg, val)
#define XX_DSP_RESET_WAIT_TIME		2
static void vx2_reset_dsp(struct vx_core *_chip)
static int vx2_test_xilinx(struct vx_core *_chip)
static void vx2_setup_pseudo_dma(struct vx_core *chip, int do_write)
static inline void vx2_release_pseudo_dma(struct vx_core *chip)
static void vx2_dma_write(struct vx_core *chip, struct snd_pcm_runtime *runtime,
struct vx_pipe *pipe, int count)
static void vx2_dma_read(struct vx_core *chip, struct snd_pcm_runtime *runtime,
struct vx_pipe *pipe, int count)
#define VX_XILINX_RESET_MASK        0x40000000
#define VX_USERBIT0_MASK            0x00000004
#define VX_USERBIT1_MASK            0x00000020
#define VX_CNTRL_REGISTER_VALUE     0x00172012
static int put_xilinx_data(struct vx_core *chip, unsigned int port, unsigned int counts, unsigned char data)
static int vx2_load_xilinx_binary(struct vx_core *chip, const struct firmware *xilinx)
static int vx2_load_dsp(struct vx_core *vx, int index, const struct firmware *dsp)
static int vx2_test_and_ack(struct vx_core *chip)
static void vx2_validate_irq(struct vx_core *_chip, int enable)
static void vx2_write_codec_reg(struct vx_core *chip, unsigned int data)
#define AKM_CODEC_POWER_CONTROL_CMD 0xA007
#define AKM_CODEC_RESET_ON_CMD      0xA100
#define AKM_CODEC_RESET_OFF_CMD     0xA103
#define AKM_CODEC_CLOCK_FORMAT_CMD  0xA240
#define AKM_CODEC_MUTE_CMD          0xA38D
#define AKM_CODEC_UNMUTE_CMD        0xA30D
#define AKM_CODEC_LEFT_LEVEL_CMD    0xA400
#define AKM_CODEC_RIGHT_LEVEL_CMD   0xA500
static const u8 vx2_akm_gains_lut[VX2_AKM_LEVEL_MAX+1] = ;
static void vx2_write_akm(struct vx_core *chip, int reg, unsigned int data)
static void vx2_old_write_codec_bit(struct vx_core *chip, int codec, unsigned int data)
static void vx2_reset_codec(struct vx_core *_chip)
static void vx2_change_audio_source(struct vx_core *_chip, int src)
static void vx2_set_clock_source(struct vx_core *_chip, int source)
static void vx2_reset_board(struct vx_core *_chip, int cold_reset)
#define V2_MICRO_LEVEL_RANGE        (318 - 255)
static void vx2_set_input_level(struct snd_vx222 *chip)
#define MIC_LEVEL_MAX	0xff
static const DECLARE_TLV_DB_SCALE(db_scale_mic, -6450, 50, 0);
static int vx_input_level_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int vx_input_level_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int vx_input_level_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int vx_mic_level_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int vx_mic_level_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int vx_mic_level_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new vx_control_input_level = ;
static struct snd_kcontrol_new vx_control_mic_level = ;
static int vx2_add_mic_controls(struct vx_core *_chip)
struct snd_vx_ops vx222_ops = ;
struct snd_vx_ops vx222_old_ops = ;
