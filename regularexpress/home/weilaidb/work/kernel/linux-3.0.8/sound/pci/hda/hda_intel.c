static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static char *model[SNDRV_CARDS];
static int position_fix[SNDRV_CARDS];
static int bdl_pos_adj[SNDRV_CARDS] = ;
static int probe_mask[SNDRV_CARDS] = ;
static int probe_only[SNDRV_CARDS];
static int single_cmd;
static int enable_msi = -1;
static char *patch[SNDRV_CARDS];
static int beep_mode[SNDRV_CARDS] = ;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for Intel HD audio interface.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for Intel HD audio interface.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable Intel HD audio interface.");
module_param_array(model, charp, NULL, 0444);
MODULE_PARM_DESC(model, "Use the given board model.");
module_param_array(position_fix, int, NULL, 0444);
MODULE_PARM_DESC(position_fix, "DMA pointer read method."
"(0 = auto, 1 = LPIB, 2 = POSBUF, 3 = VIACOMBO).");
module_param_array(bdl_pos_adj, int, NULL, 0644);
MODULE_PARM_DESC(bdl_pos_adj, "BDL position adjustment offset.");
module_param_array(probe_mask, int, NULL, 0444);
MODULE_PARM_DESC(probe_mask, "Bitmask to probe codecs (default = -1).");
module_param_array(probe_only, int, NULL, 0444);
MODULE_PARM_DESC(probe_only, "Only probing and no codec initialization.");
module_param(single_cmd, bool, 0444);
MODULE_PARM_DESC(single_cmd, "Use single command to communicate with codecs "
"(for debugging only).");
module_param(enable_msi, int, 0444);
MODULE_PARM_DESC(enable_msi, "Enable Message Signaled Interrupt (MSI)");
module_param_array(patch, charp, NULL, 0444);
MODULE_PARM_DESC(patch, "Patch file for Intel HD audio interface.");
module_param_array(beep_mode, int, NULL, 0444);
MODULE_PARM_DESC(beep_mode, "Select HDA Beep registration mode "
"(0=off, 1=on, 2=mute switch on/off) (default=1).");
static int power_save = CONFIG_SND_HDA_POWER_SAVE_DEFAULT;
module_param(power_save, int, 0644);
MODULE_PARM_DESC(power_save, "Automatic power-saving timeout "
"(in second, 0 = disable).");
static int power_save_controller = 1;
module_param(power_save_controller, bool, 0644);
MODULE_PARM_DESC(power_save_controller, "Reset controller in power save mode.");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
MODULE_DESCRIPTION("Intel HDA driver");
#define SFX
#define SFX	"hda-intel: "
#define ICH6_REG_GCAP			0x00
#define   ICH6_GCAP_64OK	(1 << 0)
#define   ICH6_GCAP_NSDO	(3 << 1)
#define   ICH6_GCAP_BSS		(31 << 3)
#define   ICH6_GCAP_ISS		(15 << 8)
#define   ICH6_GCAP_OSS		(15 << 12)
#define ICH6_REG_VMIN			0x02
#define ICH6_REG_VMAJ			0x03
#define ICH6_REG_OUTPAY			0x04
#define ICH6_REG_INPAY			0x06
#define ICH6_REG_GCTL			0x08
#define   ICH6_GCTL_RESET	(1 << 0)
#define   ICH6_GCTL_FCNTRL	(1 << 1)
#define   ICH6_GCTL_UNSOL	(1 << 8)
#define ICH6_REG_WAKEEN			0x0c
#define ICH6_REG_STATESTS		0x0e
#define ICH6_REG_GSTS			0x10
#define   ICH6_GSTS_FSTS	(1 << 1)
#define ICH6_REG_INTCTL			0x20
#define ICH6_REG_INTSTS			0x24
#define ICH6_REG_WALLCLK		0x30
#define ICH6_REG_SYNC			0x34
#define ICH6_REG_CORBLBASE		0x40
#define ICH6_REG_CORBUBASE		0x44
#define ICH6_REG_CORBWP			0x48
#define ICH6_REG_CORBRP			0x4a
#define   ICH6_CORBRP_RST	(1 << 15)
#define ICH6_REG_CORBCTL		0x4c
#define   ICH6_CORBCTL_RUN	(1 << 1)
#define   ICH6_CORBCTL_CMEIE	(1 << 0)
#define ICH6_REG_CORBSTS		0x4d
#define   ICH6_CORBSTS_CMEI	(1 << 0)
#define ICH6_REG_CORBSIZE		0x4e
#define ICH6_REG_RIRBLBASE		0x50
#define ICH6_REG_RIRBUBASE		0x54
#define ICH6_REG_RIRBWP			0x58
#define   ICH6_RIRBWP_RST	(1 << 15)
#define ICH6_REG_RINTCNT		0x5a
#define ICH6_REG_RIRBCTL		0x5c
#define   ICH6_RBCTL_IRQ_EN	(1 << 0)
#define   ICH6_RBCTL_DMA_EN	(1 << 1)
#define   ICH6_RBCTL_OVERRUN_EN	(1 << 2)
#define ICH6_REG_RIRBSTS		0x5d
#define   ICH6_RBSTS_IRQ	(1 << 0)
#define   ICH6_RBSTS_OVERRUN	(1 << 2)
#define ICH6_REG_RIRBSIZE		0x5e
#define ICH6_REG_IC			0x60
#define ICH6_REG_IR			0x64
#define ICH6_REG_IRS			0x68
#define   ICH6_IRS_VALID	(1<<1)
#define   ICH6_IRS_BUSY		(1<<0)
#define ICH6_REG_DPLBASE		0x70
#define ICH6_REG_DPUBASE		0x74
#define   ICH6_DPLBASE_ENABLE	0x1
enum ;
#define ICH6_REG_SD_CTL			0x00
#define ICH6_REG_SD_STS			0x03
#define ICH6_REG_SD_LPIB		0x04
#define ICH6_REG_SD_CBL			0x08
#define ICH6_REG_SD_LVI			0x0c
#define ICH6_REG_SD_FIFOW		0x0e
#define ICH6_REG_SD_FIFOSIZE		0x10
#define ICH6_REG_SD_FORMAT		0x12
#define ICH6_REG_SD_BDLPL		0x18
#define ICH6_REG_SD_BDLPU		0x1c
#define ICH6_PCIREG_TCSEL	0x44
#define ICH6_NUM_CAPTURE	4
#define ICH6_NUM_PLAYBACK	4
#define ULI_NUM_CAPTURE		5
#define ULI_NUM_PLAYBACK	6
#define ATIHDMI_NUM_CAPTURE	0
#define ATIHDMI_NUM_PLAYBACK	1
#define TERA_NUM_CAPTURE	3
#define TERA_NUM_PLAYBACK	4
#define MAX_AZX_DEV		16
#define BDL_SIZE		4096
#define AZX_MAX_BDL_ENTRIES	(BDL_SIZE / 16)
#define AZX_MAX_FRAG		32
#define AZX_MAX_BUF_SIZE	(1024*1024*1024)
#define RIRB_INT_RESPONSE	0x01
#define RIRB_INT_OVERRUN	0x04
#define RIRB_INT_MASK		0x05
#define AZX_MAX_CODECS		8
#define AZX_DEFAULT_CODECS	4
#define STATESTS_INT_MASK	((1 << AZX_MAX_CODECS) - 1)
#define SD_CTL_STREAM_RESET	0x01
#define SD_CTL_DMA_START	0x02
#define SD_CTL_STRIPE		(3 << 16)
#define SD_CTL_TRAFFIC_PRIO	(1 << 18)
#define SD_CTL_DIR		(1 << 19)
#define SD_CTL_STREAM_TAG_MASK	(0xf << 20)
#define SD_CTL_STREAM_TAG_SHIFT	20
#define SD_INT_DESC_ERR		0x10
#define SD_INT_FIFO_ERR		0x08
#define SD_INT_COMPLETE		0x04
#define SD_INT_MASK		(SD_INT_DESC_ERR|SD_INT_FIFO_ERR|\
SD_INT_COMPLETE)
#define SD_STS_FIFO_READY	0x20
#define ICH6_INT_ALL_STREAM	0xff
#define ICH6_INT_CTRL_EN	0x40000000
#define ICH6_INT_GLOBAL_EN	0x80000000
#define ICH6_MAX_CORB_ENTRIES	256
#define ICH6_MAX_RIRB_ENTRIES	256
enum ;
#define ATI_SB450_HDAUDIO_MISC_CNTR2_ADDR   0x42
#define ATI_SB450_HDAUDIO_ENABLE_SNOOP      0x02
#define NVIDIA_HDA_TRANSREG_ADDR      0x4e
#define NVIDIA_HDA_ENABLE_COHBITS     0x0f
#define NVIDIA_HDA_ISTRM_COH          0x4d
#define NVIDIA_HDA_OSTRM_COH          0x4c
#define NVIDIA_HDA_ENABLE_COHBIT      0x01
#define INTEL_SCH_HDA_DEVC      0x78
#define INTEL_SCH_HDA_DEVC_NOSNOOP       (0x1<<11)
#define VIA_IN_STREAM0_FIFO_SIZE_OFFSET	0x90
#define VIA_HDAC_DEVICE_ID		0x3288
#define PCI_CLASS_MULTIMEDIA_HD_AUDIO	0x0403
struct azx_dev ;
struct azx_rb ;
struct azx ;
enum ;
#define AZX_DCAPS_NO_TCSEL	(1 << 8)
#define AZX_DCAPS_NO_MSI	(1 << 9)
#define AZX_DCAPS_ATI_SNOOP	(1 << 10)
#define AZX_DCAPS_NVIDIA_SNOOP	(1 << 11)
#define AZX_DCAPS_SCH_SNOOP	(1 << 12)
#define AZX_DCAPS_RIRB_DELAY	(1 << 13)
#define AZX_DCAPS_RIRB_PRE_DELAY (1 << 14)
#define AZX_DCAPS_CTX_WORKAROUND (1 << 15)
#define AZX_DCAPS_POSFIX_LPIB	(1 << 16)
#define AZX_DCAPS_POSFIX_VIA	(1 << 17)
#define AZX_DCAPS_NO_64BIT	(1 << 18)
#define AZX_DCAPS_SYNC_WRITE	(1 << 19)
#define AZX_DCAPS_PRESET_ATI_SB \
(AZX_DCAPS_ATI_SNOOP | AZX_DCAPS_NO_TCSEL | \
AZX_DCAPS_SYNC_WRITE | AZX_DCAPS_POSFIX_LPIB)
#define AZX_DCAPS_PRESET_ATI_HDMI \
(AZX_DCAPS_NO_TCSEL | AZX_DCAPS_SYNC_WRITE | AZX_DCAPS_POSFIX_LPIB)
#define AZX_DCAPS_PRESET_NVIDIA \
(AZX_DCAPS_NVIDIA_SNOOP | AZX_DCAPS_RIRB_DELAY | AZX_DCAPS_NO_MSI)
static char *driver_short_names[] __devinitdata = ;
#define azx_writel(chip,reg,value) \
writel(value, (chip)->remap_addr + ICH6_REG_##reg)
#define azx_readl(chip,reg) \
readl((chip)->remap_addr + ICH6_REG_##reg)
#define azx_writew(chip,reg,value) \
writew(value, (chip)->remap_addr + ICH6_REG_##reg)
#define azx_readw(chip,reg) \
readw((chip)->remap_addr + ICH6_REG_##reg)
#define azx_writeb(chip,reg,value) \
writeb(value, (chip)->remap_addr + ICH6_REG_##reg)
#define azx_readb(chip,reg) \
readb((chip)->remap_addr + ICH6_REG_##reg)
#define azx_sd_writel(dev,reg,value) \
writel(value, (dev)->sd_addr + ICH6_REG_##reg)
#define azx_sd_readl(dev,reg) \
readl((dev)->sd_addr + ICH6_REG_##reg)
#define azx_sd_writew(dev,reg,value) \
writew(value, (dev)->sd_addr + ICH6_REG_##reg)
#define azx_sd_readw(dev,reg) \
readw((dev)->sd_addr + ICH6_REG_##reg)
#define azx_sd_writeb(dev,reg,value) \
writeb(value, (dev)->sd_addr + ICH6_REG_##reg)
#define azx_sd_readb(dev,reg) \
readb((dev)->sd_addr + ICH6_REG_##reg)
#define get_azx_dev(substream) (substream->runtime->private_data)
static int azx_acquire_irq(struct azx *chip, int do_disconnect);
static int azx_send_cmd(struct hda_bus *bus, unsigned int val);
static int azx_alloc_cmd_io(struct azx *chip)
static void azx_init_cmd_io(struct azx *chip)
static void azx_free_cmd_io(struct azx *chip)
static unsigned int azx_command_addr(u32 cmd)
static unsigned int azx_response_addr(u32 res)
static int azx_corb_send_cmd(struct hda_bus *bus, u32 val)
#define ICH6_RIRB_EX_UNSOL_EV	(1<<4)
static void azx_update_rirb(struct azx *chip)
static unsigned int azx_rirb_get_response(struct hda_bus *bus,
unsigned int addr)
static int azx_single_wait_for_response(struct azx *chip, unsigned int addr)
static int azx_single_send_cmd(struct hda_bus *bus, u32 val)
static unsigned int azx_single_get_response(struct hda_bus *bus,
unsigned int addr)
static int azx_send_cmd(struct hda_bus *bus, unsigned int val)
static unsigned int azx_get_response(struct hda_bus *bus,
unsigned int addr)
static void azx_power_notify(struct hda_bus *bus);
static int azx_reset(struct azx *chip, int full_reset)
static void azx_int_enable(struct azx *chip)
static void azx_int_disable(struct azx *chip)
static void azx_int_clear(struct azx *chip)
static void azx_stream_start(struct azx *chip, struct azx_dev *azx_dev)
static void azx_stream_clear(struct azx *chip, struct azx_dev *azx_dev)
static void azx_stream_stop(struct azx *chip, struct azx_dev *azx_dev)
static void azx_init_chip(struct azx *chip, int full_reset)
static void update_pci_byte(struct pci_dev *pci, unsigned int reg,
unsigned char mask, unsigned char val)
static void azx_init_pci(struct azx *chip)
static int azx_position_ok(struct azx *chip, struct azx_dev *azx_dev);
static irqreturn_t azx_interrupt(int irq, void *dev_id)
static int setup_bdle(struct snd_pcm_substream *substream,
struct azx_dev *azx_dev, u32 **bdlp,
int ofs, int size, int with_ioc)
static int azx_setup_periods(struct azx *chip,
struct snd_pcm_substream *substream,
struct azx_dev *azx_dev)
static void azx_stream_reset(struct azx *chip, struct azx_dev *azx_dev)
static int azx_setup_controller(struct azx *chip, struct azx_dev *azx_dev)
static int probe_codec(struct azx *chip, int addr)
static int azx_attach_pcm_stream(struct hda_bus *bus, struct hda_codec *codec,
struct hda_pcm *cpcm);
static void azx_stop_chip(struct azx *chip);
static void azx_bus_reset(struct hda_bus *bus)
static unsigned int azx_max_codecs[AZX_NUM_DRIVERS] __devinitdata = ;
static int __devinit azx_codec_create(struct azx *chip, const char *model)
static int __devinit azx_codec_configure(struct azx *chip)
static inline struct azx_dev *
azx_assign_device(struct azx *chip, struct snd_pcm_substream *substream)
static inline void azx_release_device(struct azx_dev *azx_dev)
static struct snd_pcm_hardware azx_pcm_hw = ;
struct azx_pcm ;
static int azx_pcm_open(struct snd_pcm_substream *substream)
static int azx_pcm_close(struct snd_pcm_substream *substream)
static int azx_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int azx_pcm_hw_free(struct snd_pcm_substream *substream)
static int azx_pcm_prepare(struct snd_pcm_substream *substream)
static int azx_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static unsigned int azx_via_get_position(struct azx *chip,
struct azx_dev *azx_dev)
static unsigned int azx_get_position(struct azx *chip,
struct azx_dev *azx_dev)
static snd_pcm_uframes_t azx_pcm_pointer(struct snd_pcm_substream *substream)
static int azx_position_ok(struct azx *chip, struct azx_dev *azx_dev)
static void azx_irq_pending_work(struct work_struct *work)
static void azx_clear_irq_pending(struct azx *chip)
static struct snd_pcm_ops azx_pcm_ops = ;
static void azx_pcm_free(struct snd_pcm *pcm)
static int
azx_attach_pcm_stream(struct hda_bus *bus, struct hda_codec *codec,
struct hda_pcm *cpcm)
static int __devinit azx_mixer_create(struct azx *chip)
static int __devinit azx_init_stream(struct azx *chip)
static int azx_acquire_irq(struct azx *chip, int do_disconnect)
static void azx_stop_chip(struct azx *chip)
static void azx_power_notify(struct hda_bus *bus)
static int snd_hda_codecs_inuse(struct hda_bus *bus)
static int azx_suspend(struct pci_dev *pci, pm_message_t state)
static int azx_resume(struct pci_dev *pci)
static int azx_halt(struct notifier_block *nb, unsigned long event, void *buf)
static void azx_notifier_register(struct azx *chip)
static void azx_notifier_unregister(struct azx *chip)
static int azx_free(struct azx *chip)
static int azx_dev_free(struct snd_device *device)
static struct snd_pci_quirk position_fix_list[] __devinitdata = ;
static int __devinit check_position_fix(struct azx *chip, int fix)
static struct snd_pci_quirk probe_mask_list[] __devinitdata = ;
#define AZX_FORCE_CODEC_MASK	0x100
static void __devinit check_probe_mask(struct azx *chip, int dev)
static struct snd_pci_quirk msi_black_list[] __devinitdata = ;
static void __devinit check_msi(struct azx *chip)
static int __devinit azx_create(struct snd_card *card, struct pci_dev *pci,
int dev, unsigned int driver_caps,
struct azx **rchip)
static void power_down_all_codecs(struct azx *chip)
static int __devinit azx_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit azx_remove(struct pci_dev *pci)
static DEFINE_PCI_DEVICE_TABLE(azx_ids) = ;
MODULE_DEVICE_TABLE(pci, azx_ids);
static struct pci_driver driver = ;
static int __init alsa_card_azx_init(void)
static void __exit alsa_card_azx_exit(void)
module_init(alsa_card_azx_init)
module_exit(alsa_card_azx_exit)
