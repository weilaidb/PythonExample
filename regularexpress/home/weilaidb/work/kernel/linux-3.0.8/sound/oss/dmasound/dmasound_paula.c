#define DMASOUND_PAULA_REVISION 0
#define DMASOUND_PAULA_EDITION 4
#define custom amiga_custom
extern volatile u_short amiga_audio_min_period;
extern u_short amiga_audio_period;
#define AMI_AUDIO_OFF	(DMAF_AUD0 | DMAF_AUD1 | DMAF_AUD2 | DMAF_AUD3)
#define AMI_AUDIO_8	(DMAF_SETCLR | DMAF_MASTER | DMAF_AUD0 | DMAF_AUD1)
#define AMI_AUDIO_14	(AMI_AUDIO_8 | DMAF_AUD2 | DMAF_AUD3)
static int write_sq_block_size_half, write_sq_block_size_quarter;
static void *AmiAlloc(unsigned int size, gfp_t flags);
static void AmiFree(void *obj, unsigned int size);
static int AmiIrqInit(void);
static void AmiIrqCleanUp(void);
static void AmiSilence(void);
static void AmiInit(void);
static int AmiSetFormat(int format);
static int AmiSetVolume(int volume);
static int AmiSetTreble(int treble);
static void AmiPlayNextFrame(int index);
static void AmiPlay(void);
static irqreturn_t AmiInterrupt(int irq, void *dummy);
static void (*saved_heartbeat)(int) = NULL;
static inline void disable_heartbeat(void)
static inline void enable_heartbeat(void)
#define disable_heartbeat()	do  while (0)
#define enable_heartbeat()	do  while (0)
static void AmiMixerInit(void);
static int AmiMixerIoctl(u_int cmd, u_long arg);
static int AmiWriteSqSetup(void);
static int AmiStateInfo(char *buffer, size_t space);
static ssize_t ami_ct_s8(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed, ssize_t frameLeft)
#define GENERATE_AMI_CT8(funcname, convsample)				\
static ssize_t funcname(const u_char __user *userPtr, size_t userCount,	\
u_char frame[], ssize_t *frameUsed,		\
ssize_t frameLeft)				\
#define AMI_CT_ULAW(x)	(dmasound_ulaw2dma8[(x)])
#define AMI_CT_ALAW(x)	(dmasound_alaw2dma8[(x)])
#define AMI_CT_U8(x)	((x) ^ 0x80)
GENERATE_AMI_CT8(ami_ct_ulaw, AMI_CT_ULAW)
GENERATE_AMI_CT8(ami_ct_alaw, AMI_CT_ALAW)
GENERATE_AMI_CT8(ami_ct_u8, AMI_CT_U8)
#define GENERATE_AMI_CT_16(funcname, convsample)			\
static ssize_t funcname(const u_char __user *userPtr, size_t userCount,	\
u_char frame[], ssize_t *frameUsed,		\
ssize_t frameLeft)				\
#define AMI_CT_S16BE(x)	(x)
#define AMI_CT_U16BE(x)	((x) ^ 0x8000)
#define AMI_CT_S16LE(x)	(le2be16((x)))
#define AMI_CT_U16LE(x)	(le2be16((x)) ^ 0x8000)
GENERATE_AMI_CT_16(ami_ct_s16be, AMI_CT_S16BE)
GENERATE_AMI_CT_16(ami_ct_u16be, AMI_CT_U16BE)
GENERATE_AMI_CT_16(ami_ct_s16le, AMI_CT_S16LE)
GENERATE_AMI_CT_16(ami_ct_u16le, AMI_CT_U16LE)
static TRANS transAmiga = ;
static inline void StopDMA(void)
static void *AmiAlloc(unsigned int size, gfp_t flags)
static void AmiFree(void *obj, unsigned int size)
static int __init AmiIrqInit(void)
static void AmiIrqCleanUp(void)
static void AmiSilence(void)
static void AmiInit(void)
static int AmiSetFormat(int format)
#define VOLUME_VOXWARE_TO_AMI(v) \
(((v) < 0) ? 0 : ((v) > 100) ? 64 : ((v) * 64)/100)
#define VOLUME_AMI_TO_VOXWARE(v) ((v)*100/64)
static int AmiSetVolume(int volume)
static int AmiSetTreble(int treble)
#define AMI_PLAY_LOADED		1
#define AMI_PLAY_PLAYING	2
#define AMI_PLAY_MASK		3
static void AmiPlayNextFrame(int index)
static void AmiPlay(void)
static irqreturn_t AmiInterrupt(int irq, void *dummy)
static void __init AmiMixerInit(void)
static int AmiMixerIoctl(u_int cmd, u_long arg)
static int AmiWriteSqSetup(void)
static int AmiStateInfo(char *buffer, size_t space)
static SETTINGS def_hard =  ;
static SETTINGS def_soft =  ;
static MACHINE machAmiga = ;
static int __init amiga_audio_probe(struct platform_device *pdev)
static int __exit amiga_audio_remove(struct platform_device *pdev)
static struct platform_driver amiga_audio_driver = ;
static int __init amiga_audio_init(void)
module_init(amiga_audio_init);
static void __exit amiga_audio_exit(void)
module_exit(amiga_audio_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:amiga-audio");
