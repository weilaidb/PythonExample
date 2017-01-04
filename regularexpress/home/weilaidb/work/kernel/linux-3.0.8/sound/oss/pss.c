#define REG(x)	(devc->base+x)
#define	PSS_DATA	0
#define	PSS_STATUS	2
#define PSS_CONTROL	2
#define	PSS_ID		4
#define	PSS_IRQACK	4
#define	PSS_PIO		0x1a
#define CONF_PSS	0x10
#define CONF_WSS	0x12
#define CONF_SB		0x14
#define CONF_CDROM	0x16
#define CONF_MIDI	0x18
#define PSS_FLAG3     0x0800
#define PSS_FLAG2     0x0400
#define PSS_FLAG1     0x1000
#define PSS_FLAG0     0x0800
#define PSS_WRITE_EMPTY  0x8000
#define PSS_READ_FULL    0x4000
#define WSS_INDEX 4
#define WSS_DATA 5
#define WSS_INITIALIZING 0x80
#define WSS_AUTOCALIBRATION 0x20
#define NO_WSS_MIXER	-1
static int pss_mixer = 1;
static int pss_mixer;
typedef struct pss_mixerdata  pss_mixerdata;
typedef struct pss_confdata  pss_confdata;
static pss_confdata pss_data;
static pss_confdata *devc = &pss_data;
static DEFINE_SPINLOCK(lock);
static int      pss_initialized;
static int      nonstandard_microcode;
static int	pss_cdrom_port = -1;
static int	pss_enable_joystick;
static coproc_operations pss_coproc_operations;
static void pss_write(pss_confdata *devc, int data)
static int __init probe_pss(struct address_info *hw_config)
static int set_irq(pss_confdata * devc, int dev, int irq)
static void set_io_base(pss_confdata * devc, int dev, int base)
static int set_dma(pss_confdata * devc, int dev, int dma)
static int pss_reset_dsp(pss_confdata * devc)
static int pss_put_dspword(pss_confdata * devc, unsigned short word)
static int pss_get_dspword(pss_confdata * devc, unsigned short *word)
static int pss_download_boot(pss_confdata * devc, unsigned char *block, int size, int flags)
static void set_master_volume(pss_confdata *devc, int left, int right)
static void set_synth_volume(pss_confdata *devc, int volume)
static void set_bass(pss_confdata *devc, int level)
;
static void set_treble(pss_confdata *devc, int level)
;
static void pss_mixer_reset(pss_confdata *devc)
static int set_volume_mono(unsigned __user *p, unsigned int *aleft)
static int set_volume_stereo(unsigned __user *p,
unsigned int *aleft,
unsigned int *aright)
static int ret_vol_mono(int left)
static int ret_vol_stereo(int left, int right)
static int call_ad_mixer(pss_confdata *devc,unsigned int cmd, void __user *arg)
static int pss_mixer_ioctl (int dev, unsigned int cmd, void __user *arg)
static struct mixer_operations pss_mixer_operations =
;
static void disable_all_emulations(void)
static void configure_nonsound_components(void)
static int __init attach_pss(struct address_info *hw_config)
static int __init probe_pss_mpu(struct address_info *hw_config)
static int pss_coproc_open(void *dev_info, int sub_device)
static void pss_coproc_close(void *dev_info, int sub_device)
static void pss_coproc_reset(void *dev_info)
static int download_boot_block(void *dev_info, copr_buffer * buf)
static int pss_coproc_ioctl(void *dev_info, unsigned int cmd, void __user *arg, int local)
static coproc_operations pss_coproc_operations =
;
static int __init probe_pss_mss(struct address_info *hw_config)
static inline void __exit unload_pss(struct address_info *hw_config)
static inline void __exit unload_pss_mpu(struct address_info *hw_config)
static inline void __exit unload_pss_mss(struct address_info *hw_config)
static struct address_info cfg;
static struct address_info cfg2;
static struct address_info cfg_mpu;
static int pss_io __initdata	= -1;
static int mss_io __initdata	= -1;
static int mss_irq __initdata	= -1;
static int mss_dma __initdata	= -1;
static int mpu_io __initdata	= -1;
static int mpu_irq __initdata	= -1;
static int pss_no_sound = 0;
static int pss_keep_settings  = 1;
static char *pss_firmware = "/etc/sound/pss_synth";
module_param(pss_io, int, 0);
MODULE_PARM_DESC(pss_io, "Set i/o base of PSS card (probably 0x220 or 0x240)");
module_param(mss_io, int, 0);
MODULE_PARM_DESC(mss_io, "Set WSS (audio) i/o base (0x530, 0x604, 0xE80, 0xF40, or other. Address must end in 0 or 4 and must be from 0x100 to 0xFF4)");
module_param(mss_irq, int, 0);
MODULE_PARM_DESC(mss_irq, "Set WSS (audio) IRQ (3, 5, 7, 9, 10, 11, 12)");
module_param(mss_dma, int, 0);
MODULE_PARM_DESC(mss_dma, "Set WSS (audio) DMA (0, 1, 3)");
module_param(mpu_io, int, 0);
MODULE_PARM_DESC(mpu_io, "Set MIDI i/o base (0x330 or other. Address must be on 4 location boundaries and must be from 0x100 to 0xFFC)");
module_param(mpu_irq, int, 0);
MODULE_PARM_DESC(mpu_irq, "Set MIDI IRQ (3, 5, 7, 9, 10, 11, 12)");
module_param(pss_cdrom_port, int, 0);
MODULE_PARM_DESC(pss_cdrom_port, "Set the PSS CDROM port i/o base (0x340 or other)");
module_param(pss_enable_joystick, bool, 0);
MODULE_PARM_DESC(pss_enable_joystick, "Enables the PSS joystick port (1 to enable, 0 to disable)");
module_param(pss_no_sound, bool, 0);
MODULE_PARM_DESC(pss_no_sound, "Configure sound compoents (0 - no, 1 - yes)");
module_param(pss_keep_settings, bool, 0);
MODULE_PARM_DESC(pss_keep_settings, "Keep hardware setting at driver unloading (0 - no, 1 - yes)");
module_param(pss_firmware, charp, 0);
MODULE_PARM_DESC(pss_firmware, "Location of the firmware file (default - /etc/sound/pss_synth)");
module_param(pss_mixer, bool, 0);
MODULE_PARM_DESC(pss_mixer, "Enable (1) or disable (0) PSS mixer (controlling of output volume, bass, treble, synth volume). The mixer is not available on all PSS cards.");
MODULE_AUTHOR("Hannu Savolainen, Vladimir Michl");
MODULE_DESCRIPTION("Module for PSS sound cards (based on AD1848, ADSP-2115 and ESC614). This module includes control of output amplifier and synth volume of the Beethoven ADSP-16 card (this may work with other PSS cards).");
MODULE_LICENSE("GPL");
static int fw_load = 0;
static int pssmpu = 0, pssmss = 0;
static int __init init_pss(void)
static void __exit cleanup_pss(void)
module_init(init_pss);
module_exit(cleanup_pss);
static int __init setup_pss(char *str)
__setup("pss=", setup_pss);
