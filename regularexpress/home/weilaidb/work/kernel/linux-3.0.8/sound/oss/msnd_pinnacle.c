# ifndef __alpha__
#  define SLOWIO
# endif
#  ifdef CONFIG_MSNDCLAS_HAVE_BOOT
#    define HAVE_DSPCODEH
#  endif
#  include "msnd_classic.h"
#  define LOGNAME			"msnd_classic"
#  ifdef CONFIG_MSNDPIN_HAVE_BOOT
#    define HAVE_DSPCODEH
#  endif
#  include "msnd_pinnacle.h"
#  define LOGNAME			"msnd_pinnacle"
#  define CONFIG_MSND_WRITE_NDELAY	1
#define get_play_delay_jiffies(size)	((size) * HZ *			\
dev.play_sample_size / 8 /	\
dev.play_sample_rate /		\
dev.play_channels)
#define get_rec_delay_jiffies(size)	((size) * HZ *			\
dev.rec_sample_size / 8 /	\
dev.rec_sample_rate /		\
dev.rec_channels)
static DEFINE_MUTEX(msnd_pinnacle_mutex);
static multisound_dev_t			dev;
static char				*dspini, *permini;
static int				sizeof_dspini, sizeof_permini;
static int				dsp_full_reset(void);
static void				dsp_write_flush(void);
static __inline__ int chk_send_dsp_cmd(multisound_dev_t *dev, register BYTE cmd)
static void reset_play_queue(void)
static void reset_record_queue(void)
static void reset_queues(void)
static int dsp_set_format(struct file *file, int val)
static int dsp_get_frag_size(void)
static int dsp_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int mixer_get(int d)
#define update_volm(a,b)						\
writew((dev.left_levels[a] >> 1) *				\
readw(dev.SMA + SMA_wCurrMastVolLeft) / 0xffff,	\
dev.SMA + SMA_##b##Left);				\
writew((dev.right_levels[a] >> 1)  *			\
readw(dev.SMA + SMA_wCurrMastVolRight) / 0xffff,	\
dev.SMA + SMA_##b##Right);
#define update_potm(d,s,ar)						\
writeb((dev.left_levels[d] >> 8) *				\
readw(dev.SMA + SMA_wCurrMastVolLeft) / 0xffff,	\
dev.SMA + SMA_##s##Left);				\
writeb((dev.right_levels[d] >> 8) *				\
readw(dev.SMA + SMA_wCurrMastVolRight) / 0xffff,	\
dev.SMA + SMA_##s##Right);				\
if (msnd_send_word(&dev, 0, 0, ar) == 0)			\
chk_send_dsp_cmd(&dev, HDEX_AUX_REQ);
#define update_pot(d,s,ar)				\
writeb(dev.left_levels[d] >> 8,		\
dev.SMA + SMA_##s##Left);		\
writeb(dev.right_levels[d] >> 8,		\
dev.SMA + SMA_##s##Right);		\
if (msnd_send_word(&dev, 0, 0, ar) == 0)	\
chk_send_dsp_cmd(&dev, HDEX_AUX_REQ);
static int mixer_set(int d, int value)
static void mixer_setup(void)
static unsigned long set_recsrc(unsigned long recsrc)
static unsigned long force_recsrc(unsigned long recsrc)
#define set_mixer_info()							\
memset(&info, 0, sizeof(info));					\
strlcpy(info.id, "MSNDMIXER", sizeof(info.id));			\
strlcpy(info.name, "MultiSound Mixer", sizeof(info.name));
static int mixer_ioctl(unsigned int cmd, unsigned long arg)
static long dev_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static void dsp_write_flush(void)
static void dsp_halt(struct file *file)
static int dsp_release(struct file *file)
static int dsp_open(struct file *file)
static void set_default_play_audio_parameters(void)
static void set_default_rec_audio_parameters(void)
static void set_default_audio_parameters(void)
static int dev_open(struct inode *inode, struct file *file)
static int dev_release(struct inode *inode, struct file *file)
static __inline__ int pack_DARQ_to_DARF(register int bank)
static __inline__ int pack_DAPF_to_DAPQ(register int start)
static int dsp_read(char __user *buf, size_t len)
static int dsp_write(const char __user *buf, size_t len)
static ssize_t dev_read(struct file *file, char __user *buf, size_t count, loff_t *off)
static ssize_t dev_write(struct file *file, const char __user *buf, size_t count, loff_t *off)
static __inline__ void eval_dsp_msg(register WORD wMessage)
static irqreturn_t intr(int irq, void *dev_id)
static const struct file_operations dev_fileops = ;
static int reset_dsp(void)
static int __init probe_multisound(void)
static int init_sma(void)
static int __init calibrate_adc(WORD srate)
static int upload_dsp_code(void)
static void reset_proteus(void)
static int initialize(void)
static int dsp_full_reset(void)
static int __init attach_multisound(void)
static void __exit unload_multisound(void)
static int __init msnd_write_cfg(int cfg, int reg, int value)
static int __init msnd_write_cfg_io0(int cfg, int num, WORD io)
static int __init msnd_write_cfg_io1(int cfg, int num, WORD io)
static int __init msnd_write_cfg_irq(int cfg, int num, WORD irq)
static int __init msnd_write_cfg_mem(int cfg, int num, int mem)
static int __init msnd_activate_logical(int cfg, int num)
static int __init msnd_write_cfg_logical(int cfg, int num, WORD io0, WORD io1, WORD irq, int mem)
typedef struct msnd_pinnacle_cfg_device  msnd_pinnacle_cfg_t[4];
static int __init msnd_pinnacle_cfg_devices(int cfg, int reset, msnd_pinnacle_cfg_t device)
MODULE_AUTHOR				("Andrew Veliath <andrewtv@usa.net>");
MODULE_DESCRIPTION			("Turtle Beach " LONGNAME " Linux Driver");
MODULE_LICENSE("GPL");
static int io __initdata =		-1;
static int irq __initdata =		-1;
static int mem __initdata =		-1;
static int write_ndelay __initdata =	-1;
static int cfg __initdata =		-1;
static int reset __initdata = 0;
static int mpu_io __initdata = 0;
static int mpu_irq __initdata = 0;
static int ide_io0 __initdata = 0;
static int ide_io1 __initdata = 0;
static int ide_irq __initdata = 0;
static int joystick_io __initdata = 0;
static int digital __initdata = 0;
static int fifosize __initdata =	DEFFIFOSIZE;
static int calibrate_signal __initdata = 0;
static int write_ndelay __initdata =	-1;
static int io __initdata =		CONFIG_MSNDCLAS_IO;
static int irq __initdata =		CONFIG_MSNDCLAS_IRQ;
static int mem __initdata =		CONFIG_MSNDCLAS_MEM;
static int io __initdata =		CONFIG_MSNDPIN_IO;
static int irq __initdata =		CONFIG_MSNDPIN_IRQ;
static int mem __initdata =		CONFIG_MSNDPIN_MEM;
#  ifndef CONFIG_MSNDPIN_CFG
#    define CONFIG_MSNDPIN_CFG		0x250
#  endif
#  ifdef CONFIG_MSNDPIN_CFG
#    undef CONFIG_MSNDPIN_CFG
#  endif
#  define CONFIG_MSNDPIN_CFG		-1
static int cfg __initdata =		CONFIG_MSNDPIN_CFG;
static int reset;
#  define CONFIG_MSNDPIN_MPU_IO		0
static int mpu_io __initdata =		CONFIG_MSNDPIN_MPU_IO;
#  define CONFIG_MSNDPIN_MPU_IRQ	0
static int mpu_irq __initdata =		CONFIG_MSNDPIN_MPU_IRQ;
#  define CONFIG_MSNDPIN_IDE_IO0	0
static int ide_io0 __initdata =		CONFIG_MSNDPIN_IDE_IO0;
#  define CONFIG_MSNDPIN_IDE_IO1	0
static int ide_io1 __initdata =		CONFIG_MSNDPIN_IDE_IO1;
#  define CONFIG_MSNDPIN_IDE_IRQ	0
static int ide_irq __initdata =		CONFIG_MSNDPIN_IDE_IRQ;
#  define CONFIG_MSNDPIN_JOYSTICK_IO	0
static int joystick_io __initdata =	CONFIG_MSNDPIN_JOYSTICK_IO;
#  define CONFIG_MSNDPIN_DIGITAL	0
static int digital __initdata =		CONFIG_MSNDPIN_DIGITAL;
#  define CONFIG_MSND_FIFOSIZE		DEFFIFOSIZE
static int fifosize __initdata =	CONFIG_MSND_FIFOSIZE;
#  define CONFIG_MSND_CALSIGNAL		0
static int
calibrate_signal __initdata =		CONFIG_MSND_CALSIGNAL;
module_param				(io, int, 0);
module_param				(irq, int, 0);
module_param				(mem, int, 0);
module_param				(write_ndelay, int, 0);
module_param				(fifosize, int, 0);
module_param				(calibrate_signal, int, 0);
module_param				(digital, bool, 0);
module_param				(cfg, int, 0);
module_param				(reset, int, 0);
module_param				(mpu_io, int, 0);
module_param				(mpu_irq, int, 0);
module_param				(ide_io0, int, 0);
module_param				(ide_io1, int, 0);
module_param				(ide_irq, int, 0);
module_param				(joystick_io, int, 0);
static int __init msnd_init(void)
static void __exit msdn_cleanup(void)
module_init(msnd_init);
module_exit(msdn_cleanup);
