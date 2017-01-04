#define SAA7134_VERSION_CODE KERNEL_VERSION(0, 2, 16)
#if defined(CONFIG_VIDEO_SAA7134_DVB) || defined(CONFIG_VIDEO_SAA7134_DVB_MODULE)
#define UNSET (-1U)
enum saa7134_tvaudio_mode ;
enum saa7134_audio_in ;
enum saa7134_video_out ;
struct saa7134_tvnorm ;
struct saa7134_tvaudio ;
struct saa7134_format ;
struct saa7134_card_ir ;
#define SAA7134_BOARD_NOAUTO        UNSET
#define SAA7134_BOARD_UNKNOWN           0
#define SAA7134_BOARD_PROTEUS_PRO       1
#define SAA7134_BOARD_FLYVIDEO3000      2
#define SAA7134_BOARD_FLYVIDEO2000      3
#define SAA7134_BOARD_EMPRESS           4
#define SAA7134_BOARD_MONSTERTV         5
#define SAA7134_BOARD_MD9717            6
#define SAA7134_BOARD_TVSTATION_RDS     7
#define SAA7134_BOARD_CINERGY400	8
#define SAA7134_BOARD_MD5044		9
#define SAA7134_BOARD_KWORLD           10
#define SAA7134_BOARD_CINERGY600       11
#define SAA7134_BOARD_MD7134           12
#define SAA7134_BOARD_TYPHOON_90031    13
#define SAA7134_BOARD_ELSA             14
#define SAA7134_BOARD_ELSA_500TV       15
#define SAA7134_BOARD_ASUSTeK_TVFM7134 16
#define SAA7134_BOARD_VA1000POWER      17
#define SAA7134_BOARD_BMK_MPEX_NOTUNER 18
#define SAA7134_BOARD_VIDEOMATE_TV     19
#define SAA7134_BOARD_CRONOS_PLUS      20
#define SAA7134_BOARD_10MOONSTVMASTER  21
#define SAA7134_BOARD_MD2819           22
#define SAA7134_BOARD_BMK_MPEX_TUNER   23
#define SAA7134_BOARD_TVSTATION_DVR    24
#define SAA7134_BOARD_ASUSTEK_TVFM7133	25
#define SAA7134_BOARD_PINNACLE_PCTV_STEREO 26
#define SAA7134_BOARD_MANLI_MTV002     27
#define SAA7134_BOARD_MANLI_MTV001     28
#define SAA7134_BOARD_TG3000TV         29
#define SAA7134_BOARD_ECS_TVP3XP       30
#define SAA7134_BOARD_ECS_TVP3XP_4CB5  31
#define SAA7134_BOARD_AVACSSMARTTV     32
#define SAA7134_BOARD_AVERMEDIA_DVD_EZMAKER 33
#define SAA7134_BOARD_NOVAC_PRIMETV7133 34
#define SAA7134_BOARD_AVERMEDIA_STUDIO_305 35
#define SAA7134_BOARD_UPMOST_PURPLE_TV 36
#define SAA7134_BOARD_ITEMS_MTV005     37
#define SAA7134_BOARD_CINERGY200       38
#define SAA7134_BOARD_FLYTVPLATINUM_MINI 39
#define SAA7134_BOARD_VIDEOMATE_TV_PVR 40
#define SAA7134_BOARD_VIDEOMATE_TV_GOLD_PLUS 41
#define SAA7134_BOARD_SABRENT_SBTTVFM  42
#define SAA7134_BOARD_ZOLID_XPERT_TV7134 43
#define SAA7134_BOARD_EMPIRE_PCI_TV_RADIO_LE 44
#define SAA7134_BOARD_AVERMEDIA_STUDIO_307    45
#define SAA7134_BOARD_AVERMEDIA_CARDBUS 46
#define SAA7134_BOARD_CINERGY400_CARDBUS 47
#define SAA7134_BOARD_CINERGY600_MK3   48
#define SAA7134_BOARD_VIDEOMATE_GOLD_PLUS 49
#define SAA7134_BOARD_PINNACLE_300I_DVBT_PAL 50
#define SAA7134_BOARD_PROVIDEO_PV952   51
#define SAA7134_BOARD_AVERMEDIA_305    52
#define SAA7134_BOARD_ASUSTeK_TVFM7135 53
#define SAA7134_BOARD_FLYTVPLATINUM_FM 54
#define SAA7134_BOARD_FLYDVBTDUO 55
#define SAA7134_BOARD_AVERMEDIA_307    56
#define SAA7134_BOARD_AVERMEDIA_GO_007_FM 57
#define SAA7134_BOARD_ADS_INSTANT_TV 58
#define SAA7134_BOARD_KWORLD_VSTREAM_XPERT 59
#define SAA7134_BOARD_FLYDVBT_DUO_CARDBUS 60
#define SAA7134_BOARD_PHILIPS_TOUGH 61
#define SAA7134_BOARD_VIDEOMATE_TV_GOLD_PLUSII 62
#define SAA7134_BOARD_KWORLD_XPERT 63
#define SAA7134_BOARD_FLYTV_DIGIMATRIX 64
#define SAA7134_BOARD_KWORLD_TERMINATOR 65
#define SAA7134_BOARD_YUAN_TUN900 66
#define SAA7134_BOARD_BEHOLD_409FM 67
#define SAA7134_BOARD_GOTVIEW_7135 68
#define SAA7134_BOARD_PHILIPS_EUROPA  69
#define SAA7134_BOARD_VIDEOMATE_DVBT_300 70
#define SAA7134_BOARD_VIDEOMATE_DVBT_200 71
#define SAA7134_BOARD_RTD_VFG7350 72
#define SAA7134_BOARD_RTD_VFG7330 73
#define SAA7134_BOARD_FLYTVPLATINUM_MINI2 74
#define SAA7134_BOARD_AVERMEDIA_AVERTVHD_A180 75
#define SAA7134_BOARD_MONSTERTV_MOBILE 76
#define SAA7134_BOARD_PINNACLE_PCTV_110i 77
#define SAA7134_BOARD_ASUSTeK_P7131_DUAL 78
#define SAA7134_BOARD_SEDNA_PC_TV_CARDBUS     79
#define SAA7134_BOARD_ASUSTEK_DIGIMATRIX_TV 80
#define SAA7134_BOARD_PHILIPS_TIGER  81
#define SAA7134_BOARD_MSI_TVATANYWHERE_PLUS  82
#define SAA7134_BOARD_CINERGY250PCI 83
#define SAA7134_BOARD_FLYDVB_TRIO 84
#define SAA7134_BOARD_AVERMEDIA_777 85
#define SAA7134_BOARD_FLYDVBT_LR301 86
#define SAA7134_BOARD_ADS_DUO_CARDBUS_PTV331 87
#define SAA7134_BOARD_TEVION_DVBT_220RF 88
#define SAA7134_BOARD_ELSA_700TV       89
#define SAA7134_BOARD_KWORLD_ATSC110   90
#define SAA7134_BOARD_AVERMEDIA_A169_B 91
#define SAA7134_BOARD_AVERMEDIA_A169_B1 92
#define SAA7134_BOARD_MD7134_BRIDGE_2     93
#define SAA7134_BOARD_FLYDVBT_HYBRID_CARDBUS 94
#define SAA7134_BOARD_FLYVIDEO3000_NTSC 95
#define SAA7134_BOARD_MEDION_MD8800_QUADRO 96
#define SAA7134_BOARD_FLYDVBS_LR300 97
#define SAA7134_BOARD_PROTEUS_2309 98
#define SAA7134_BOARD_AVERMEDIA_A16AR   99
#define SAA7134_BOARD_ASUS_EUROPA2_HYBRID 100
#define SAA7134_BOARD_PINNACLE_PCTV_310i  101
#define SAA7134_BOARD_AVERMEDIA_STUDIO_507 102
#define SAA7134_BOARD_VIDEOMATE_DVBT_200A  103
#define SAA7134_BOARD_HAUPPAUGE_HVR1110    104
#define SAA7134_BOARD_CINERGY_HT_PCMCIA    105
#define SAA7134_BOARD_ENCORE_ENLTV         106
#define SAA7134_BOARD_ENCORE_ENLTV_FM      107
#define SAA7134_BOARD_CINERGY_HT_PCI       108
#define SAA7134_BOARD_PHILIPS_TIGER_S      109
#define SAA7134_BOARD_AVERMEDIA_M102	   110
#define SAA7134_BOARD_ASUS_P7131_4871	   111
#define SAA7134_BOARD_ASUSTeK_P7131_HYBRID_LNA 112
#define SAA7134_BOARD_ECS_TVP3XP_4CB6  113
#define SAA7134_BOARD_KWORLD_DVBT_210 114
#define SAA7134_BOARD_SABRENT_TV_PCB05     115
#define SAA7134_BOARD_10MOONSTVMASTER3     116
#define SAA7134_BOARD_AVERMEDIA_SUPER_007  117
#define SAA7134_BOARD_BEHOLD_401  	118
#define SAA7134_BOARD_BEHOLD_403  	119
#define SAA7134_BOARD_BEHOLD_403FM	120
#define SAA7134_BOARD_BEHOLD_405	121
#define SAA7134_BOARD_BEHOLD_405FM	122
#define SAA7134_BOARD_BEHOLD_407	123
#define SAA7134_BOARD_BEHOLD_407FM	124
#define SAA7134_BOARD_BEHOLD_409	125
#define SAA7134_BOARD_BEHOLD_505FM	126
#define SAA7134_BOARD_BEHOLD_507_9FM	127
#define SAA7134_BOARD_BEHOLD_COLUMBUS_TVFM 128
#define SAA7134_BOARD_BEHOLD_607FM_MK3	129
#define SAA7134_BOARD_BEHOLD_M6		130
#define SAA7134_BOARD_TWINHAN_DTV_DVB_3056 131
#define SAA7134_BOARD_GENIUS_TVGO_A11MCE   132
#define SAA7134_BOARD_PHILIPS_SNAKE        133
#define SAA7134_BOARD_CREATIX_CTX953       134
#define SAA7134_BOARD_MSI_TVANYWHERE_AD11  135
#define SAA7134_BOARD_AVERMEDIA_CARDBUS_506 136
#define SAA7134_BOARD_AVERMEDIA_A16D       137
#define SAA7134_BOARD_AVERMEDIA_M115       138
#define SAA7134_BOARD_VIDEOMATE_T750       139
#define SAA7134_BOARD_AVERMEDIA_A700_PRO    140
#define SAA7134_BOARD_AVERMEDIA_A700_HYBRID 141
#define SAA7134_BOARD_BEHOLD_H6      142
#define SAA7134_BOARD_BEHOLD_M63      143
#define SAA7134_BOARD_BEHOLD_M6_EXTRA    144
#define SAA7134_BOARD_AVERMEDIA_M103    145
#define SAA7134_BOARD_ASUSTeK_P7131_ANALOG 146
#define SAA7134_BOARD_ASUSTeK_TIGER_3IN1   147
#define SAA7134_BOARD_ENCORE_ENLTV_FM53 148
#define SAA7134_BOARD_AVERMEDIA_M135A    149
#define SAA7134_BOARD_REAL_ANGEL_220     150
#define SAA7134_BOARD_ADS_INSTANT_HDTV_PCI  151
#define SAA7134_BOARD_ASUSTeK_TIGER         152
#define SAA7134_BOARD_KWORLD_PLUS_TV_ANALOG 153
#define SAA7134_BOARD_AVERMEDIA_GO_007_FM_PLUS 154
#define SAA7134_BOARD_HAUPPAUGE_HVR1150     155
#define SAA7134_BOARD_HAUPPAUGE_HVR1120   156
#define SAA7134_BOARD_AVERMEDIA_STUDIO_507UA 157
#define SAA7134_BOARD_AVERMEDIA_CARDBUS_501 158
#define SAA7134_BOARD_BEHOLD_505RDS_MK5     159
#define SAA7134_BOARD_BEHOLD_507RDS_MK3     160
#define SAA7134_BOARD_BEHOLD_507RDS_MK5     161
#define SAA7134_BOARD_BEHOLD_607FM_MK5      162
#define SAA7134_BOARD_BEHOLD_609FM_MK3      163
#define SAA7134_BOARD_BEHOLD_609FM_MK5      164
#define SAA7134_BOARD_BEHOLD_607RDS_MK3     165
#define SAA7134_BOARD_BEHOLD_607RDS_MK5     166
#define SAA7134_BOARD_BEHOLD_609RDS_MK3     167
#define SAA7134_BOARD_BEHOLD_609RDS_MK5     168
#define SAA7134_BOARD_VIDEOMATE_S350        169
#define SAA7134_BOARD_AVERMEDIA_STUDIO_505  170
#define SAA7134_BOARD_BEHOLD_X7             171
#define SAA7134_BOARD_ROVERMEDIA_LINK_PRO_FM 172
#define SAA7134_BOARD_ZOLID_HYBRID_PCI		173
#define SAA7134_BOARD_ASUS_EUROPA_HYBRID	174
#define SAA7134_BOARD_LEADTEK_WINFAST_DTV1000S 175
#define SAA7134_BOARD_BEHOLD_505RDS_MK3     176
#define SAA7134_BOARD_HAWELL_HW_404M7		177
#define SAA7134_BOARD_BEHOLD_H7             178
#define SAA7134_BOARD_BEHOLD_A7             179
#define SAA7134_BOARD_AVERMEDIA_M733A       180
#define SAA7134_BOARD_TECHNOTREND_BUDGET_T3000 181
#define SAA7134_BOARD_KWORLD_PCI_SBTVD_FULLSEG 182
#define SAA7134_BOARD_VIDEOMATE_M1F         183
#define SAA7134_BOARD_ENCORE_ENLTV_FM3      184
#define SAA7134_BOARD_MAGICPRO_PROHDTV_PRO2 185
#define SAA7134_BOARD_BEHOLD_501            186
#define SAA7134_BOARD_BEHOLD_503FM          187
#define SAA7134_MAXBOARDS 32
#define SAA7134_INPUT_MAX 8
#define SAA7134_REMOTE_GPIO  1
#define SAA7134_REMOTE_I2C   2
#define SET_T_CODE_POLARITY_NON_INVERTED	(1 << 0)
#define SET_CLOCK_NOT_DELAYED			(1 << 1)
#define SET_CLOCK_INVERTED			(1 << 2)
#define SET_VSYNC_OFF				(1 << 3)
struct saa7134_input ;
enum saa7134_mpeg_type ;
enum saa7134_mpeg_ts_type ;
struct saa7134_board ;
#define card_has_radio(dev)   (NULL != saa7134_boards[dev->board].radio.name)
#define card_is_empress(dev)  (SAA7134_MPEG_EMPRESS == saa7134_boards[dev->board].mpeg)
#define card_is_dvb(dev)      (SAA7134_MPEG_DVB     == saa7134_boards[dev->board].mpeg)
#define card_has_mpeg(dev)    (SAA7134_MPEG_UNUSED  != saa7134_boards[dev->board].mpeg)
#define card(dev)             (saa7134_boards[dev->board])
#define card_in(dev,n)        (saa7134_boards[dev->board].inputs[n])
#define RESOURCE_OVERLAY       1
#define RESOURCE_VIDEO         2
#define RESOURCE_VBI           4
#define INTERLACE_AUTO         0
#define INTERLACE_ON           1
#define INTERLACE_OFF          2
#define BUFFER_TIMEOUT     msecs_to_jiffies(500)
#define TS_BUFFER_TIMEOUT  msecs_to_jiffies(1000)
struct saa7134_dev;
struct saa7134_dma;
struct saa7134_pgtable ;
struct saa7134_thread ;
struct saa7134_buf ;
struct saa7134_dmaqueue ;
struct saa7134_fh ;
struct saa7134_dmasound ;
struct saa7134_ts ;
struct saa7134_mpeg_ops ;
struct saa7134_dev ;
#define saa_readl(reg)             readl(dev->lmmio + (reg))
#define saa_writel(reg,value)      writel((value), dev->lmmio + (reg));
#define saa_andorl(reg,mask,value) \
writel((readl(dev->lmmio+(reg)) & ~(mask)) |\
((value) & (mask)), dev->lmmio+(reg))
#define saa_setl(reg,bit)          saa_andorl((reg),(bit),(bit))
#define saa_clearl(reg,bit)        saa_andorl((reg),(bit),0)
#define saa_readb(reg)             readb(dev->bmmio + (reg))
#define saa_writeb(reg,value)      writeb((value), dev->bmmio + (reg));
#define saa_andorb(reg,mask,value) \
writeb((readb(dev->bmmio+(reg)) & ~(mask)) |\
((value) & (mask)), dev->bmmio+(reg))
#define saa_setb(reg,bit)          saa_andorb((reg),(bit),(bit))
#define saa_clearb(reg,bit)        saa_andorb((reg),(bit),0)
#define saa_wait(us)
#define SAA7134_NORMS	(\
V4L2_STD_PAL    | V4L2_STD_PAL_N | \
V4L2_STD_PAL_Nc | V4L2_STD_SECAM | \
V4L2_STD_NTSC   | V4L2_STD_PAL_M | \
V4L2_STD_PAL_60)
#define GRP_EMPRESS (1)
#define saa_call_all(dev, o, f, args...) do  while (0)
#define saa_call_empress(dev, o, f, args...) ()
extern struct list_head  saa7134_devlist;
extern struct mutex saa7134_devlist_lock;
extern int saa7134_no_overlay;
void saa7134_track_gpio(struct saa7134_dev *dev, char *msg);
void saa7134_set_gpio(struct saa7134_dev *dev, int bit_no, int value);
#define SAA7134_PGTABLE_SIZE 4096
int saa7134_pgtable_alloc(struct pci_dev *pci, struct saa7134_pgtable *pt);
int  saa7134_pgtable_build(struct pci_dev *pci, struct saa7134_pgtable *pt,
struct scatterlist *list, unsigned int length,
unsigned int startpage);
void saa7134_pgtable_free(struct pci_dev *pci, struct saa7134_pgtable *pt);
int saa7134_buffer_count(unsigned int size, unsigned int count);
int saa7134_buffer_startpage(struct saa7134_buf *buf);
unsigned long saa7134_buffer_base(struct saa7134_buf *buf);
int saa7134_buffer_queue(struct saa7134_dev *dev, struct saa7134_dmaqueue *q,
struct saa7134_buf *buf);
void saa7134_buffer_finish(struct saa7134_dev *dev, struct saa7134_dmaqueue *q,
unsigned int state);
void saa7134_buffer_next(struct saa7134_dev *dev, struct saa7134_dmaqueue *q);
void saa7134_buffer_timeout(unsigned long data);
void saa7134_dma_free(struct videobuf_queue *q,struct saa7134_buf *buf);
int saa7134_set_dmabits(struct saa7134_dev *dev);
extern int (*saa7134_dmasound_init)(struct saa7134_dev *dev);
extern int (*saa7134_dmasound_exit)(struct saa7134_dev *dev);
extern struct saa7134_board saa7134_boards[];
extern const unsigned int saa7134_bcount;
extern struct pci_device_id __devinitdata saa7134_pci_tbl[];
extern int saa7134_board_init1(struct saa7134_dev *dev);
extern int saa7134_board_init2(struct saa7134_dev *dev);
int saa7134_tuner_callback(void *priv, int component, int command, int arg);
int saa7134_i2c_register(struct saa7134_dev *dev);
int saa7134_i2c_unregister(struct saa7134_dev *dev);
extern unsigned int video_debug;
extern struct video_device saa7134_video_template;
extern struct video_device saa7134_radio_template;
int saa7134_s_ctrl_internal(struct saa7134_dev *dev,  struct saa7134_fh *fh, struct v4l2_control *c);
int saa7134_g_ctrl_internal(struct saa7134_dev *dev,  struct saa7134_fh *fh, struct v4l2_control *c);
int saa7134_queryctrl(struct file *file, void *priv, struct v4l2_queryctrl *c);
int saa7134_s_std_internal(struct saa7134_dev *dev,  struct saa7134_fh *fh, v4l2_std_id *id);
int saa7134_videoport_init(struct saa7134_dev *dev);
void saa7134_set_tvnorm_hw(struct saa7134_dev *dev);
int saa7134_video_init1(struct saa7134_dev *dev);
int saa7134_video_init2(struct saa7134_dev *dev);
void saa7134_irq_video_signalchange(struct saa7134_dev *dev);
void saa7134_irq_video_done(struct saa7134_dev *dev, unsigned long status);
#define TS_PACKET_SIZE 188
extern struct videobuf_queue_ops saa7134_ts_qops;
int saa7134_ts_init1(struct saa7134_dev *dev);
int saa7134_ts_fini(struct saa7134_dev *dev);
void saa7134_irq_ts_done(struct saa7134_dev *dev, unsigned long status);
int saa7134_ts_register(struct saa7134_mpeg_ops *ops);
void saa7134_ts_unregister(struct saa7134_mpeg_ops *ops);
int saa7134_ts_init_hw(struct saa7134_dev *dev);
int saa7134_ts_start(struct saa7134_dev *dev);
int saa7134_ts_stop(struct saa7134_dev *dev);
extern struct videobuf_queue_ops saa7134_vbi_qops;
extern struct video_device saa7134_vbi_template;
int saa7134_vbi_init1(struct saa7134_dev *dev);
int saa7134_vbi_fini(struct saa7134_dev *dev);
void saa7134_irq_vbi_done(struct saa7134_dev *dev, unsigned long status);
int saa7134_tvaudio_rx2mode(u32 rx);
void saa7134_tvaudio_setmute(struct saa7134_dev *dev);
void saa7134_tvaudio_setinput(struct saa7134_dev *dev,
struct saa7134_input *in);
void saa7134_tvaudio_setvolume(struct saa7134_dev *dev, int level);
int saa7134_tvaudio_getstereo(struct saa7134_dev *dev);
void saa7134_tvaudio_init(struct saa7134_dev *dev);
int saa7134_tvaudio_init2(struct saa7134_dev *dev);
int saa7134_tvaudio_fini(struct saa7134_dev *dev);
int saa7134_tvaudio_do_scan(struct saa7134_dev *dev);
int saa_dsp_writel(struct saa7134_dev *dev, int reg, u32 value);
void saa7134_enable_i2s(struct saa7134_dev *dev);
extern const struct file_operations saa7134_dsp_fops;
extern const struct file_operations saa7134_mixer_fops;
int saa7134_oss_init1(struct saa7134_dev *dev);
int saa7134_oss_fini(struct saa7134_dev *dev);
void saa7134_irq_oss_done(struct saa7134_dev *dev, unsigned long status);
#if defined(CONFIG_VIDEO_SAA7134_RC)
int  saa7134_input_init1(struct saa7134_dev *dev);
void saa7134_input_fini(struct saa7134_dev *dev);
void saa7134_input_irq(struct saa7134_dev *dev);
void saa7134_probe_i2c_ir(struct saa7134_dev *dev);
int saa7134_ir_start(struct saa7134_dev *dev);
void saa7134_ir_stop(struct saa7134_dev *dev);
#define saa7134_input_init1(dev)	(0)
#define saa7134_input_fini(dev)		(0)
#define saa7134_input_irq(dev)		(0)
#define saa7134_probe_i2c_ir(dev)	(0)
#define saa7134_ir_start(dev)		(0)
#define saa7134_ir_stop(dev)		(0)
