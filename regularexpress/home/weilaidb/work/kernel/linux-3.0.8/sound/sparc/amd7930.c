static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for Sun AMD7930 soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for Sun AMD7930 soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable Sun AMD7930 soundcard.");
MODULE_AUTHOR("Thomas K. Dyas and David S. Miller");
MODULE_DESCRIPTION("Sun AMD7930");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
#define AMD7930_CR	0x00UL
#define AMD7930_IR	AMD7930_CR
#define AMD7930_DR	0x01UL
#define AMD7930_DSR1	0x02UL
#define AMD7930_DER	0x03UL
#define AMD7930_DCTB	0x04UL
#define AMD7930_DCRB	AMD7930_DCTB
#define AMD7930_BBTB	0x05UL
#define AMD7930_BBRB	AMD7930_BBTB
#define AMD7930_BCTB	0x06UL
#define AMD7930_BCRB	AMD7930_BCTB
#define AMD7930_DSR2	0x07UL
struct amd7930_map ;
#define AMR_IR_DTTHRSH			0x01
#define AMR_IR_DRTHRSH			0x02
#define AMR_IR_DSRI			0x04
#define AMR_IR_DERI			0x08
#define AMR_IR_BBUF			0x10
#define AMR_IR_LSRI			0x20
#define AMR_IR_DSR2I			0x40
#define AMR_IR_MLTFRMI			0x80
#define	AMR_INIT			0x21
#define		AM_INIT_ACTIVE			0x01
#define		AM_INIT_DATAONLY		0x02
#define		AM_INIT_POWERDOWN		0x03
#define		AM_INIT_DISABLE_INTS		0x04
#define AMR_INIT2			0x20
#define		AM_INIT2_ENABLE_POWERDOWN	0x20
#define		AM_INIT2_ENABLE_MULTIFRAME	0x10
#define	AMR_LIU_LSR			0xA1
#define		AM_LIU_LSR_STATE		0x07
#define		AM_LIU_LSR_F3			0x08
#define		AM_LIU_LSR_F7			0x10
#define		AM_LIU_LSR_F8			0x20
#define		AM_LIU_LSR_HSW			0x40
#define		AM_LIU_LSR_HSW_CHG		0x80
#define	AMR_LIU_LPR			0xA2
#define	AMR_LIU_LMR1			0xA3
#define		AM_LIU_LMR1_B1_ENABL		0x01
#define		AM_LIU_LMR1_B2_ENABL		0x02
#define		AM_LIU_LMR1_F_DISABL		0x04
#define		AM_LIU_LMR1_FA_DISABL		0x08
#define		AM_LIU_LMR1_REQ_ACTIV		0x10
#define		AM_LIU_LMR1_F8_F3		0x20
#define		AM_LIU_LMR1_LIU_ENABL		0x40
#define	AMR_LIU_LMR2			0xA4
#define		AM_LIU_LMR2_DECHO		0x01
#define		AM_LIU_LMR2_DLOOP		0x02
#define		AM_LIU_LMR2_DBACKOFF		0x04
#define		AM_LIU_LMR2_EN_F3_INT		0x08
#define		AM_LIU_LMR2_EN_F8_INT		0x10
#define		AM_LIU_LMR2_EN_HSW_INT		0x20
#define		AM_LIU_LMR2_EN_F7_INT		0x40
#define	AMR_LIU_2_4			0xA5
#define	AMR_LIU_MF			0xA6
#define	AMR_LIU_MFSB			0xA7
#define	AMR_LIU_MFQB			0xA8
#define	AMR_MUX_MCR1			0x41
#define	AMR_MUX_MCR2			0x42
#define	AMR_MUX_MCR3			0x43
#define		AM_MUX_CHANNEL_B1		0x01
#define		AM_MUX_CHANNEL_B2		0x02
#define		AM_MUX_CHANNEL_Ba		0x03
#define		AM_MUX_CHANNEL_Bb		0x04
#define		AM_MUX_CHANNEL_Bc		0x05
#define		AM_MUX_CHANNEL_Bd		0x06
#define		AM_MUX_CHANNEL_Be		0x07
#define		AM_MUX_CHANNEL_Bf		0x08
#define	AMR_MUX_MCR4			0x44
#define		AM_MUX_MCR4_ENABLE_INTS		0x08
#define		AM_MUX_MCR4_REVERSE_Bb		0x10
#define		AM_MUX_MCR4_REVERSE_Bc		0x20
#define	AMR_MUX_1_4			0x45
#define	AMR_MAP_X			0x61
#define	AMR_MAP_R			0x62
#define	AMR_MAP_GX			0x63
#define	AMR_MAP_GR			0x64
#define	AMR_MAP_GER			0x65
#define	AMR_MAP_STGR			0x66
#define	AMR_MAP_FTGR_1_2		0x67
#define	AMR_MAP_ATGR_1_2		0x68
#define	AMR_MAP_MMR1			0x69
#define		AM_MAP_MMR1_ALAW		0x01
#define		AM_MAP_MMR1_GX			0x02
#define		AM_MAP_MMR1_GR			0x04
#define		AM_MAP_MMR1_GER			0x08
#define		AM_MAP_MMR1_X			0x10
#define		AM_MAP_MMR1_R			0x20
#define		AM_MAP_MMR1_STG			0x40
#define		AM_MAP_MMR1_LOOPBACK		0x80
#define	AMR_MAP_MMR2			0x6A
#define		AM_MAP_MMR2_AINB		0x01
#define		AM_MAP_MMR2_LS			0x02
#define		AM_MAP_MMR2_ENABLE_DTMF		0x04
#define		AM_MAP_MMR2_ENABLE_TONEGEN	0x08
#define		AM_MAP_MMR2_ENABLE_TONERING	0x10
#define		AM_MAP_MMR2_DISABLE_HIGHPASS	0x20
#define		AM_MAP_MMR2_DISABLE_AUTOZERO	0x40
#define	AMR_MAP_1_10			0x6B
#define	AMR_MAP_MMR3			0x6C
#define	AMR_MAP_STRA			0x6D
#define	AMR_MAP_STRF			0x6E
#define	AMR_MAP_PEAKX			0x70
#define	AMR_MAP_PEAKR			0x71
#define	AMR_MAP_15_16			0x72
#define	AMR_DLC_FRAR_1_2_3		0x81
#define	AMR_DLC_SRAR_1_2_3		0x82
#define	AMR_DLC_TAR			0x83
#define	AMR_DLC_DRLR			0x84
#define	AMR_DLC_DTCR			0x85
#define	AMR_DLC_DMR1			0x86
#define		AMR_DLC_DMR1_DTTHRSH_INT	0x01
#define		AMR_DLC_DMR1_DRTHRSH_INT	0x02
#define		AMR_DLC_DMR1_TAR_ENABL		0x04
#define		AMR_DLC_DMR1_EORP_INT		0x08
#define		AMR_DLC_DMR1_EN_ADDR1		0x10
#define		AMR_DLC_DMR1_EN_ADDR2		0x20
#define		AMR_DLC_DMR1_EN_ADDR3		0x40
#define		AMR_DLC_DMR1_EN_ADDR4		0x80
#define		AMR_DLC_DMR1_EN_ADDRS		0xf0
#define	AMR_DLC_DMR2			0x87
#define		AMR_DLC_DMR2_RABRT_INT		0x01
#define		AMR_DLC_DMR2_RESID_INT		0x02
#define		AMR_DLC_DMR2_COLL_INT		0x04
#define		AMR_DLC_DMR2_FCS_INT		0x08
#define		AMR_DLC_DMR2_OVFL_INT		0x10
#define		AMR_DLC_DMR2_UNFL_INT		0x20
#define		AMR_DLC_DMR2_OVRN_INT		0x40
#define		AMR_DLC_DMR2_UNRN_INT		0x80
#define	AMR_DLC_1_7			0x88
#define	AMR_DLC_DRCR			0x89
#define	AMR_DLC_RNGR1			0x8A
#define	AMR_DLC_RNGR2			0x8B
#define	AMR_DLC_FRAR4			0x8C
#define	AMR_DLC_SRAR4			0x8D
#define	AMR_DLC_DMR3			0x8E
#define		AMR_DLC_DMR3_VA_INT		0x01
#define		AMR_DLC_DMR3_EOTP_INT		0x02
#define		AMR_DLC_DMR3_LBRP_INT		0x04
#define		AMR_DLC_DMR3_RBA_INT		0x08
#define		AMR_DLC_DMR3_LBT_INT		0x10
#define		AMR_DLC_DMR3_TBE_INT		0x20
#define		AMR_DLC_DMR3_RPLOST_INT		0x40
#define		AMR_DLC_DMR3_KEEP_FCS		0x80
#define	AMR_DLC_DMR4			0x8F
#define		AMR_DLC_DMR4_RCV_1		0x00
#define		AMR_DLC_DMR4_RCV_2		0x01
#define		AMR_DLC_DMR4_RCV_4		0x02
#define		AMR_DLC_DMR4_RCV_8		0x03
#define		AMR_DLC_DMR4_RCV_16		0x01
#define		AMR_DLC_DMR4_RCV_24		0x02
#define		AMR_DLC_DMR4_RCV_30		0x03
#define		AMR_DLC_DMR4_XMT_1		0x00
#define		AMR_DLC_DMR4_XMT_2		0x04
#define		AMR_DLC_DMR4_XMT_4		0x08
#define		AMR_DLC_DMR4_XMT_8		0x0c
#define		AMR_DLC_DMR4_XMT_10		0x08
#define		AMR_DLC_DMR4_XMT_14		0x0c
#define		AMR_DLC_DMR4_IDLE_MARK		0x00
#define		AMR_DLC_DMR4_IDLE_FLAG		0x10
#define		AMR_DLC_DMR4_ADDR_BOTH		0x00
#define		AMR_DLC_DMR4_ADDR_1ST		0x20
#define		AMR_DLC_DMR4_ADDR_2ND		0xa0
#define		AMR_DLC_DMR4_CR_ENABLE		0x40
#define	AMR_DLC_12_15			0x90
#define	AMR_DLC_ASR			0x91
#define	AMR_DLC_EFCR			0x92
#define		AMR_DLC_EFCR_EXTEND_FIFO	0x01
#define		AMR_DLC_EFCR_SEC_PKT_INT	0x02
#define AMR_DSR1_VADDR			0x01
#define AMR_DSR1_EORP			0x02
#define AMR_DSR1_PKT_IP			0x04
#define AMR_DSR1_DECHO_ON		0x08
#define AMR_DSR1_DLOOP_ON		0x10
#define AMR_DSR1_DBACK_OFF		0x20
#define AMR_DSR1_EOTP			0x40
#define AMR_DSR1_CXMT_ABRT		0x80
#define AMR_DSR2_LBRP			0x01
#define AMR_DSR2_RBA			0x02
#define AMR_DSR2_RPLOST			0x04
#define AMR_DSR2_LAST_BYTE		0x08
#define AMR_DSR2_TBE			0x10
#define AMR_DSR2_MARK_IDLE		0x20
#define AMR_DSR2_FLAG_IDLE		0x40
#define AMR_DSR2_SECOND_PKT		0x80
#define AMR_DER_RABRT			0x01
#define AMR_DER_RFRAME			0x02
#define AMR_DER_COLLISION		0x04
#define AMR_DER_FCS			0x08
#define AMR_DER_OVFL			0x10
#define AMR_DER_UNFL			0x20
#define AMR_DER_OVRN			0x40
#define AMR_DER_UNRN			0x80
#define	AMR_PP_PPCR1			0xC0
#define	AMR_PP_PPSR			0xC1
#define	AMR_PP_PPIER			0xC2
#define	AMR_PP_MTDR			0xC3
#define	AMR_PP_MRDR			0xC3
#define	AMR_PP_CITDR0			0xC4
#define	AMR_PP_CIRDR0			0xC4
#define	AMR_PP_CITDR1			0xC5
#define	AMR_PP_CIRDR1			0xC5
#define	AMR_PP_PPCR2			0xC8
#define	AMR_PP_PPCR3			0xC9
struct snd_amd7930 ;
static struct snd_amd7930 *amd7930_list;
static __inline__ void amd7930_idle(struct snd_amd7930 *amd)
static __inline__ void amd7930_enable_ints(struct snd_amd7930 *amd)
static __inline__ void amd7930_disable_ints(struct snd_amd7930 *amd)
static void __amd7930_write_map(struct snd_amd7930 *amd)
static __const__ __u16 gx_coeff[256] = ;
static __const__ __u16 ger_coeff[] = ;
static void __amd7930_update_map(struct snd_amd7930 *amd)
static irqreturn_t snd_amd7930_interrupt(int irq, void *dev_id)
static int snd_amd7930_trigger(struct snd_amd7930 *amd, unsigned int flag, int cmd)
static int snd_amd7930_playback_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_amd7930_capture_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_amd7930_playback_prepare(struct snd_pcm_substream *substream)
static int snd_amd7930_capture_prepare(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_amd7930_playback_pointer(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_amd7930_capture_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_amd7930_pcm_hw =
;
static int snd_amd7930_playback_open(struct snd_pcm_substream *substream)
static int snd_amd7930_capture_open(struct snd_pcm_substream *substream)
static int snd_amd7930_playback_close(struct snd_pcm_substream *substream)
static int snd_amd7930_capture_close(struct snd_pcm_substream *substream)
static int snd_amd7930_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_amd7930_hw_free(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_amd7930_playback_ops = ;
static struct snd_pcm_ops snd_amd7930_capture_ops = ;
static int __devinit snd_amd7930_pcm(struct snd_amd7930 *amd)
#define VOLUME_MONITOR	0
#define VOLUME_CAPTURE	1
#define VOLUME_PLAYBACK	2
static int snd_amd7930_info_volume(struct snd_kcontrol *kctl, struct snd_ctl_elem_info *uinfo)
static int snd_amd7930_get_volume(struct snd_kcontrol *kctl, struct snd_ctl_elem_value *ucontrol)
static int snd_amd7930_put_volume(struct snd_kcontrol *kctl, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new amd7930_controls[] __devinitdata = ;
static int __devinit snd_amd7930_mixer(struct snd_amd7930 *amd)
static int snd_amd7930_free(struct snd_amd7930 *amd)
static int snd_amd7930_dev_free(struct snd_device *device)
static struct snd_device_ops snd_amd7930_dev_ops = ;
static int __devinit snd_amd7930_create(struct snd_card *card,
struct platform_device *op,
int irq, int dev,
struct snd_amd7930 **ramd)
static int __devinit amd7930_sbus_probe(struct platform_device *op)
static const struct of_device_id amd7930_match[] = ;
static struct platform_driver amd7930_sbus_driver = ;
static int __init amd7930_init(void)
static void __exit amd7930_exit(void)
module_init(amd7930_init);
module_exit(amd7930_exit);
