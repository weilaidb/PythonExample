int sb_audio_open(int dev, int mode)
void sb_audio_close(int dev)
static void sb_set_output_parms(int dev, unsigned long buf, int nr_bytes,
int intrflag)
static void sb_set_input_parms(int dev, unsigned long buf, int count, int intrflag)
static void sb1_audio_output_block(int dev, unsigned long buf, int nr_bytes, int intrflag)
static void sb1_audio_start_input(int dev, unsigned long buf, int nr_bytes, int intrflag)
static void sb1_audio_trigger(int dev, int bits)
static int sb1_audio_prepare_for_input(int dev, int bsize, int bcount)
static int sb1_audio_prepare_for_output(int dev, int bsize, int bcount)
static int sb1_audio_set_speed(int dev, int speed)
static short sb1_audio_set_channels(int dev, short channels)
static unsigned int sb1_audio_set_bits(int dev, unsigned int bits)
static void sb1_audio_halt_xfer(int dev)
static void sb20_audio_output_block(int dev, unsigned long buf, int nr_bytes,
int intrflag)
static void sb20_audio_start_input(int dev, unsigned long buf, int nr_bytes, int intrflag)
static void sb20_audio_trigger(int dev, int bits)
static int sb201_audio_set_speed(int dev, int speed)
static int sbpro_audio_prepare_for_input(int dev, int bsize, int bcount)
static int sbpro_audio_prepare_for_output(int dev, int bsize, int bcount)
static int sbpro_audio_set_speed(int dev, int speed)
static short sbpro_audio_set_channels(int dev, short channels)
static int jazz16_audio_set_speed(int dev, int speed)
static int sb16_audio_set_speed(int dev, int speed)
static unsigned int sb16_audio_set_bits(int dev, unsigned int bits)
static int sb16_audio_prepare_for_input(int dev, int bsize, int bcount)
static int sb16_audio_prepare_for_output(int dev, int bsize, int bcount)
static void sb16_audio_output_block(int dev, unsigned long buf, int count,
int intrflag)
static void sb16_audio_start_input(int dev, unsigned long buf, int count, int intrflag)
static void sb16_audio_trigger(int dev, int bits)
static unsigned char lbuf8[2048];
static signed short *lbuf16 = (signed short *)lbuf8;
#define LBUFCOPYSIZE 1024
static void
sb16_copy_from_user(int dev,
char *localbuf, int localoffs,
const char __user *userbuf, int useroffs,
int max_in, int max_out,
int *used, int *returned,
int len)
static void
sb16_audio_mmap(int dev)
static struct audio_driver sb1_audio_driver =
;
static struct audio_driver sb20_audio_driver =
;
static struct audio_driver sb201_audio_driver =
;
static struct audio_driver sbpro_audio_driver =
;
static struct audio_driver jazz16_audio_driver =
;
static struct audio_driver sb16_audio_driver =
;
void sb_audio_init(sb_devc * devc, char *name, struct module *owner)
