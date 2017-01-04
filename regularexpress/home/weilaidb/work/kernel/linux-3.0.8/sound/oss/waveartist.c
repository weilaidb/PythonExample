#define DEBUG_CMD	1
#define DEBUG_OUT	2
#define DEBUG_IN	4
#define DEBUG_INTR	8
#define DEBUG_MIXER	16
#define DEBUG_TRIGGER	32
#define debug_flg (0)
#define NO_DMA	255
#define SUPPORTED_MIXER_DEVICES		(SOUND_MASK_SYNTH      |\
SOUND_MASK_PCM        |\
SOUND_MASK_LINE       |\
SOUND_MASK_MIC        |\
SOUND_MASK_LINE1      |\
SOUND_MASK_RECLEV     |\
SOUND_MASK_VOLUME     |\
SOUND_MASK_IMIX)
static unsigned short levels[SOUND_MIXER_NRDEVICES] = ;
typedef struct  wavnc_info;
struct waveartist_mixer_info ;
typedef struct wavnc_port_info  wavnc_port_info;
static int		nr_waveartist_devs;
static wavnc_info	adev_info[MAX_AUDIO_DEV];
static DEFINE_SPINLOCK(waveartist_lock);
#define machine_is_netwinder() 0
static struct timer_list vnc_timer;
static void vnc_configure_mixer(wavnc_info *devc, unsigned int input_mask);
static int vnc_private_ioctl(int dev, unsigned int cmd, int __user *arg);
static void vnc_slider_tick(unsigned long data);
static inline void
waveartist_set_ctlr(struct address_info *hw, unsigned char clear, unsigned char set)
static inline void
waveartist_iack(wavnc_info *devc)
static inline int
waveartist_sleep(int timeout_ms)
static int
waveartist_reset(wavnc_info *devc)
static int
waveartist_cmd(wavnc_info *devc,
int nr_cmd, unsigned int *cmd,
int nr_resp, unsigned int *resp)
static inline int
waveartist_cmd1(wavnc_info *devc, unsigned int cmd)
static inline unsigned int
waveartist_cmd1_r(wavnc_info *devc, unsigned int cmd)
static inline int
waveartist_cmd2(wavnc_info *devc, unsigned int cmd, unsigned int arg)
static inline int
waveartist_cmd3(wavnc_info *devc, unsigned int cmd,
unsigned int arg1, unsigned int arg2)
static int
waveartist_getrev(wavnc_info *devc, char *rev)
static void waveartist_halt_output(int dev);
static void waveartist_halt_input(int dev);
static void waveartist_halt(int dev);
static void waveartist_trigger(int dev, int state);
static int
waveartist_open(int dev, int mode)
static void
waveartist_close(int dev)
static void
waveartist_output_block(int dev, unsigned long buf, int __count, int intrflag)
static void
waveartist_start_input(int dev, unsigned long buf, int __count, int intrflag)
static int
waveartist_ioctl(int dev, unsigned int cmd, void __user * arg)
static unsigned int
waveartist_get_speed(wavnc_port_info *portc)
static unsigned int
waveartist_get_bits(wavnc_port_info *portc)
static int
waveartist_prepare_for_input(int dev, int bsize, int bcount)
static int
waveartist_prepare_for_output(int dev, int bsize, int bcount)
static void
waveartist_halt(int dev)
static void
waveartist_halt_input(int dev)
static void
waveartist_halt_output(int dev)
static void
waveartist_trigger(int dev, int state)
static int
waveartist_set_speed(int dev, int arg)
static short
waveartist_set_channels(int dev, short arg)
static unsigned int
waveartist_set_bits(int dev, unsigned int arg)
static struct audio_driver waveartist_audio_driver = ;
static irqreturn_t
waveartist_intr(int irq, void *dev_id)
struct mix_ent ;
static const struct mix_ent mix_devs[SOUND_MIXER_NRDEVICES] = ;
static void
waveartist_mixer_update(wavnc_info *devc, int whichDev)
static void
waveartist_set_adc_mux(wavnc_info *devc, char left_dev, char right_dev)
static unsigned int
waveartist_select_input(wavnc_info *devc, unsigned int recmask,
unsigned char *dev_l, unsigned char *dev_r)
static int
waveartist_decode_mixer(wavnc_info *devc, int dev, unsigned char lev_l,
unsigned char lev_r)
static int waveartist_get_mixer(wavnc_info *devc, int dev)
static const struct waveartist_mixer_info waveartist_mixer = ;
static void
waveartist_set_recmask(wavnc_info *devc, unsigned int recmask)
static int
waveartist_set_mixer(wavnc_info *devc, int dev, unsigned int level)
static int
waveartist_mixer_ioctl(int dev, unsigned int cmd, void __user * arg)
static struct mixer_operations waveartist_mixer_operations =
;
static void
waveartist_mixer_reset(wavnc_info *devc)
static int __init waveartist_init(wavnc_info *devc)
static int __init probe_waveartist(struct address_info *hw_config)
static void __init
attach_waveartist(struct address_info *hw, const struct waveartist_mixer_info *mix)
static void __exit unload_waveartist(struct address_info *hw)
#define	VNC_TIMER_PERIOD (HZ/4)
#define	MIXER_PRIVATE3_RESET	0x53570000
#define	MIXER_PRIVATE3_READ	0x53570001
#define	MIXER_PRIVATE3_WRITE	0x53570002
#define	VNC_MUTE_INTERNAL_SPKR	0x01
#define	VNC_MUTE_LINE_OUT	0x10
#define VNC_PHONE_DETECT	0x20
#define VNC_HANDSET_DETECT	0x40
#define VNC_DISABLE_AUTOSWITCH	0x80
static inline void
vnc_mute_spkr(wavnc_info *devc)
static void
vnc_mute_lout(wavnc_info *devc)
static int
vnc_volume_slider(wavnc_info *devc)
static unsigned int
netwinder_select_input(wavnc_info *devc, unsigned int recmask,
unsigned char *dev_l, unsigned char *dev_r)
static int
netwinder_decode_mixer(wavnc_info *devc, int dev, unsigned char lev_l,
unsigned char lev_r)
static int netwinder_get_mixer(wavnc_info *devc, int dev)
static const struct waveartist_mixer_info netwinder_mixer = ;
static void
vnc_configure_mixer(wavnc_info *devc, unsigned int recmask)
static int
vnc_slider(wavnc_info *devc)
static void
vnc_slider_tick(unsigned long data)
static int
vnc_private_ioctl(int dev, unsigned int cmd, int __user * arg)
static struct address_info cfg;
static int attached;
static int __initdata io = 0;
static int __initdata irq = 0;
static int __initdata dma = 0;
static int __initdata dma2 = 0;
static int __init init_waveartist(void)
static void __exit cleanup_waveartist(void)
module_init(init_waveartist);
module_exit(cleanup_waveartist);
static int __init setup_waveartist(char *str)
__setup("waveartist=", setup_waveartist);
MODULE_DESCRIPTION("Rockwell WaveArtist RWA-010 sound driver");
module_param(io, int, 0);
module_param(irq, int, 0);
module_param(dma, int, 0);
module_param(dma2, int, 0);
MODULE_LICENSE("GPL");
