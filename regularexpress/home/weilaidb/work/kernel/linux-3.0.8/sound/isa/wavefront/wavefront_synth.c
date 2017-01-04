static int wf_raw = 0;
static int fx_raw = 1;
static int debug_default = 0;
#define DEFAULT_OSPATH	"wavefront.os"
static char *ospath = DEFAULT_OSPATH;
static int wait_usecs = 150;
static int sleep_interval = 100;
static int sleep_tries = 50;
static int reset_time = 2;
static int ramcheck_time = 20;
static int osrun_time = 10;
module_param(wf_raw, int, 0444);
MODULE_PARM_DESC(wf_raw, "if non-zero, assume that we need to boot the OS");
module_param(fx_raw, int, 0444);
MODULE_PARM_DESC(fx_raw, "if non-zero, assume that the FX process needs help");
module_param(debug_default, int, 0444);
MODULE_PARM_DESC(debug_default, "debug parameters for card initialization");
module_param(wait_usecs, int, 0444);
MODULE_PARM_DESC(wait_usecs, "how long to wait without sleeping, usecs");
module_param(sleep_interval, int, 0444);
MODULE_PARM_DESC(sleep_interval, "how long to sleep when waiting for reply");
module_param(sleep_tries, int, 0444);
MODULE_PARM_DESC(sleep_tries, "how many times to try sleeping during a wait");
module_param(ospath, charp, 0444);
MODULE_PARM_DESC(ospath, "pathname to processed ICS2115 OS firmware");
module_param(reset_time, int, 0444);
MODULE_PARM_DESC(reset_time, "how long to wait for a reset to take effect");
module_param(ramcheck_time, int, 0444);
MODULE_PARM_DESC(ramcheck_time, "how many seconds to wait for the RAM test");
module_param(osrun_time, int, 0444);
MODULE_PARM_DESC(osrun_time, "how many seconds to wait for the ICS2115 OS");
#define WF_DEBUG 1
#define DPRINT(cond, ...) \
if ((dev->debug & (cond)) == (cond))
#define DPRINT(cond, args...)
#define LOGNAME "WaveFront: "
#define STAT_RINTR_ENABLED	0x01
#define STAT_CAN_READ		0x02
#define STAT_INTR_READ		0x04
#define STAT_WINTR_ENABLED	0x10
#define STAT_CAN_WRITE		0x20
#define STAT_INTR_WRITE		0x40
static int wavefront_delete_sample (snd_wavefront_t *, int sampnum);
static int wavefront_find_free_sample (snd_wavefront_t *);
struct wavefront_command ;
static struct  wavefront_errors[] = ;
#define NEEDS_ACK 1
static struct wavefront_command wavefront_commands[] = ;
static const char *
wavefront_errorstr (int errnum)
static struct wavefront_command *
wavefront_get_command (int cmd)
static inline int
wavefront_status (snd_wavefront_t *dev)
static int
wavefront_sleep (int limit)
static int
wavefront_wait (snd_wavefront_t *dev, int mask)
static int
wavefront_read (snd_wavefront_t *dev)
static int
wavefront_write (snd_wavefront_t *dev, unsigned char data)
int
snd_wavefront_cmd (snd_wavefront_t *dev,
int cmd, unsigned char *rbuf, unsigned char *wbuf)
static unsigned char *
munge_int32 (unsigned int src,
unsigned char *dst,
unsigned int dst_size)
;
static int
demunge_int32 (unsigned char* src, int src_size)
;
static
unsigned char *
munge_buf (unsigned char *src, unsigned char *dst, unsigned int dst_size)
static
unsigned char *
demunge_buf (unsigned char *src, unsigned char *dst, unsigned int src_bytes)
static int
wavefront_delete_sample (snd_wavefront_t *dev, int sample_num)
static int
wavefront_get_sample_status (snd_wavefront_t *dev, int assume_rom)
static int
wavefront_get_patch_status (snd_wavefront_t *dev)
static int
wavefront_get_program_status (snd_wavefront_t *dev)
static int
wavefront_send_patch (snd_wavefront_t *dev, wavefront_patch_info *header)
static int
wavefront_send_program (snd_wavefront_t *dev, wavefront_patch_info *header)
static int
wavefront_freemem (snd_wavefront_t *dev)
static int
wavefront_send_sample (snd_wavefront_t *dev,
wavefront_patch_info *header,
u16 __user *dataptr,
int data_is_unsigned)
static int
wavefront_send_alias (snd_wavefront_t *dev, wavefront_patch_info *header)
static int
wavefront_send_multisample (snd_wavefront_t *dev, wavefront_patch_info *header)
static int
wavefront_fetch_multisample (snd_wavefront_t *dev,
wavefront_patch_info *header)
static int
wavefront_send_drum (snd_wavefront_t *dev, wavefront_patch_info *header)
static int
wavefront_find_free_sample (snd_wavefront_t *dev)
static int
wavefront_load_patch (snd_wavefront_t *dev, const char __user *addr)
static void
process_sample_hdr (u8 *buf)
static int
wavefront_synth_control (snd_wavefront_card_t *acard,
wavefront_control *wc)
int
snd_wavefront_synth_open (struct snd_hwdep *hw, struct file *file)
int
snd_wavefront_synth_release (struct snd_hwdep *hw, struct file *file)
int
snd_wavefront_synth_ioctl (struct snd_hwdep *hw, struct file *file,
unsigned int cmd, unsigned long arg)
void
snd_wavefront_internal_interrupt (snd_wavefront_card_t *card)
static int __devinit
snd_wavefront_interrupt_bits (int irq)
static void __devinit
wavefront_should_cause_interrupt (snd_wavefront_t *dev,
int val, int port, unsigned long timeout)
static int __devinit
wavefront_reset_to_cleanliness (snd_wavefront_t *dev)
static int __devinit
wavefront_download_firmware (snd_wavefront_t *dev, char *path)
static int __devinit
wavefront_do_reset (snd_wavefront_t *dev)
int __devinit
snd_wavefront_start (snd_wavefront_t *dev)
int __devinit
snd_wavefront_detect (snd_wavefront_card_t *card)
MODULE_FIRMWARE(DEFAULT_OSPATH);
