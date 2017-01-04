#if defined(CONFIG_GAMEPORT) || (defined(MODULE) && defined(CONFIG_GAMEPORT_MODULE))
#define SUPPORT_JOYSTICK 1
MODULE_AUTHOR("Peter Gruber <nokos@gmx.net>");
MODULE_DESCRIPTION("riptide");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
MODULE_FIRMWARE("riptide.hex");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE;
static int joystick_port[SNDRV_CARDS] = ;
static int mpu_port[SNDRV_CARDS] = ;
static int opl3_port[SNDRV_CARDS] = ;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for Riptide soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for Riptide soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable Riptide soundcard.");
module_param_array(joystick_port, int, NULL, 0444);
MODULE_PARM_DESC(joystick_port, "Joystick port # for Riptide soundcard.");
module_param_array(mpu_port, int, NULL, 0444);
MODULE_PARM_DESC(mpu_port, "MPU401 port # for Riptide driver.");
module_param_array(opl3_port, int, NULL, 0444);
MODULE_PARM_DESC(opl3_port, "OPL3 port # for Riptide driver.");
#define MPU401_HW_RIPTIDE MPU401_HW_MPU401
#define OPL3_HW_RIPTIDE   OPL3_HW_OPL3
#define PCI_EXT_CapId       0x40
#define PCI_EXT_NextCapPrt  0x41
#define PCI_EXT_PWMC        0x42
#define PCI_EXT_PWSCR       0x44
#define PCI_EXT_Data00      0x46
#define PCI_EXT_PMSCR_BSE   0x47
#define PCI_EXT_SB_Base     0x48
#define PCI_EXT_FM_Base     0x4a
#define PCI_EXT_MPU_Base    0x4C
#define PCI_EXT_Game_Base   0x4E
#define PCI_EXT_Legacy_Mask 0x50
#define PCI_EXT_AsicRev     0x52
#define PCI_EXT_Reserved3   0x53
#define LEGACY_ENABLE_ALL      0x8000
#define LEGACY_ENABLE_SB       0x4000
#define LEGACY_ENABLE_FM       0x2000
#define LEGACY_ENABLE_MPU_INT  0x1000
#define LEGACY_ENABLE_MPU      0x0800
#define LEGACY_ENABLE_GAMEPORT 0x0400
#define MAX_WRITE_RETRY  10
#define MAX_ERROR_COUNT  10
#define CMDIF_TIMEOUT    50000
#define RESET_TRIES      5
#define READ_PORT_ULONG(p)     inl((unsigned long)&(p))
#define WRITE_PORT_ULONG(p,x)  outl(x,(unsigned long)&(p))
#define READ_AUDIO_CONTROL(p)     READ_PORT_ULONG(p->audio_control)
#define WRITE_AUDIO_CONTROL(p,x)  WRITE_PORT_ULONG(p->audio_control,x)
#define UMASK_AUDIO_CONTROL(p,x)  WRITE_PORT_ULONG(p->audio_control,READ_PORT_ULONG(p->audio_control)|x)
#define MASK_AUDIO_CONTROL(p,x)   WRITE_PORT_ULONG(p->audio_control,READ_PORT_ULONG(p->audio_control)&x)
#define READ_AUDIO_STATUS(p)      READ_PORT_ULONG(p->audio_status)
#define SET_GRESET(p)     UMASK_AUDIO_CONTROL(p,0x0001)
#define UNSET_GRESET(p)   MASK_AUDIO_CONTROL(p,~0x0001)
#define SET_AIE(p)        UMASK_AUDIO_CONTROL(p,0x0004)
#define UNSET_AIE(p)      MASK_AUDIO_CONTROL(p,~0x0004)
#define SET_AIACK(p)      UMASK_AUDIO_CONTROL(p,0x0008)
#define UNSET_AIACKT(p)   MASKAUDIO_CONTROL(p,~0x0008)
#define SET_ECMDAE(p)     UMASK_AUDIO_CONTROL(p,0x0010)
#define UNSET_ECMDAE(p)   MASK_AUDIO_CONTROL(p,~0x0010)
#define SET_ECMDBE(p)     UMASK_AUDIO_CONTROL(p,0x0020)
#define UNSET_ECMDBE(p)   MASK_AUDIO_CONTROL(p,~0x0020)
#define SET_EDATAF(p)     UMASK_AUDIO_CONTROL(p,0x0040)
#define UNSET_EDATAF(p)   MASK_AUDIO_CONTROL(p,~0x0040)
#define SET_EDATBF(p)     UMASK_AUDIO_CONTROL(p,0x0080)
#define UNSET_EDATBF(p)   MASK_AUDIO_CONTROL(p,~0x0080)
#define SET_ESBIRQON(p)   UMASK_AUDIO_CONTROL(p,0x0100)
#define UNSET_ESBIRQON(p) MASK_AUDIO_CONTROL(p,~0x0100)
#define SET_EMPUIRQ(p)    UMASK_AUDIO_CONTROL(p,0x0200)
#define UNSET_EMPUIRQ(p)  MASK_AUDIO_CONTROL(p,~0x0200)
#define IS_CMDE(a)        (READ_PORT_ULONG(a->stat)&0x1)
#define IS_DATF(a)        (READ_PORT_ULONG(a->stat)&0x2)
#define IS_READY(p)       (READ_AUDIO_STATUS(p)&0x0001)
#define IS_DLREADY(p)     (READ_AUDIO_STATUS(p)&0x0002)
#define IS_DLERR(p)       (READ_AUDIO_STATUS(p)&0x0004)
#define IS_GERR(p)        (READ_AUDIO_STATUS(p)&0x0008)
#define IS_CMDAEIRQ(p)    (READ_AUDIO_STATUS(p)&0x0010)
#define IS_CMDBEIRQ(p)    (READ_AUDIO_STATUS(p)&0x0020)
#define IS_DATAFIRQ(p)    (READ_AUDIO_STATUS(p)&0x0040)
#define IS_DATBFIRQ(p)    (READ_AUDIO_STATUS(p)&0x0080)
#define IS_EOBIRQ(p)      (READ_AUDIO_STATUS(p)&0x0100)
#define IS_EOSIRQ(p)      (READ_AUDIO_STATUS(p)&0x0200)
#define IS_EOCIRQ(p)      (READ_AUDIO_STATUS(p)&0x0400)
#define IS_UNSLIRQ(p)     (READ_AUDIO_STATUS(p)&0x0800)
#define IS_SBIRQ(p)       (READ_AUDIO_STATUS(p)&0x1000)
#define IS_MPUIRQ(p)      (READ_AUDIO_STATUS(p)&0x2000)
#define RESP 0x00000001
#define PARM 0x00000002
#define CMDA 0x00000004
#define CMDB 0x00000008
#define NILL 0x00000000
#define LONG0(a)   ((u32)a)
#define BYTE0(a)   (LONG0(a)&0xff)
#define BYTE1(a)   (BYTE0(a)<<8)
#define BYTE2(a)   (BYTE0(a)<<16)
#define BYTE3(a)   (BYTE0(a)<<24)
#define WORD0(a)   (LONG0(a)&0xffff)
#define WORD1(a)   (WORD0(a)<<8)
#define WORD2(a)   (WORD0(a)<<16)
#define TRINIB0(a) (LONG0(a)&0xffffff)
#define TRINIB1(a) (TRINIB0(a)<<8)
#define RET(a)     ((union cmdret *)(a))
#define SEND_GETV(p,b)             sendcmd(p,RESP,GETV,0,RET(b))
#define SEND_GETC(p,b,c)           sendcmd(p,PARM|RESP,GETC,c,RET(b))
#define SEND_GUNS(p,b)             sendcmd(p,RESP,GUNS,0,RET(b))
#define SEND_SCID(p,b)             sendcmd(p,RESP,SCID,0,RET(b))
#define SEND_RMEM(p,b,c,d)         sendcmd(p,PARM|RESP,RMEM|BYTE1(b),LONG0(c),RET(d))
#define SEND_SMEM(p,b,c)           sendcmd(p,PARM,SMEM|BYTE1(b),LONG0(c),RET(0))
#define SEND_WMEM(p,b,c)           sendcmd(p,PARM,WMEM|BYTE1(b),LONG0(c),RET(0))
#define SEND_SDTM(p,b,c)           sendcmd(p,PARM|RESP,SDTM|TRINIB1(b),0,RET(c))
#define SEND_GOTO(p,b)             sendcmd(p,PARM,GOTO,LONG0(b),RET(0))
#define SEND_SETDPLL(p)	           sendcmd(p,0,ARM_SETDPLL,0,RET(0))
#define SEND_SSTR(p,b,c)           sendcmd(p,PARM,SSTR|BYTE3(b),LONG0(c),RET(0))
#define SEND_PSTR(p,b)             sendcmd(p,PARM,PSTR,BYTE3(b),RET(0))
#define SEND_KSTR(p,b)             sendcmd(p,PARM,KSTR,BYTE3(b),RET(0))
#define SEND_KDMA(p)               sendcmd(p,0,KDMA,0,RET(0))
#define SEND_GPOS(p,b,c,d)         sendcmd(p,PARM|RESP,GPOS,BYTE3(c)|BYTE2(b),RET(d))
#define SEND_SETF(p,b,c,d,e,f,g)   sendcmd(p,PARM,SETF|WORD1(b)|BYTE3(c),d|BYTE1(e)|BYTE2(f)|BYTE3(g),RET(0))
#define SEND_GSTS(p,b,c,d)         sendcmd(p,PARM|RESP,GSTS,BYTE3(c)|BYTE2(b),RET(d))
#define SEND_NGPOS(p,b,c,d)        sendcmd(p,PARM|RESP,NGPOS,BYTE3(c)|BYTE2(b),RET(d))
#define SEND_PSEL(p,b,c)           sendcmd(p,PARM,PSEL,BYTE2(b)|BYTE3(c),RET(0))
#define SEND_PCLR(p,b,c)           sendcmd(p,PARM,PCLR,BYTE2(b)|BYTE3(c),RET(0))
#define SEND_PLST(p,b)             sendcmd(p,PARM,PLST,BYTE3(b),RET(0))
#define SEND_RSSV(p,b,c,d)         sendcmd(p,PARM|RESP,RSSV,BYTE2(b)|BYTE3(c),RET(d))
#define SEND_LSEL(p,b,c,d,e,f,g,h) sendcmd(p,PARM,LSEL|BYTE1(b)|BYTE2(c)|BYTE3(d),BYTE0(e)|BYTE1(f)|BYTE2(g)|BYTE3(h),RET(0))
#define SEND_SSRC(p,b,c,d,e)       sendcmd(p,PARM,SSRC|BYTE1(b)|WORD2(c),WORD0(d)|WORD2(e),RET(0))
#define SEND_SLST(p,b)             sendcmd(p,PARM,SLST,BYTE3(b),RET(0))
#define SEND_RSRC(p,b,c)           sendcmd(p,RESP,RSRC|BYTE1(b),0,RET(c))
#define SEND_SSRB(p,b,c)           sendcmd(p,PARM,SSRB|BYTE1(b),WORD2(c),RET(0))
#define SEND_SDGV(p,b,c,d,e)       sendcmd(p,PARM,SDGV|BYTE2(b)|BYTE3(c),WORD0(d)|WORD2(e),RET(0))
#define SEND_RDGV(p,b,c,d)         sendcmd(p,PARM|RESP,RDGV|BYTE2(b)|BYTE3(c),0,RET(d))
#define SEND_DLST(p,b)             sendcmd(p,PARM,DLST,BYTE3(b),RET(0))
#define SEND_SACR(p,b,c)           sendcmd(p,PARM,SACR,WORD0(b)|WORD2(c),RET(0))
#define SEND_RACR(p,b,c)           sendcmd(p,PARM|RESP,RACR,WORD2(b),RET(c))
#define SEND_ALST(p,b)             sendcmd(p,PARM,ALST,BYTE3(b),RET(0))
#define SEND_TXAC(p,b,c,d,e,f)     sendcmd(p,PARM,TXAC|BYTE1(b)|WORD2(c),WORD0(d)|BYTE2(e)|BYTE3(f),RET(0))
#define SEND_RXAC(p,b,c,d)         sendcmd(p,PARM|RESP,RXAC,BYTE2(b)|BYTE3(c),RET(d))
#define SEND_SI2S(p,b)             sendcmd(p,PARM,SI2S,WORD2(b),RET(0))
#define EOB_STATUS         0x80000000
#define EOS_STATUS         0x40000000
#define EOC_STATUS         0x20000000
#define ERR_STATUS         0x10000000
#define EMPTY_STATUS       0x08000000
#define IEOB_ENABLE        0x1
#define IEOS_ENABLE        0x2
#define IEOC_ENABLE        0x4
#define RDONCE             0x8
#define DESC_MAX_MASK      0xff
#define ST_PLAY  0x1
#define ST_STOP  0x2
#define ST_PAUSE 0x4
#define I2S_INTDEC     3
#define I2S_MERGER     0
#define I2S_SPLITTER   0
#define I2S_MIXER      7
#define I2S_RATE       44100
#define MODEM_INTDEC   4
#define MODEM_MERGER   3
#define MODEM_SPLITTER 0
#define MODEM_MIXER    11
#define FM_INTDEC      3
#define FM_MERGER      0
#define FM_SPLITTER    0
#define FM_MIXER       9
#define SPLIT_PATH  0x80
enum FIRMWARE ;
enum CMDS ;
enum E1SOURCE ;
enum E2SINK ;
enum LBUS_SINK ;
enum RT_CHANNEL_IDS ;
enum ;
struct lbuspath ;
struct cmdport ;
struct riptideport ;
struct cmdif ;
struct riptide_firmware ;
union cmdret ;
union firmware_version ;
#define get_pcmhwdev(substream) (struct pcmhw *)(substream->runtime->private_data)
#define PLAYBACK_SUBSTREAMS 3
struct snd_riptide ;
struct sgd ;
struct pcmhw ;
#define CMDRET_ZERO (union cmdret)
static int sendcmd(struct cmdif *cif, u32 flags, u32 cmd, u32 parm,
union cmdret *ret);
static int getsourcesink(struct cmdif *cif, unsigned char source,
unsigned char sink, unsigned char *a,
unsigned char *b);
static int snd_riptide_initialize(struct snd_riptide *chip);
static int riptide_reset(struct cmdif *cif, struct snd_riptide *chip);
static DEFINE_PCI_DEVICE_TABLE(snd_riptide_ids) = ;
static DEFINE_PCI_DEVICE_TABLE(snd_riptide_joystick_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_riptide_ids);
static unsigned char lbusin2out[E2SINK_MAX + 1][2] = ;
static unsigned char lbus_play_opl3[] = ;
static unsigned char lbus_play_modem[] = ;
static unsigned char lbus_play_i2s[] = ;
static unsigned char lbus_play_out[] = ;
static unsigned char lbus_play_outhp[] = ;
static unsigned char lbus_play_noconv1[] = ;
static unsigned char lbus_play_stereo1[] = ;
static unsigned char lbus_play_mono1[] = ;
static unsigned char lbus_play_noconv2[] = ;
static unsigned char lbus_play_stereo2[] = ;
static unsigned char lbus_play_mono2[] = ;
static unsigned char lbus_play_noconv3[] = ;
static unsigned char lbus_play_stereo3[] = ;
static unsigned char lbus_play_mono3[] = ;
static unsigned char lbus_rec_noconv1[] = ;
static unsigned char lbus_rec_stereo1[] = ;
static unsigned char lbus_rec_mono1[] = ;
static unsigned char play_ids[] = ;
static unsigned char play_sources[] = ;
static struct lbuspath lbus_play_paths[] = ;
static struct lbuspath lbus_rec_path = ;
#define FIRMWARE_VERSIONS 1
static union firmware_version firmware_versions[] = ;
static u32 atoh(const unsigned char *in, unsigned int len)
static int senddata(struct cmdif *cif, const unsigned char *in, u32 offset)
static int loadfirmware(struct cmdif *cif, const unsigned char *img,
unsigned int size)
static void
alloclbuspath(struct cmdif *cif, unsigned char source,
unsigned char *path, unsigned char *mixer, unsigned char *s)
static void
freelbuspath(struct cmdif *cif, unsigned char source, unsigned char *path)
static int writearm(struct cmdif *cif, u32 addr, u32 data, u32 mask)
static int sendcmd(struct cmdif *cif, u32 flags, u32 cmd, u32 parm,
union cmdret *ret)
static int
setmixer(struct cmdif *cif, short num, unsigned short rval, unsigned short lval)
static int getpaths(struct cmdif *cif, unsigned char *o)
static int
getsourcesink(struct cmdif *cif, unsigned char source, unsigned char sink,
unsigned char *a, unsigned char *b)
static int
getsamplerate(struct cmdif *cif, unsigned char *intdec, unsigned int *rate)
static int
setsampleformat(struct cmdif *cif,
unsigned char mixer, unsigned char id,
unsigned char channels, unsigned char format)
static int
setsamplerate(struct cmdif *cif, unsigned char *intdec, unsigned int rate)
static int
getmixer(struct cmdif *cif, short num, unsigned short *rval,
unsigned short *lval)
static void riptide_handleirq(unsigned long dev_id)
static int riptide_suspend(struct pci_dev *pci, pm_message_t state)
static int riptide_resume(struct pci_dev *pci)
static int try_to_load_firmware(struct cmdif *cif, struct snd_riptide *chip)
static int riptide_reset(struct cmdif *cif, struct snd_riptide *chip)
static struct snd_pcm_hardware snd_riptide_playback = ;
static struct snd_pcm_hardware snd_riptide_capture = ;
static snd_pcm_uframes_t snd_riptide_pointer(struct snd_pcm_substream
*substream)
static int snd_riptide_trigger(struct snd_pcm_substream *substream, int cmd)
static int snd_riptide_prepare(struct snd_pcm_substream *substream)
static int
snd_riptide_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_riptide_hw_free(struct snd_pcm_substream *substream)
static int snd_riptide_playback_open(struct snd_pcm_substream *substream)
static int snd_riptide_capture_open(struct snd_pcm_substream *substream)
static int snd_riptide_playback_close(struct snd_pcm_substream *substream)
static int snd_riptide_capture_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_riptide_playback_ops = ;
static struct snd_pcm_ops snd_riptide_capture_ops = ;
static int __devinit
snd_riptide_pcm(struct snd_riptide *chip, int device, struct snd_pcm **rpcm)
static irqreturn_t
snd_riptide_interrupt(int irq, void *dev_id)
static void
snd_riptide_codec_write(struct snd_ac97 *ac97, unsigned short reg,
unsigned short val)
static unsigned short snd_riptide_codec_read(struct snd_ac97 *ac97,
unsigned short reg)
static int snd_riptide_initialize(struct snd_riptide *chip)
static int snd_riptide_free(struct snd_riptide *chip)
static int snd_riptide_dev_free(struct snd_device *device)
static int __devinit
snd_riptide_create(struct snd_card *card, struct pci_dev *pci,
struct snd_riptide **rchip)
static void
snd_riptide_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void __devinit snd_riptide_proc_init(struct snd_riptide *chip)
static int __devinit snd_riptide_mixer(struct snd_riptide *chip)
static int __devinit
snd_riptide_joystick_probe(struct pci_dev *pci, const struct pci_device_id *id)
static void __devexit snd_riptide_joystick_remove(struct pci_dev *pci)
static int __devinit
snd_card_riptide_probe(struct pci_dev *pci, const struct pci_device_id *pci_id)
static void __devexit snd_card_riptide_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static struct pci_driver joystick_driver = ;
static int __init alsa_card_riptide_init(void)
static void __exit alsa_card_riptide_exit(void)
module_init(alsa_card_riptide_init);
module_exit(alsa_card_riptide_exit);
