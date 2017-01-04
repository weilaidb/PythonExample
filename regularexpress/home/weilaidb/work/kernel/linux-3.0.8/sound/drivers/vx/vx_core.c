MODULE_AUTHOR("Takashi Iwai <tiwai@suse.de>");
MODULE_DESCRIPTION("Common routines for Digigram VX drivers");
MODULE_LICENSE("GPL");
int snd_vx_check_reg_bit(struct vx_core *chip, int reg, int mask, int bit, int time)
EXPORT_SYMBOL(snd_vx_check_reg_bit);
static int vx_send_irq_dsp(struct vx_core *chip, int num)
static int vx_reset_chk(struct vx_core *chip)
static int vx_transfer_end(struct vx_core *chip, int cmd)
static int vx_read_status(struct vx_core *chip, struct vx_rmh *rmh)
#define MASK_MORE_THAN_1_WORD_COMMAND   0x00008000
#define MASK_1_WORD_COMMAND             0x00ff7fff
int vx_send_msg_nolock(struct vx_core *chip, struct vx_rmh *rmh)
int vx_send_msg(struct vx_core *chip, struct vx_rmh *rmh)
int vx_send_rih_nolock(struct vx_core *chip, int cmd)
int vx_send_rih(struct vx_core *chip, int cmd)
#define END_OF_RESET_WAIT_TIME		500
int snd_vx_load_boot_image(struct vx_core *chip, const struct firmware *boot)
EXPORT_SYMBOL(snd_vx_load_boot_image);
static int vx_test_irq_src(struct vx_core *chip, unsigned int *ret)
static void vx_interrupt(unsigned long private_data)
irqreturn_t snd_vx_irq_handler(int irq, void *dev)
EXPORT_SYMBOL(snd_vx_irq_handler);
static void vx_reset_board(struct vx_core *chip, int cold_reset)
static void vx_proc_read(struct snd_info_entry *entry, struct snd_info_buffer *buffer)
static void vx_proc_init(struct vx_core *chip)
int snd_vx_dsp_boot(struct vx_core *chip, const struct firmware *boot)
EXPORT_SYMBOL(snd_vx_dsp_boot);
int snd_vx_dsp_load(struct vx_core *chip, const struct firmware *dsp)
EXPORT_SYMBOL(snd_vx_dsp_load);
int snd_vx_suspend(struct vx_core *chip, pm_message_t state)
EXPORT_SYMBOL(snd_vx_suspend);
int snd_vx_resume(struct vx_core *chip)
EXPORT_SYMBOL(snd_vx_resume);
struct vx_core *snd_vx_create(struct snd_card *card, struct snd_vx_hardware *hw,
struct snd_vx_ops *ops,
int extra_size)
EXPORT_SYMBOL(snd_vx_create);
static int __init alsa_vx_core_init(void)
static void __exit alsa_vx_core_exit(void)
module_init(alsa_vx_core_init)
module_exit(alsa_vx_core_exit)
