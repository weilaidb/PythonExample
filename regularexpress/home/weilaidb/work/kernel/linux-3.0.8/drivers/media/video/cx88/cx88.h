#define CX88_VERSION_CODE KERNEL_VERSION(0, 0, 8)
#define UNSET (-1U)
#define CX88_MAXBOARDS 8
#define MAX_CX88_INPUT 8
#define CX88_NORMS (V4L2_STD_ALL 		\
& ~V4L2_STD_PAL_H		\
& ~V4L2_STD_NTSC_M_KR	\
& ~V4L2_STD_SECAM_LC)
#define FORMAT_FLAGS_PACKED       0x01
#define FORMAT_FLAGS_PLANAR       0x02
#define VBI_LINE_COUNT              17
#define VBI_LINE_LENGTH           2048
#define AUD_RDS_LINES		     4
#define SHADOW_AUD_VOL_CTL           1
#define SHADOW_AUD_BAL_CTL           2
#define SHADOW_MAX                   3
enum cx88_deemph_type ;
enum cx88_board_type ;
enum cx8802_board_access ;
static unsigned int inline norm_maxw(v4l2_std_id norm)
static unsigned int inline norm_maxh(v4l2_std_id norm)
struct cx8800_fmt ;
struct cx88_ctrl ;
#define SRAM_CH21 0
#define SRAM_CH22 1
#define SRAM_CH23 2
#define SRAM_CH24 3
#define SRAM_CH25 4
#define SRAM_CH26 5
#define SRAM_CH28 6
#define SRAM_CH27 7
struct sram_channel ;
extern const struct sram_channel const cx88_sram_channels[];
#define CX88_BOARD_NOAUTO               UNSET
#define CX88_BOARD_UNKNOWN                  0
#define CX88_BOARD_HAUPPAUGE                1
#define CX88_BOARD_GDI                      2
#define CX88_BOARD_PIXELVIEW                3
#define CX88_BOARD_ATI_WONDER_PRO           4
#define CX88_BOARD_WINFAST2000XP_EXPERT     5
#define CX88_BOARD_AVERTV_STUDIO_303        6
#define CX88_BOARD_MSI_TVANYWHERE_MASTER    7
#define CX88_BOARD_WINFAST_DV2000           8
#define CX88_BOARD_LEADTEK_PVR2000          9
#define CX88_BOARD_IODATA_GVVCP3PCI        10
#define CX88_BOARD_PROLINK_PLAYTVPVR       11
#define CX88_BOARD_ASUS_PVR_416            12
#define CX88_BOARD_MSI_TVANYWHERE          13
#define CX88_BOARD_KWORLD_DVB_T            14
#define CX88_BOARD_DVICO_FUSIONHDTV_DVB_T1 15
#define CX88_BOARD_KWORLD_LTV883           16
#define CX88_BOARD_DVICO_FUSIONHDTV_3_GOLD_Q  17
#define CX88_BOARD_HAUPPAUGE_DVB_T1        18
#define CX88_BOARD_CONEXANT_DVB_T1         19
#define CX88_BOARD_PROVIDEO_PV259          20
#define CX88_BOARD_DVICO_FUSIONHDTV_DVB_T_PLUS 21
#define CX88_BOARD_PCHDTV_HD3000           22
#define CX88_BOARD_DNTV_LIVE_DVB_T         23
#define CX88_BOARD_HAUPPAUGE_ROSLYN        24
#define CX88_BOARD_DIGITALLOGIC_MEC        25
#define CX88_BOARD_IODATA_GVBCTV7E         26
#define CX88_BOARD_PIXELVIEW_PLAYTV_ULTRA_PRO 27
#define CX88_BOARD_DVICO_FUSIONHDTV_3_GOLD_T  28
#define CX88_BOARD_ADSTECH_DVB_T_PCI          29
#define CX88_BOARD_TERRATEC_CINERGY_1400_DVB_T1  30
#define CX88_BOARD_DVICO_FUSIONHDTV_5_GOLD 31
#define CX88_BOARD_AVERMEDIA_ULTRATV_MC_550 32
#define CX88_BOARD_KWORLD_VSTREAM_EXPERT_DVD 33
#define CX88_BOARD_ATI_HDTVWONDER          34
#define CX88_BOARD_WINFAST_DTV1000         35
#define CX88_BOARD_AVERTV_303              36
#define CX88_BOARD_HAUPPAUGE_NOVASPLUS_S1  37
#define CX88_BOARD_HAUPPAUGE_NOVASE2_S1    38
#define CX88_BOARD_KWORLD_DVBS_100         39
#define CX88_BOARD_HAUPPAUGE_HVR1100       40
#define CX88_BOARD_HAUPPAUGE_HVR1100LP     41
#define CX88_BOARD_DNTV_LIVE_DVB_T_PRO     42
#define CX88_BOARD_KWORLD_DVB_T_CX22702    43
#define CX88_BOARD_DVICO_FUSIONHDTV_DVB_T_DUAL 44
#define CX88_BOARD_KWORLD_HARDWARE_MPEG_TV_XPERT 45
#define CX88_BOARD_DVICO_FUSIONHDTV_DVB_T_HYBRID 46
#define CX88_BOARD_PCHDTV_HD5500           47
#define CX88_BOARD_KWORLD_MCE200_DELUXE    48
#define CX88_BOARD_PIXELVIEW_PLAYTV_P7000  49
#define CX88_BOARD_NPGTECH_REALTV_TOP10FM  50
#define CX88_BOARD_WINFAST_DTV2000H        51
#define CX88_BOARD_GENIATECH_DVBS          52
#define CX88_BOARD_HAUPPAUGE_HVR3000       53
#define CX88_BOARD_NORWOOD_MICRO           54
#define CX88_BOARD_TE_DTV_250_OEM_SWANN    55
#define CX88_BOARD_HAUPPAUGE_HVR1300       56
#define CX88_BOARD_ADSTECH_PTV_390         57
#define CX88_BOARD_PINNACLE_PCTV_HD_800i   58
#define CX88_BOARD_DVICO_FUSIONHDTV_5_PCI_NANO 59
#define CX88_BOARD_PINNACLE_HYBRID_PCTV    60
#define CX88_BOARD_WINFAST_TV2000_XP_GLOBAL 61
#define CX88_BOARD_POWERCOLOR_REAL_ANGEL   62
#define CX88_BOARD_GENIATECH_X8000_MT      63
#define CX88_BOARD_DVICO_FUSIONHDTV_DVB_T_PRO 64
#define CX88_BOARD_DVICO_FUSIONHDTV_7_GOLD 65
#define CX88_BOARD_PROLINK_PV_8000GT       66
#define CX88_BOARD_KWORLD_ATSC_120         67
#define CX88_BOARD_HAUPPAUGE_HVR4000       68
#define CX88_BOARD_HAUPPAUGE_HVR4000LITE   69
#define CX88_BOARD_TEVII_S460              70
#define CX88_BOARD_OMICOM_SS4_PCI          71
#define CX88_BOARD_TBS_8920                72
#define CX88_BOARD_TEVII_S420              73
#define CX88_BOARD_PROLINK_PV_GLOBAL_XTREME 74
#define CX88_BOARD_PROF_7300               75
#define CX88_BOARD_SATTRADE_ST4200         76
#define CX88_BOARD_TBS_8910                77
#define CX88_BOARD_PROF_6200               78
#define CX88_BOARD_TERRATEC_CINERGY_HT_PCI_MKII 79
#define CX88_BOARD_HAUPPAUGE_IRONLY        80
#define CX88_BOARD_WINFAST_DTV1800H        81
#define CX88_BOARD_WINFAST_DTV2000H_J      82
#define CX88_BOARD_PROF_7301               83
#define CX88_BOARD_SAMSUNG_SMT_7020        84
#define CX88_BOARD_TWINHAN_VP1027_DVBS     85
#define CX88_BOARD_TEVII_S464              86
enum cx88_itype ;
struct cx88_input ;
struct cx88_board ;
struct cx88_subid ;
enum cx88_tvaudio ;
#define INPUT(nr) (core->board.input[nr])
#define RESOURCE_OVERLAY       1
#define RESOURCE_VIDEO         2
#define RESOURCE_VBI           4
#define BUFFER_TIMEOUT     msecs_to_jiffies(2000)
struct cx88_buffer ;
struct cx88_dmaqueue ;
struct cx88_core ;
static inline struct cx88_core *to_core(struct v4l2_device *v4l2_dev)
#define WM8775_GID	(1 << 0)
#define call_hw(core, grpid, o, f, args...) \
do  while (0)
#define call_all(core, o, f, args...) call_hw(core, 0, o, f, ##args)
struct cx8800_dev;
struct cx8802_dev;
struct cx8800_fh ;
struct cx8800_suspend_state ;
struct cx8800_dev ;
struct cx8802_fh ;
struct cx8802_suspend_state ;
struct cx8802_driver ;
struct cx8802_dev ;
#define cx_read(reg)             readl(core->lmmio + ((reg)>>2))
#define cx_write(reg,value)      writel((value), core->lmmio + ((reg)>>2))
#define cx_writeb(reg,value)     writeb((value), core->bmmio + (reg))
#define cx_andor(reg,mask,value) \
writel((readl(core->lmmio+((reg)>>2)) & ~(mask)) |\
((value) & (mask)), core->lmmio+((reg)>>2))
#define cx_set(reg,bit)          cx_andor((reg),(bit),(bit))
#define cx_clear(reg,bit)        cx_andor((reg),(bit),0)
#define cx_wait(d)
#define cx_sread(sreg)		    (core->shadow[sreg])
#define cx_swrite(sreg,reg,value) \
(core->shadow[sreg] = value, \
writel(core->shadow[sreg], core->lmmio + ((reg)>>2)))
#define cx_sandor(sreg,reg,mask,value) \
(core->shadow[sreg] = (core->shadow[sreg] & ~(mask)) | ((value) & (mask)), \
writel(core->shadow[sreg], core->lmmio + ((reg)>>2)))
extern void cx88_print_irqbits(const char *name, const char *tag, const char *strings[],
int len, u32 bits, u32 mask);
extern int cx88_core_irq(struct cx88_core *core, u32 status);
extern void cx88_wakeup(struct cx88_core *core,
struct cx88_dmaqueue *q, u32 count);
extern void cx88_shutdown(struct cx88_core *core);
extern int cx88_reset(struct cx88_core *core);
extern int
cx88_risc_buffer(struct pci_dev *pci, struct btcx_riscmem *risc,
struct scatterlist *sglist,
unsigned int top_offset, unsigned int bottom_offset,
unsigned int bpl, unsigned int padding, unsigned int lines);
extern int
cx88_risc_databuffer(struct pci_dev *pci, struct btcx_riscmem *risc,
struct scatterlist *sglist, unsigned int bpl,
unsigned int lines, unsigned int lpi);
extern int
cx88_risc_stopper(struct pci_dev *pci, struct btcx_riscmem *risc,
u32 reg, u32 mask, u32 value);
extern void
cx88_free_buffer(struct videobuf_queue *q, struct cx88_buffer *buf);
extern void cx88_risc_disasm(struct cx88_core *core,
struct btcx_riscmem *risc);
extern int cx88_sram_channel_setup(struct cx88_core *core,
const struct sram_channel *ch,
unsigned int bpl, u32 risc);
extern void cx88_sram_channel_dump(struct cx88_core *core,
const struct sram_channel *ch);
extern int cx88_set_scale(struct cx88_core *core, unsigned int width,
unsigned int height, enum v4l2_field field);
extern int cx88_set_tvnorm(struct cx88_core *core, v4l2_std_id norm);
extern struct video_device *cx88_vdev_init(struct cx88_core *core,
struct pci_dev *pci,
const struct video_device *template_,
const char *type);
extern struct cx88_core* cx88_core_get(struct pci_dev *pci);
extern void cx88_core_put(struct cx88_core *core,
struct pci_dev *pci);
extern int cx88_start_audio_dma(struct cx88_core *core);
extern int cx88_stop_audio_dma(struct cx88_core *core);
int cx8800_vbi_fmt (struct file *file, void *priv,
struct v4l2_format *f);
int cx8800_stop_vbi_dma(struct cx8800_dev *dev);
int cx8800_restart_vbi_queue(struct cx8800_dev    *dev,
struct cx88_dmaqueue *q);
void cx8800_vbi_timeout(unsigned long data);
extern const struct videobuf_queue_ops cx8800_vbi_qops;
extern int cx88_i2c_init(struct cx88_core *core, struct pci_dev *pci);
extern int cx88_tuner_callback(void *dev, int component, int command, int arg);
extern int cx88_get_resources(const struct cx88_core *core,
struct pci_dev *pci);
extern struct cx88_core *cx88_core_create(struct pci_dev *pci, int nr);
extern void cx88_setup_xc3028(struct cx88_core *core, struct xc2028_ctrl *ctl);
void cx88_set_tvaudio(struct cx88_core *core);
void cx88_newstation(struct cx88_core *core);
void cx88_get_stereo(struct cx88_core *core, struct v4l2_tuner *t);
void cx88_set_stereo(struct cx88_core *core, u32 mode, int manual);
int cx88_audio_thread(void *data);
int cx8802_register_driver(struct cx8802_driver *drv);
int cx8802_unregister_driver(struct cx8802_driver *drv);
struct cx8802_driver * cx8802_get_driver(struct cx8802_dev *dev, enum cx88_board_type btype);
s32 cx88_dsp_detect_stereo_sap(struct cx88_core *core);
int cx88_ir_init(struct cx88_core *core, struct pci_dev *pci);
int cx88_ir_fini(struct cx88_core *core);
void cx88_ir_irq(struct cx88_core *core);
int cx88_ir_start(struct cx88_core *core);
void cx88_ir_stop(struct cx88_core *core);
extern void cx88_i2c_init_ir(struct cx88_core *core);
int cx8802_buf_prepare(struct videobuf_queue *q,struct cx8802_dev *dev,
struct cx88_buffer *buf, enum v4l2_field field);
void cx8802_buf_queue(struct cx8802_dev *dev, struct cx88_buffer *buf);
void cx8802_cancel_buffers(struct cx8802_dev *dev);
extern const u32 cx88_user_ctrls[];
extern int cx8800_ctrl_query(struct cx88_core *core,
struct v4l2_queryctrl *qctrl);
int cx88_enum_input (struct cx88_core  *core,struct v4l2_input *i);
int cx88_set_freq (struct cx88_core  *core,struct v4l2_frequency *f);
int cx88_get_control(struct cx88_core *core, struct v4l2_control *ctl);
int cx88_set_control(struct cx88_core *core, struct v4l2_control *ctl);
int cx88_video_mux(struct cx88_core *core, unsigned int input);
