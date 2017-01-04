MODULE_AUTHOR("Clemens Ladisch <clemens@ladisch.de>");
MODULE_DESCRIPTION("Brooktree Bt87x audio driver");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = ;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static int digital_rate[SNDRV_CARDS];
static int load_all;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for Bt87x soundcard");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for Bt87x soundcard");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable Bt87x soundcard");
module_param_array(digital_rate, int, NULL, 0444);
MODULE_PARM_DESC(digital_rate, "Digital input rate for Bt87x soundcard");
module_param(load_all, bool, 0444);
MODULE_PARM_DESC(load_all, "Allow to load the non-whitelisted cards");
#define REG_INT_STAT		0x100
#define REG_INT_MASK		0x104
#define REG_GPIO_DMA_CTL	0x10c
#define REG_PACKET_LEN		0x110
#define REG_RISC_STRT_ADD	0x114
#define REG_RISC_COUNT		0x120
#define INT_OFLOW	(1 <<  3)
#define INT_RISCI	(1 << 11)
#define INT_FBUS	(1 << 12)
#define INT_FTRGT	(1 << 13)
#define INT_FDSR	(1 << 14)
#define INT_PPERR	(1 << 15)
#define INT_RIPERR	(1 << 16)
#define INT_PABORT	(1 << 17)
#define INT_OCERR	(1 << 18)
#define INT_SCERR	(1 << 19)
#define INT_RISC_EN	(1 << 27)
#define INT_RISCS_SHIFT	      28
#define CTL_FIFO_ENABLE		(1 <<  0)
#define CTL_RISC_ENABLE		(1 <<  1)
#define CTL_PKTP_4		(0 <<  2)
#define CTL_PKTP_8		(1 <<  2)
#define CTL_PKTP_16		(2 <<  2)
#define CTL_ACAP_EN		(1 <<  4)
#define CTL_DA_APP		(1 <<  5)
#define CTL_DA_IOM_AFE		(0 <<  6)
#define CTL_DA_IOM_DA		(1 <<  6)
#define CTL_DA_SDR_SHIFT	       8
#define CTL_DA_SDR_MASK		(0xf<< 8)
#define CTL_DA_LMT		(1 << 12)
#define CTL_DA_ES2		(1 << 13)
#define CTL_DA_SBR		(1 << 14)
#define CTL_DA_DPM		(1 << 15)
#define CTL_DA_LRD_SHIFT	      16
#define CTL_DA_MLB		(1 << 21)
#define CTL_DA_LRI		(1 << 22)
#define CTL_DA_SCE		(1 << 23)
#define CTL_A_SEL_STV		(0 << 24)
#define CTL_A_SEL_SFM		(1 << 24)
#define CTL_A_SEL_SML		(2 << 24)
#define CTL_A_SEL_SMXC		(3 << 24)
#define CTL_A_SEL_SHIFT		      24
#define CTL_A_SEL_MASK		(3 << 24)
#define CTL_A_PWRDN		(1 << 26)
#define CTL_A_G2X		(1 << 27)
#define CTL_A_GAIN_SHIFT	      28
#define CTL_A_GAIN_MASK		(0xf<<28)
#define RISC_WRITE	(0x1 << 28)
#define RISC_WRITEC	(0x5 << 28)
#define RISC_SKIP	(0x2 << 28)
#define RISC_JUMP	(0x7 << 28)
#define RISC_SYNC	(0x8 << 28)
#define RISC_BYTES_ENABLE	(0xf << 12)
#define RISC_RESYNC		(  1 << 15)
#define RISC_SET_STATUS_SHIFT	        16
#define RISC_RESET_STATUS_SHIFT	        20
#define RISC_IRQ		(  1 << 24)
#define RISC_EOL		(  1 << 26)
#define RISC_SOL		(  1 << 27)
#define RISC_SYNC_FM1	0x6
#define RISC_SYNC_VRO	0xc
#define ANALOG_CLOCK 1792000
#define CLOCK_DIV_MIN 1
#define CLOCK_DIV_MIN 4
#define CLOCK_DIV_MAX 15
#define ERROR_INTERRUPTS (INT_FBUS | INT_FTRGT | INT_PPERR | \
INT_RIPERR | INT_PABORT | INT_OCERR)
#define MY_INTERRUPTS (INT_RISCI | ERROR_INTERRUPTS)
#define MAX_RISC_SIZE ((1 + 255 + (PAGE_ALIGN(255 * 4092) / PAGE_SIZE - 1) + 1 + 1) * 8)
enum snd_bt87x_boardid ;
struct snd_bt87x_board ;
static __devinitdata struct snd_bt87x_board snd_bt87x_boards[] = ;
struct snd_bt87x ;
enum ;
static inline u32 snd_bt87x_readl(struct snd_bt87x *chip, u32 reg)
static inline void snd_bt87x_writel(struct snd_bt87x *chip, u32 reg, u32 value)
static int snd_bt87x_create_risc(struct snd_bt87x *chip, struct snd_pcm_substream *substream,
unsigned int periods, unsigned int period_bytes)
static void snd_bt87x_free_risc(struct snd_bt87x *chip)
static void snd_bt87x_pci_error(struct snd_bt87x *chip, unsigned int status)
static irqreturn_t snd_bt87x_interrupt(int irq, void *dev_id)
static struct snd_pcm_hardware snd_bt87x_digital_hw = ;
static struct snd_pcm_hardware snd_bt87x_analog_hw = ;
static int snd_bt87x_set_digital_hw(struct snd_bt87x *chip, struct snd_pcm_runtime *runtime)
static int snd_bt87x_set_analog_hw(struct snd_bt87x *chip, struct snd_pcm_runtime *runtime)
static int snd_bt87x_pcm_open(struct snd_pcm_substream *substream)
static int snd_bt87x_close(struct snd_pcm_substream *substream)
static int snd_bt87x_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_bt87x_hw_free(struct snd_pcm_substream *substream)
static int snd_bt87x_prepare(struct snd_pcm_substream *substream)
static int snd_bt87x_start(struct snd_bt87x *chip)
static int snd_bt87x_stop(struct snd_bt87x *chip)
static int snd_bt87x_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t snd_bt87x_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_bt87x_pcm_ops = ;
static int snd_bt87x_capture_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *info)
static int snd_bt87x_capture_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *value)
static int snd_bt87x_capture_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *value)
static struct snd_kcontrol_new snd_bt87x_capture_volume = ;
#define snd_bt87x_capture_boost_info	snd_ctl_boolean_mono_info
static int snd_bt87x_capture_boost_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *value)
static int snd_bt87x_capture_boost_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *value)
static struct snd_kcontrol_new snd_bt87x_capture_boost = ;
static int snd_bt87x_capture_source_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *info)
static int snd_bt87x_capture_source_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *value)
static int snd_bt87x_capture_source_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *value)
static struct snd_kcontrol_new snd_bt87x_capture_source = ;
static int snd_bt87x_free(struct snd_bt87x *chip)
static int snd_bt87x_dev_free(struct snd_device *device)
static int __devinit snd_bt87x_pcm(struct snd_bt87x *chip, int device, char *name)
static int __devinit snd_bt87x_create(struct snd_card *card,
struct pci_dev *pci,
struct snd_bt87x **rchip)
#define BT_DEVICE(chip, subvend, subdev, id) \
static DEFINE_PCI_DEVICE_TABLE(snd_bt87x_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_bt87x_ids);
static struct  blacklist[] __devinitdata = ;
static struct pci_driver driver;
static int __devinit snd_bt87x_detect_card(struct pci_dev *pci)
static int __devinit snd_bt87x_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_bt87x_remove(struct pci_dev *pci)
static DEFINE_PCI_DEVICE_TABLE(snd_bt87x_default_ids) = ;
static struct pci_driver driver = ;
static int __init alsa_card_bt87x_init(void)
static void __exit alsa_card_bt87x_exit(void)
module_init(alsa_card_bt87x_init)
module_exit(alsa_card_bt87x_exit)
