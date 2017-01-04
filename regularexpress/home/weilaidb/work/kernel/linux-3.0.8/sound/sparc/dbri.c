MODULE_AUTHOR("Rudolf Koenig, Brent Baccala and Martin Habets");
MODULE_DESCRIPTION("Sun DBRI");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for Sun DBRI soundcard.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for Sun DBRI soundcard.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable Sun DBRI soundcard.");
#undef DBRI_DEBUG
#define D_INT	(1<<0)
#define D_GEN	(1<<1)
#define D_CMD	(1<<2)
#define D_MM	(1<<3)
#define D_USR	(1<<4)
#define D_DESC	(1<<5)
static int dbri_debug;
module_param(dbri_debug, int, 0644);
MODULE_PARM_DESC(dbri_debug, "Debug value for Sun DBRI soundcard.");
static char *cmds[] = ;
#define dprintk(a, x...) if (dbri_debug & a) printk(KERN_DEBUG x)
#define dprintk(a, x...) do  while (0)
#define DBRI_CMD(cmd, intr, value) ((cmd << 28) |	\
(intr << 27) |	\
value)
struct cs4215 ;
#define CS4215_CLB	(1<<2)
#define CS4215_OLB	(1<<3)
#define CS4215_MLB	(1<<4)
#define CS4215_RSRVD_1  (1<<5)
#define CS4215_DFR_LINEAR16	0
#define CS4215_DFR_ULAW		1
#define CS4215_DFR_ALAW		2
#define CS4215_DFR_LINEAR8	3
#define CS4215_DFR_STEREO	(1<<2)
static struct  CS4215_FREQ[] = ;
#define CS4215_HPF	(1<<7)
#define CS4215_12_MASK	0xfcbf
#define CS4215_XEN	(1<<0)
#define CS4215_XCLK	(1<<1)
#define CS4215_BSEL_64	(0<<2)
#define CS4215_BSEL_128	(1<<2)
#define CS4215_BSEL_256	(2<<2)
#define CS4215_MCK_MAST (0<<4)
#define CS4215_MCK_XTL1 (1<<4)
#define CS4215_MCK_XTL2 (2<<4)
#define CS4215_MCK_CLK1 (3<<4)
#define CS4215_MCK_CLK2 (4<<4)
#define CS4215_DAD	(1<<0)
#define CS4215_ENL	(1<<1)
#define CS4215_VERSION_MASK 0xf
#define CS4215_LO(v)	v
#define CS4215_LE	(1<<6)
#define CS4215_HE	(1<<7)
#define CS4215_RO(v)	v
#define CS4215_SE	(1<<6)
#define CS4215_ADI	(1<<7)
#define CS4215_LG(v)	v
#define CS4215_IS	(1<<4)
#define CS4215_OVR	(1<<5)
#define CS4215_PIO0	(1<<6)
#define CS4215_PIO1	(1<<7)
#define CS4215_RG(v)	v
#define CS4215_MA(v)	(v<<4)
#define REG0	0x00
#define REG1	0x04
#define REG2	0x08
#define REG3	0x0c
#define REG8	0x20
#define REG9	0x24
#define DBRI_NO_CMDS	64
#define DBRI_INT_BLK	64
#define DBRI_NO_DESCS	64
#define DBRI_NO_PIPES	32
#define DBRI_MAX_PIPE	(DBRI_NO_PIPES - 1)
#define DBRI_REC	0
#define DBRI_PLAY	1
#define DBRI_NO_STREAMS	2
struct dbri_mem ;
struct dbri_dma ;
#define dbri_dma_off(member, elem)	\
((u32)(unsigned long)		\
(&(((struct dbri_dma *)0)->member[elem])))
enum in_or_out ;
struct dbri_pipe ;
struct dbri_streaminfo ;
struct snd_dbri ;
#define DBRI_MAX_VOLUME		63
#define DBRI_MAX_GAIN		15
#define D_P		(1<<15)
#define D_G		(1<<14)
#define D_S		(1<<13)
#define D_E		(1<<12)
#define D_X		(1<<7)
#define D_T		(1<<6)
#define D_N		(1<<5)
#define D_C		(1<<4)
#define D_F		(1<<3)
#define D_D		(1<<2)
#define D_H		(1<<1)
#define D_R		(1<<0)
#define D_LITTLE_END	(1<<8)
#define D_BIG_END	(0<<8)
#define D_MRR		(1<<4)
#define D_MLE		(1<<3)
#define D_LBG		(1<<2)
#define D_MBE		(1<<1)
#define D_IR		(1<<0)
#define D_ENPIO3	(1<<7)
#define D_ENPIO2	(1<<6)
#define D_ENPIO1	(1<<5)
#define D_ENPIO0	(1<<4)
#define D_ENPIO		(0xf0)
#define D_PIO3		(1<<3)
#define D_PIO2		(1<<2)
#define D_PIO1		(1<<1)
#define D_PIO0		(1<<0)
#define D_WAIT		0x0
#define D_PAUSE		0x1
#define D_JUMP		0x2
#define D_IIQ		0x3
#define D_REX		0x4
#define D_SDP		0x5
#define D_CDP		0x6
#define D_DTS		0x7
#define D_SSP		0x8
#define D_CHI		0x9
#define D_NT		0xa
#define D_TE		0xb
#define D_CDEC		0xc
#define D_TEST		0xd
#define D_CDM		0xe
#define D_PIPE(v)      ((v)<<0)
#define D_SDP_2SAME	(1<<18)
#define D_SDP_CHANGE	(2<<18)
#define D_SDP_EVERY	(3<<18)
#define D_SDP_EOL	(1<<17)
#define D_SDP_IDLE	(1<<16)
#define D_SDP_MEM	(0<<13)
#define D_SDP_HDLC	(2<<13)
#define D_SDP_HDLC_D	(3<<13)
#define D_SDP_SER	(4<<13)
#define D_SDP_FIXED	(6<<13)
#define D_SDP_MODE(v)	((v)&(7<<13))
#define D_SDP_TO_SER	(1<<12)
#define D_SDP_FROM_SER	(0<<12)
#define D_SDP_MSB	(1<<11)
#define D_SDP_LSB	(0<<11)
#define D_SDP_P		(1<<10)
#define D_SDP_A		(1<<8)
#define D_SDP_C		(1<<7)
#define D_DTS_VI	(1<<17)
#define D_DTS_VO	(1<<16)
#define D_DTS_INS	(1<<15)
#define D_DTS_DEL	(0<<15)
#define D_DTS_PRVIN(v) ((v)<<10)
#define D_DTS_PRVOUT(v)        ((v)<<5)
#define D_TS_LEN(v)	((v)<<24)
#define D_TS_CYCLE(v)	((v)<<14)
#define D_TS_DI		(1<<13)
#define D_TS_1CHANNEL	(0<<10)
#define D_TS_MONITOR	(2<<10)
#define D_TS_NONCONTIG	(3<<10)
#define D_TS_ANCHOR	(7<<10)
#define D_TS_MON(v)    ((v)<<5)
#define D_TS_NEXT(v)   ((v)<<0)
#define D_CHI_CHICM(v)	((v)<<16)
#define D_CHI_IR	(1<<15)
#define D_CHI_EN	(1<<14)
#define D_CHI_OD	(1<<13)
#define D_CHI_FE	(1<<12)
#define D_CHI_FD	(1<<11)
#define D_CHI_BPF(v)	((v)<<0)
#define D_NT_FBIT	(1<<17)
#define D_NT_NBF	(1<<16)
#define D_NT_IRM_IMM	(1<<15)
#define D_NT_IRM_EN	(1<<14)
#define D_NT_ISNT	(1<<13)
#define D_NT_FT		(1<<12)
#define D_NT_EZ		(1<<11)
#define D_NT_IFA	(1<<10)
#define D_NT_ACT	(1<<9)
#define D_NT_MFE	(1<<8)
#define D_NT_RLB(v)	((v)<<5)
#define D_NT_LLB(v)	((v)<<2)
#define D_NT_FACT	(1<<1)
#define D_NT_ABV	(1<<0)
#define D_CDEC_CK(v)	((v)<<24)
#define D_CDEC_FED(v)	((v)<<12)
#define D_CDEC_RED(v)	((v)<<0)
#define D_TEST_RAM(v)	((v)<<16)
#define D_TEST_SIZE(v)	((v)<<11)
#define D_TEST_ROMONOFF	0x5
#define D_TEST_PROC	0x6
#define D_TEST_SER	0x7
#define D_TEST_RAMREAD	0x8
#define D_TEST_RAMWRITE	0x9
#define D_TEST_RAMBIST	0xa
#define D_TEST_MCBIST	0xb
#define D_TEST_DUMP	0xe
#define D_CDM_THI	(1 << 8)
#define D_CDM_RHI	(1 << 7)
#define D_CDM_RCE	(1 << 6)
#define D_CDM_XCE	(1 << 2)
#define D_CDM_XEN	(1 << 1)
#define D_CDM_REN	(1 << 0)
#define D_INTR_BRDY	1
#define D_INTR_MINT	2
#define D_INTR_IBEG	3
#define D_INTR_IEND	4
#define D_INTR_EOL	5
#define D_INTR_CMDI	6
#define D_INTR_XCMP	8
#define D_INTR_SBRI	9
#define D_INTR_FXDT	10
#define D_INTR_CHIL	11
#define D_INTR_COLL	11
#define D_INTR_DBYT	12
#define D_INTR_RBYT	13
#define D_INTR_LINT	14
#define D_INTR_UNDR	15
#define D_INTR_TE	32
#define D_INTR_NT	34
#define D_INTR_CHI	36
#define D_INTR_CMD	38
#define D_INTR_GETCHAN(v)	(((v) >> 24) & 0x3f)
#define D_INTR_GETCODE(v)	(((v) >> 20) & 0xf)
#define D_INTR_GETCMD(v)	(((v) >> 16) & 0xf)
#define D_INTR_GETVAL(v)	((v) & 0xffff)
#define D_INTR_GETRVAL(v)	((v) & 0xfffff)
#define D_P_0		0
#define D_P_1		1
#define D_P_2		2
#define D_P_3		3
#define D_P_4		4
#define D_P_5		5
#define D_P_6		6
#define D_P_7		7
#define D_P_8		8
#define D_P_9		9
#define D_P_10		10
#define D_P_11		11
#define D_P_12		12
#define D_P_13		13
#define D_P_14		14
#define D_P_15		15
#define D_P_16		16
#define D_P_17		17
#define D_P_18		18
#define D_P_19		19
#define D_P_20		20
#define D_P_21		21
#define D_P_22		22
#define D_P_23		23
#define D_P_24		24
#define D_P_25		25
#define D_P_26		26
#define D_P_27		27
#define D_P_28		28
#define D_P_29		29
#define D_P_30		30
#define D_P_31		31
#define DBRI_TD_F	(1 << 31)
#define DBRI_TD_D	(1 << 30)
#define DBRI_TD_CNT(v)	((v) << 16)
#define DBRI_TD_B	(1 << 15)
#define DBRI_TD_M	(1 << 14)
#define DBRI_TD_I	(1 << 13)
#define DBRI_TD_FCNT(v)	(v)
#define DBRI_TD_UNR	(1 << 3)
#define DBRI_TD_ABT	(1 << 2)
#define DBRI_TD_TBC	(1 << 0)
#define DBRI_TD_STATUS(v)       ((v) & 0xff)
#define DBRI_TD_MAXCNT	((1 << 13) - 4)
#define DBRI_RD_F	(1 << 31)
#define DBRI_RD_C	(1 << 30)
#define DBRI_RD_B	(1 << 15)
#define DBRI_RD_M	(1 << 14)
#define DBRI_RD_BCNT(v)	(v)
#define DBRI_RD_CRC	(1 << 7)
#define DBRI_RD_BBC	(1 << 6)
#define DBRI_RD_ABT	(1 << 5)
#define DBRI_RD_OVRN	(1 << 3)
#define DBRI_RD_STATUS(v)      ((v) & 0xff)
#define DBRI_RD_CNT(v) (((v) >> 16) & 0x1fff)
#define DBRI_STREAMNO(substream)				\
(substream->stream ==				\
SNDRV_PCM_STREAM_PLAYBACK ? DBRI_PLAY: DBRI_REC)
#define DBRI_STREAM(dbri, substream)	\
&dbri->stream_info[DBRI_STREAMNO(substream)]
static __u32 reverse_bytes(__u32 b, int len)
#define MAXLOOPS 20
static void dbri_cmdwait(struct snd_dbri *dbri)
static s32 *dbri_cmdlock(struct snd_dbri *dbri, int len)
static void dbri_cmdsend(struct snd_dbri *dbri, s32 *cmd, int len)
static void dbri_reset(struct snd_dbri *dbri)
static void __devinit dbri_initialize(struct snd_dbri *dbri)
static inline int pipe_active(struct snd_dbri *dbri, int pipe)
static void reset_pipe(struct snd_dbri *dbri, int pipe)
static void setup_pipe(struct snd_dbri *dbri, int pipe, int sdp)
static void link_time_slot(struct snd_dbri *dbri, int pipe,
int prevpipe, int nextpipe,
int length, int cycle)
static void xmit_fixed(struct snd_dbri *dbri, int pipe, unsigned int data)
static void recv_fixed(struct snd_dbri *dbri, int pipe, volatile __u32 *ptr)
static int setup_descs(struct snd_dbri *dbri, int streamno, unsigned int period)
enum master_or_slave ;
static void reset_chi(struct snd_dbri *dbri,
enum master_or_slave master_or_slave,
int bits_per_frame)
static __devinit void cs4215_setup_pipes(struct snd_dbri *dbri)
static __devinit int cs4215_init_data(struct cs4215 *mm)
static void cs4215_setdata(struct snd_dbri *dbri, int muted)
static void cs4215_open(struct snd_dbri *dbri)
static int cs4215_setctrl(struct snd_dbri *dbri)
static int cs4215_prepare(struct snd_dbri *dbri, unsigned int rate,
snd_pcm_format_t format, unsigned int channels)
static __devinit int cs4215_init(struct snd_dbri *dbri)
static void xmit_descs(struct snd_dbri *dbri)
static void transmission_complete_intr(struct snd_dbri *dbri, int pipe)
static void reception_complete_intr(struct snd_dbri *dbri, int pipe)
static void dbri_process_one_interrupt(struct snd_dbri *dbri, int x)
static void dbri_process_interrupt_buffer(struct snd_dbri *dbri)
static irqreturn_t snd_dbri_interrupt(int irq, void *dev_id)
static struct snd_pcm_hardware snd_dbri_pcm_hw = ;
static int snd_hw_rule_format(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_hw_rule_channels(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_dbri_open(struct snd_pcm_substream *substream)
static int snd_dbri_close(struct snd_pcm_substream *substream)
static int snd_dbri_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_dbri_hw_free(struct snd_pcm_substream *substream)
static int snd_dbri_prepare(struct snd_pcm_substream *substream)
static int snd_dbri_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t snd_dbri_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_dbri_ops = ;
static int __devinit snd_dbri_pcm(struct snd_card *card)
static int snd_cs4215_info_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_cs4215_get_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs4215_put_volume(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs4215_info_single(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_cs4215_get_single(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_cs4215_put_single(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define CS4215_SINGLE(xname, entry, shift, mask, invert)	\
,
static struct snd_kcontrol_new dbri_controls[] __devinitdata = ;
static int __devinit snd_dbri_mixer(struct snd_card *card)
static void dbri_regs_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void dbri_debug_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void __devinit snd_dbri_proc(struct snd_card *card)
static void snd_dbri_free(struct snd_dbri *dbri);
static int __devinit snd_dbri_create(struct snd_card *card,
struct platform_device *op,
int irq, int dev)
static void snd_dbri_free(struct snd_dbri *dbri)
static int __devinit dbri_probe(struct platform_device *op)
static int __devexit dbri_remove(struct platform_device *op)
static const struct of_device_id dbri_match[] = ;
MODULE_DEVICE_TABLE(of, dbri_match);
static struct platform_driver dbri_sbus_driver = ;
static int __init dbri_init(void)
static void __exit dbri_exit(void)
module_init(dbri_init);
module_exit(dbri_exit);
