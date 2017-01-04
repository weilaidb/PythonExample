#define _EM28XX_H
#if defined(CONFIG_VIDEO_EM28XX_DVB) || defined(CONFIG_VIDEO_EM28XX_DVB_MODULE)
#define EM2800_BOARD_UNKNOWN			0
#define EM2820_BOARD_UNKNOWN			1
#define EM2820_BOARD_TERRATEC_CINERGY_250	2
#define EM2820_BOARD_PINNACLE_USB_2		3
#define EM2820_BOARD_HAUPPAUGE_WINTV_USB_2      4
#define EM2820_BOARD_MSI_VOX_USB_2              5
#define EM2800_BOARD_TERRATEC_CINERGY_200       6
#define EM2800_BOARD_LEADTEK_WINFAST_USBII      7
#define EM2800_BOARD_KWORLD_USB2800             8
#define EM2820_BOARD_PINNACLE_DVC_90		9
#define EM2880_BOARD_HAUPPAUGE_WINTV_HVR_900	10
#define EM2880_BOARD_TERRATEC_HYBRID_XS		11
#define EM2820_BOARD_KWORLD_PVRTV2800RF		12
#define EM2880_BOARD_TERRATEC_PRODIGY_XS	13
#define EM2820_BOARD_PROLINK_PLAYTV_USB2	14
#define EM2800_BOARD_VGEAR_POCKETTV             15
#define EM2883_BOARD_HAUPPAUGE_WINTV_HVR_950	16
#define EM2880_BOARD_PINNACLE_PCTV_HD_PRO	17
#define EM2880_BOARD_HAUPPAUGE_WINTV_HVR_900_R2	18
#define EM2860_BOARD_SAA711X_REFERENCE_DESIGN	19
#define EM2880_BOARD_AMD_ATI_TV_WONDER_HD_600   20
#define EM2800_BOARD_GRABBEEX_USB2800           21
#define EM2750_BOARD_UNKNOWN			  22
#define EM2750_BOARD_DLCW_130			  23
#define EM2820_BOARD_DLINK_USB_TV		  24
#define EM2820_BOARD_GADMEI_UTV310		  25
#define EM2820_BOARD_HERCULES_SMART_TV_USB2	  26
#define EM2820_BOARD_PINNACLE_USB_2_FM1216ME	  27
#define EM2820_BOARD_LEADTEK_WINFAST_USBII_DELUXE 28
#define EM2860_BOARD_TVP5150_REFERENCE_DESIGN	  29
#define EM2820_BOARD_VIDEOLOGY_20K14XUSB	  30
#define EM2821_BOARD_USBGEAR_VD204		  31
#define EM2821_BOARD_SUPERCOMP_USB_2		  32
#define EM2860_BOARD_ELGATO_VIDEO_CAPTURE	  33
#define EM2860_BOARD_TERRATEC_HYBRID_XS		  34
#define EM2860_BOARD_TYPHOON_DVD_MAKER		  35
#define EM2860_BOARD_NETGMBH_CAM		  36
#define EM2860_BOARD_GADMEI_UTV330		  37
#define EM2861_BOARD_YAKUMO_MOVIE_MIXER		  38
#define EM2861_BOARD_KWORLD_PVRTV_300U		  39
#define EM2861_BOARD_PLEXTOR_PX_TV100U		  40
#define EM2870_BOARD_KWORLD_350U		  41
#define EM2870_BOARD_KWORLD_355U		  42
#define EM2870_BOARD_TERRATEC_XS		  43
#define EM2870_BOARD_TERRATEC_XS_MT2060		  44
#define EM2870_BOARD_PINNACLE_PCTV_DVB		  45
#define EM2870_BOARD_COMPRO_VIDEOMATE		  46
#define EM2880_BOARD_KWORLD_DVB_305U		  47
#define EM2880_BOARD_KWORLD_DVB_310U		  48
#define EM2880_BOARD_MSI_DIGIVOX_AD		  49
#define EM2880_BOARD_MSI_DIGIVOX_AD_II		  50
#define EM2880_BOARD_TERRATEC_HYBRID_XS_FR	  51
#define EM2881_BOARD_DNT_DA2_HYBRID		  52
#define EM2881_BOARD_PINNACLE_HYBRID_PRO	  53
#define EM2882_BOARD_KWORLD_VS_DVBT		  54
#define EM2882_BOARD_TERRATEC_HYBRID_XS		  55
#define EM2882_BOARD_PINNACLE_HYBRID_PRO_330E	  56
#define EM2883_BOARD_KWORLD_HYBRID_330U                  57
#define EM2820_BOARD_COMPRO_VIDEOMATE_FORYOU	  58
#define EM2883_BOARD_HAUPPAUGE_WINTV_HVR_850	  60
#define EM2820_BOARD_PROLINK_PLAYTV_BOX4_USB2	  61
#define EM2820_BOARD_GADMEI_TVR200		  62
#define EM2860_BOARD_KAIOMY_TVNPC_U2              63
#define EM2860_BOARD_EASYCAP                      64
#define EM2820_BOARD_IODATA_GVMVP_SZ		  65
#define EM2880_BOARD_EMPIRE_DUAL_TV		  66
#define EM2860_BOARD_TERRATEC_GRABBY		  67
#define EM2860_BOARD_TERRATEC_AV350		  68
#define EM2882_BOARD_KWORLD_ATSC_315U		  69
#define EM2882_BOARD_EVGA_INDTUBE		  70
#define EM2820_BOARD_SILVERCREST_WEBCAM           71
#define EM2861_BOARD_GADMEI_UTV330PLUS           72
#define EM2870_BOARD_REDDO_DVB_C_USB_BOX          73
#define EM2800_BOARD_VC211A			  74
#define EM2882_BOARD_DIKOM_DK300		  75
#define EM2870_BOARD_KWORLD_A340		  76
#define EM2874_LEADERSHIP_ISDBT			  77
#define EM28174_BOARD_PCTV_290E                   78
#define EM28XX_MIN_BUF 4
#define EM28XX_DEF_BUF 8
#define URB_MAX_CTRL_SIZE 80
#define EM28XX_BOARD_NOT_VALIDATED 1
#define EM28XX_BOARD_VALIDATED	   0
#define EM28XX_START_AUDIO      1
#define EM28XX_STOP_AUDIO       0
#define EM28XX_MAXBOARDS 4
#define EM28XX_NUM_FRAMES 5
#define EM28XX_NUM_READ_FRAMES 2
#define EM28XX_NUM_BUFS 5
#define EM28XX_NUM_PACKETS 64
#define EM28XX_INTERLACED_DEFAULT 1
#define EM28XX_URB_TIMEOUT \
msecs_to_jiffies(EM28XX_NUM_BUFS * EM28XX_NUM_PACKETS)
#define EM2800_I2C_WRITE_TIMEOUT 20
enum em28xx_mode ;
struct em28xx;
struct em28xx_usb_isoc_ctl ;
struct em28xx_fmt ;
struct em28xx_buffer ;
struct em28xx_dmaqueue ;
enum em28xx_io_method ;
#define MAX_EM28XX_INPUT 4
enum enum28xx_itype ;
enum em28xx_ac97_mode ;
struct em28xx_audio_mode ;
enum em28xx_amux ;
enum em28xx_aout ;
static inline int ac97_return_record_select(int a_out)
struct em28xx_reg_seq ;
struct em28xx_input ;
#define INPUT(nr) (&em28xx_boards[dev->model].input[nr])
enum em28xx_decoder ;
enum em28xx_sensor ;
enum em28xx_adecoder ;
struct em28xx_board ;
struct em28xx_eeprom ;
enum em28xx_dev_state ;
#define EM28XX_AUDIO_BUFS 5
#define EM28XX_NUM_AUDIO_PACKETS 64
#define EM28XX_AUDIO_MAX_PACKET_SIZE 196
#define EM28XX_CAPTURE_STREAM_EN 1
#define EM28XX_AUDIO   0x10
#define EM28XX_DVB     0x20
#define EM28XX_RESOURCE_VIDEO 0x01
#define EM28XX_RESOURCE_VBI   0x02
struct em28xx_audio ;
struct em28xx;
struct em28xx_fh ;
struct em28xx ;
struct em28xx_ops ;
void em28xx_do_i2c_scan(struct em28xx *dev);
int  em28xx_i2c_register(struct em28xx *dev);
int  em28xx_i2c_unregister(struct em28xx *dev);
u32 em28xx_request_buffers(struct em28xx *dev, u32 count);
void em28xx_queue_unusedframes(struct em28xx *dev);
void em28xx_release_buffers(struct em28xx *dev);
int em28xx_read_reg_req_len(struct em28xx *dev, u8 req, u16 reg,
char *buf, int len);
int em28xx_read_reg_req(struct em28xx *dev, u8 req, u16 reg);
int em28xx_read_reg(struct em28xx *dev, u16 reg);
int em28xx_write_regs_req(struct em28xx *dev, u8 req, u16 reg, char *buf,
int len);
int em28xx_write_regs(struct em28xx *dev, u16 reg, char *buf, int len);
int em28xx_write_reg(struct em28xx *dev, u16 reg, u8 val);
int em28xx_write_reg_bits(struct em28xx *dev, u16 reg, u8 val,
u8 bitmask);
int em28xx_read_ac97(struct em28xx *dev, u8 reg);
int em28xx_write_ac97(struct em28xx *dev, u8 reg, u16 val);
int em28xx_audio_analog_set(struct em28xx *dev);
int em28xx_audio_setup(struct em28xx *dev);
int em28xx_colorlevels_set_default(struct em28xx *dev);
int em28xx_capture_start(struct em28xx *dev, int start);
int em28xx_vbi_supported(struct em28xx *dev);
int em28xx_set_outfmt(struct em28xx *dev);
int em28xx_resolution_set(struct em28xx *dev);
int em28xx_set_alternate(struct em28xx *dev);
int em28xx_init_isoc(struct em28xx *dev, int max_packets,
int num_bufs, int max_pkt_size,
int (*isoc_copy) (struct em28xx *dev, struct urb *urb));
void em28xx_uninit_isoc(struct em28xx *dev);
int em28xx_isoc_dvb_max_packetsize(struct em28xx *dev);
int em28xx_set_mode(struct em28xx *dev, enum em28xx_mode set_mode);
int em28xx_gpio_set(struct em28xx *dev, struct em28xx_reg_seq *gpio);
void em28xx_wake_i2c(struct em28xx *dev);
void em28xx_remove_from_devlist(struct em28xx *dev);
void em28xx_add_into_devlist(struct em28xx *dev);
int em28xx_register_extension(struct em28xx_ops *dev);
void em28xx_unregister_extension(struct em28xx_ops *dev);
void em28xx_init_extension(struct em28xx *dev);
void em28xx_close_extension(struct em28xx *dev);
int em28xx_register_analog_devices(struct em28xx *dev);
void em28xx_release_analog_resources(struct em28xx *dev);
extern int em2800_variant_detect(struct usb_device *udev, int model);
extern void em28xx_pre_card_setup(struct em28xx *dev);
extern void em28xx_card_setup(struct em28xx *dev);
extern struct em28xx_board em28xx_boards[];
extern struct usb_device_id em28xx_id_table[];
extern const unsigned int em28xx_bcount;
void em28xx_register_i2c_ir(struct em28xx *dev);
int em28xx_tuner_callback(void *ptr, int component, int command, int arg);
void em28xx_release_resources(struct em28xx *dev);
int em28xx_get_key_terratec(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw);
int em28xx_get_key_em_haup(struct IR_i2c *ir, u32 *ir_key, u32 *ir_raw);
int em28xx_get_key_pinnacle_usb_grey(struct IR_i2c *ir, u32 *ir_key,
u32 *ir_raw);
int em28xx_get_key_winfast_usbii_deluxe(struct IR_i2c *ir, u32 *ir_key,
u32 *ir_raw);
void em28xx_register_snapshot_button(struct em28xx *dev);
void em28xx_deregister_snapshot_button(struct em28xx *dev);
int em28xx_ir_init(struct em28xx *dev);
int em28xx_ir_fini(struct em28xx *dev);
extern struct videobuf_queue_ops em28xx_vbi_qops;
#define em28xx_err(fmt, arg...) do  while (0)
#define em28xx_errdev(fmt, arg...) do  while (0)
#define em28xx_info(fmt, arg...) do  while (0)
#define em28xx_warn(fmt, arg...) do  while (0)
static inline int em28xx_compression_disable(struct em28xx *dev)
static inline int em28xx_contrast_get(struct em28xx *dev)
static inline int em28xx_brightness_get(struct em28xx *dev)
static inline int em28xx_saturation_get(struct em28xx *dev)
static inline int em28xx_u_balance_get(struct em28xx *dev)
static inline int em28xx_v_balance_get(struct em28xx *dev)
static inline int em28xx_gamma_get(struct em28xx *dev)
static inline int em28xx_contrast_set(struct em28xx *dev, s32 val)
static inline int em28xx_brightness_set(struct em28xx *dev, s32 val)
static inline int em28xx_saturation_set(struct em28xx *dev, s32 val)
static inline int em28xx_u_balance_set(struct em28xx *dev, s32 val)
static inline int em28xx_v_balance_set(struct em28xx *dev, s32 val)
static inline int em28xx_gamma_set(struct em28xx *dev, s32 val)
static inline unsigned int norm_maxw(struct em28xx *dev)
static inline unsigned int norm_maxh(struct em28xx *dev)
