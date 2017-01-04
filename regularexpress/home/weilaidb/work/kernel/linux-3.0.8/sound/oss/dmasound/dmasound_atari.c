#define DMASOUND_ATARI_REVISION 0
#define DMASOUND_ATARI_EDITION 3
extern void atari_microwire_cmd(int cmd);
static int is_falcon;
static int write_sq_ignore_int;
static int expand_bal;
static int expand_data;
static ssize_t ata_ct_law(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft);
static ssize_t ata_ct_s8(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft);
static ssize_t ata_ct_u8(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft);
static ssize_t ata_ct_s16be(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft);
static ssize_t ata_ct_u16be(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft);
static ssize_t ata_ct_s16le(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft);
static ssize_t ata_ct_u16le(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft);
static ssize_t ata_ctx_law(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft);
static ssize_t ata_ctx_s8(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft);
static ssize_t ata_ctx_u8(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft);
static ssize_t ata_ctx_s16be(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft);
static ssize_t ata_ctx_u16be(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft);
static ssize_t ata_ctx_s16le(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft);
static ssize_t ata_ctx_u16le(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft);
static void *AtaAlloc(unsigned int size, gfp_t flags);
static void AtaFree(void *, unsigned int size);
static int AtaIrqInit(void);
static void AtaIrqCleanUp(void);
static int AtaSetBass(int bass);
static int AtaSetTreble(int treble);
static void TTSilence(void);
static void TTInit(void);
static int TTSetFormat(int format);
static int TTSetVolume(int volume);
static int TTSetGain(int gain);
static void FalconSilence(void);
static void FalconInit(void);
static int FalconSetFormat(int format);
static int FalconSetVolume(int volume);
static void AtaPlayNextFrame(int index);
static void AtaPlay(void);
static irqreturn_t AtaInterrupt(int irq, void *dummy);
static void TTMixerInit(void);
static void FalconMixerInit(void);
static int AtaMixerIoctl(u_int cmd, u_long arg);
static int TTMixerIoctl(u_int cmd, u_long arg);
static int FalconMixerIoctl(u_int cmd, u_long arg);
static int AtaWriteSqSetup(void);
static int AtaSqOpen(fmode_t mode);
static int TTStateInfo(char *buffer, size_t space);
static int FalconStateInfo(char *buffer, size_t space);
static ssize_t ata_ct_law(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t ata_ct_s8(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t ata_ct_u8(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t ata_ct_s16be(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t ata_ct_u16be(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t ata_ct_s16le(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t ata_ct_u16le(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t ata_ctx_law(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t ata_ctx_s8(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t ata_ctx_u8(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t ata_ctx_s16be(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t ata_ctx_u16be(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t ata_ctx_s16le(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static ssize_t ata_ctx_u16le(const u_char __user *userPtr, size_t userCount,
u_char frame[], ssize_t *frameUsed,
ssize_t frameLeft)
static TRANS transTTNormal = ;
static TRANS transTTExpanding = ;
static TRANS transFalconNormal = ;
static TRANS transFalconExpanding = ;
static void *AtaAlloc(unsigned int size, gfp_t flags)
static void AtaFree(void *obj, unsigned int size)
static int __init AtaIrqInit(void)
static void AtaIrqCleanUp(void)
#define TONE_VOXWARE_TO_DB(v) \
(((v) < 0) ? -12 : ((v) > 100) ? 12 : ((v) - 50) * 6 / 25)
#define TONE_DB_TO_VOXWARE(v) (((v) * 25 + ((v) > 0 ? 5 : -5)) / 6 + 50)
static int AtaSetBass(int bass)
static int AtaSetTreble(int treble)
static void TTSilence(void)
static void TTInit(void)
static int TTSetFormat(int format)
#define VOLUME_VOXWARE_TO_DB(v) \
(((v) < 0) ? -40 : ((v) > 100) ? 0 : ((v) * 2) / 5 - 40)
#define VOLUME_DB_TO_VOXWARE(v) ((((v) + 40) * 5 + 1) / 2)
static int TTSetVolume(int volume)
#define GAIN_VOXWARE_TO_DB(v) \
(((v) < 0) ? -80 : ((v) > 100) ? 0 : ((v) * 4) / 5 - 80)
#define GAIN_DB_TO_VOXWARE(v) ((((v) + 80) * 5 + 1) / 4)
static int TTSetGain(int gain)
static void FalconSilence(void)
static void FalconInit(void)
static int FalconSetFormat(int format)
#define VOLUME_VOXWARE_TO_ATT(v) \
((v) < 0 ? 15 : (v) > 100 ? 0 : 15 - (v) * 3 / 20)
#define VOLUME_ATT_TO_VOXWARE(v) (100 - (v) * 20 / 3)
static int FalconSetVolume(int volume)
static void AtaPlayNextFrame(int index)
static void AtaPlay(void)
static irqreturn_t AtaInterrupt(int irq, void *dummy)
#define RECLEVEL_VOXWARE_TO_GAIN(v)	\
((v) < 0 ? 0 : (v) > 100 ? 15 : (v) * 3 / 20)
#define RECLEVEL_GAIN_TO_VOXWARE(v)	(((v) * 20 + 2) / 3)
static void __init TTMixerInit(void)
static void __init FalconMixerInit(void)
static int AtaMixerIoctl(u_int cmd, u_long arg)
static int TTMixerIoctl(u_int cmd, u_long arg)
static int FalconMixerIoctl(u_int cmd, u_long arg)
static int AtaWriteSqSetup(void)
static int AtaSqOpen(fmode_t mode)
static int TTStateInfo(char *buffer, size_t space)
static int FalconStateInfo(char *buffer, size_t space)
static SETTINGS def_hard_falcon =  ;
static SETTINGS def_hard_tt =  ;
static SETTINGS def_soft =  ;
static __initdata MACHINE machTT = ;
static __initdata MACHINE machFalcon = ;
static int __init dmasound_atari_init(void)
static void __exit dmasound_atari_cleanup(void)
module_init(dmasound_atari_init);
module_exit(dmasound_atari_cleanup);
MODULE_LICENSE("GPL");
