int ivtv_first_minor;
static struct pci_device_id ivtv_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci,ivtv_pci_tbl);
static atomic_t ivtv_instance = ATOMIC_INIT(0);
static int cardtype[IVTV_MAX_CARDS];
static int tuner[IVTV_MAX_CARDS] = ;
static int radio[IVTV_MAX_CARDS] = ;
static int i2c_clock_period[IVTV_MAX_CARDS] = ;
static unsigned int cardtype_c = 1;
static unsigned int tuner_c = 1;
static unsigned int radio_c = 1;
static unsigned int i2c_clock_period_c = 1;
static char pal[] = "---";
static char secam[] = "--";
static char ntsc[] = "-";
#define IVTV_DEFAULT_ENC_MPG_BUFFERS 4
#define IVTV_DEFAULT_ENC_YUV_BUFFERS 2
#define IVTV_DEFAULT_ENC_VBI_BUFFERS 1
#define IVTV_DEFAULT_ENC_PCM_BUFFERS 320
#define IVTV_DEFAULT_DEC_MPG_BUFFERS 1
#define IVTV_DEFAULT_DEC_YUV_BUFFERS 1
#define IVTV_DEFAULT_DEC_VBI_BUFFERS 64
static int enc_mpg_buffers = IVTV_DEFAULT_ENC_MPG_BUFFERS;
static int enc_yuv_buffers = IVTV_DEFAULT_ENC_YUV_BUFFERS;
static int enc_vbi_buffers = IVTV_DEFAULT_ENC_VBI_BUFFERS;
static int enc_pcm_buffers = IVTV_DEFAULT_ENC_PCM_BUFFERS;
static int dec_mpg_buffers = IVTV_DEFAULT_DEC_MPG_BUFFERS;
static int dec_yuv_buffers = IVTV_DEFAULT_DEC_YUV_BUFFERS;
static int dec_vbi_buffers = IVTV_DEFAULT_DEC_VBI_BUFFERS;
static int ivtv_yuv_mode;
static int ivtv_yuv_threshold = -1;
static int ivtv_pci_latency = 1;
int ivtv_debug;
int ivtv_fw_debug;
static int tunertype = -1;
static int newi2c = -1;
module_param_array(tuner, int, &tuner_c, 0644);
module_param_array(radio, bool, &radio_c, 0644);
module_param_array(cardtype, int, &cardtype_c, 0644);
module_param_string(pal, pal, sizeof(pal), 0644);
module_param_string(secam, secam, sizeof(secam), 0644);
module_param_string(ntsc, ntsc, sizeof(ntsc), 0644);
module_param_named(debug,ivtv_debug, int, 0644);
module_param_named(fw_debug, ivtv_fw_debug, int, 0644);
module_param(ivtv_pci_latency, int, 0644);
module_param(ivtv_yuv_mode, int, 0644);
module_param(ivtv_yuv_threshold, int, 0644);
module_param(ivtv_first_minor, int, 0644);
module_param(enc_mpg_buffers, int, 0644);
module_param(enc_yuv_buffers, int, 0644);
module_param(enc_vbi_buffers, int, 0644);
module_param(enc_pcm_buffers, int, 0644);
module_param(dec_mpg_buffers, int, 0644);
module_param(dec_yuv_buffers, int, 0644);
module_param(dec_vbi_buffers, int, 0644);
module_param(tunertype, int, 0644);
module_param(newi2c, int, 0644);
module_param_array(i2c_clock_period, int, &i2c_clock_period_c, 0644);
MODULE_PARM_DESC(tuner, "Tuner type selection,\n"
"\t\t\tsee tuner.h for values");
MODULE_PARM_DESC(radio,
"Enable or disable the radio. Use only if autodetection\n"
"\t\t\tfails. 0 = disable, 1 = enable");
MODULE_PARM_DESC(cardtype,
"Only use this option if your card is not detected properly.\n"
"\t\tSpecify card type:\n"
"\t\t\t 1 = WinTV PVR 250\n"
"\t\t\t 2 = WinTV PVR 350\n"
"\t\t\t 3 = WinTV PVR-150 or PVR-500\n"
"\t\t\t 4 = AVerMedia M179\n"
"\t\t\t 5 = YUAN MPG600/Kuroutoshikou iTVC16-STVLP\n"
"\t\t\t 6 = YUAN MPG160/Kuroutoshikou iTVC15-STVLP\n"
"\t\t\t 7 = YUAN PG600/DIAMONDMM PVR-550 (CX Falcon 2)\n"
"\t\t\t 8 = Adaptec AVC-2410\n"
"\t\t\t 9 = Adaptec AVC-2010\n"
"\t\t\t10 = NAGASE TRANSGEAR 5000TV\n"
"\t\t\t11 = AOpen VA2000MAX-STN6\n"
"\t\t\t12 = YUAN MPG600GR/Kuroutoshikou CX23416GYC-STVLP\n"
"\t\t\t13 = I/O Data GV-MVP/RX\n"
"\t\t\t14 = I/O Data GV-MVP/RX2E\n"
"\t\t\t15 = GOTVIEW PCI DVD\n"
"\t\t\t16 = GOTVIEW PCI DVD2 Deluxe\n"
"\t\t\t17 = Yuan MPC622\n"
"\t\t\t18 = Digital Cowboy DCT-MTVP1\n"
"\t\t\t19 = Yuan PG600V2/GotView PCI DVD Lite\n"
"\t\t\t20 = Club3D ZAP-TV1x01\n"
"\t\t\t21 = AverTV MCE 116 Plus\n"
"\t\t\t22 = ASUS Falcon2\n"
"\t\t\t23 = AverMedia PVR-150 Plus\n"
"\t\t\t24 = AverMedia EZMaker PCI Deluxe\n"
"\t\t\t25 = AverMedia M104 (not yet working)\n"
"\t\t\t26 = Buffalo PC-MV5L/PCI\n"
"\t\t\t27 = AVerMedia UltraTV 1500 MCE\n"
"\t\t\t28 = Sony VAIO Giga Pocket (ENX Kikyou)\n"
"\t\t\t 0 = Autodetect (default)\n"
"\t\t\t-1 = Ignore this card\n\t\t");
MODULE_PARM_DESC(pal, "Set PAL standard: BGH, DK, I, M, N, Nc, 60");
MODULE_PARM_DESC(secam, "Set SECAM standard: BGH, DK, L, LC");
MODULE_PARM_DESC(ntsc, "Set NTSC standard: M, J (Japan), K (South Korea)");
MODULE_PARM_DESC(tunertype,
"Specify tuner type:\n"
"\t\t\t 0 = tuner for PAL-B/G/H/D/K/I, SECAM-B/G/H/D/K/L/Lc\n"
"\t\t\t 1 = tuner for NTSC-M/J/K, PAL-M/N/Nc\n"
"\t\t\t-1 = Autodetect (default)\n");
MODULE_PARM_DESC(debug,
"Debug level (bitmask). Default: 0\n"
"\t\t\t   1/0x0001: warning\n"
"\t\t\t   2/0x0002: info\n"
"\t\t\t   4/0x0004: mailbox\n"
"\t\t\t   8/0x0008: ioctl\n"
"\t\t\t  16/0x0010: file\n"
"\t\t\t  32/0x0020: dma\n"
"\t\t\t  64/0x0040: irq\n"
"\t\t\t 128/0x0080: decoder\n"
"\t\t\t 256/0x0100: yuv\n"
"\t\t\t 512/0x0200: i2c\n"
"\t\t\t1024/0x0400: high volume\n");
MODULE_PARM_DESC(fw_debug,
"Enable code for debugging firmware problems.  Default: 0\n");
MODULE_PARM_DESC(ivtv_pci_latency,
"Change the PCI latency to 64 if lower: 0 = No, 1 = Yes,\n"
"\t\t\tDefault: Yes");
MODULE_PARM_DESC(ivtv_yuv_mode,
"Specify the yuv playback mode:\n"
"\t\t\t0 = interlaced\n\t\t\t1 = progressive\n\t\t\t2 = auto\n"
"\t\t\tDefault: 0 (interlaced)");
MODULE_PARM_DESC(ivtv_yuv_threshold,
"If ivtv_yuv_mode is 2 (auto) then playback content as\n\t\tprogressive if src height <= ivtv_yuvthreshold\n"
"\t\t\tDefault: 480");
MODULE_PARM_DESC(enc_mpg_buffers,
"Encoder MPG Buffers (in MB)\n"
"\t\t\tDefault: " __stringify(IVTV_DEFAULT_ENC_MPG_BUFFERS));
MODULE_PARM_DESC(enc_yuv_buffers,
"Encoder YUV Buffers (in MB)\n"
"\t\t\tDefault: " __stringify(IVTV_DEFAULT_ENC_YUV_BUFFERS));
MODULE_PARM_DESC(enc_vbi_buffers,
"Encoder VBI Buffers (in MB)\n"
"\t\t\tDefault: " __stringify(IVTV_DEFAULT_ENC_VBI_BUFFERS));
MODULE_PARM_DESC(enc_pcm_buffers,
"Encoder PCM buffers (in kB)\n"
"\t\t\tDefault: " __stringify(IVTV_DEFAULT_ENC_PCM_BUFFERS));
MODULE_PARM_DESC(dec_mpg_buffers,
"Decoder MPG buffers (in MB)\n"
"\t\t\tDefault: " __stringify(IVTV_DEFAULT_DEC_MPG_BUFFERS));
MODULE_PARM_DESC(dec_yuv_buffers,
"Decoder YUV buffers (in MB)\n"
"\t\t\tDefault: " __stringify(IVTV_DEFAULT_DEC_YUV_BUFFERS));
MODULE_PARM_DESC(dec_vbi_buffers,
"Decoder VBI buffers (in kB)\n"
"\t\t\tDefault: " __stringify(IVTV_DEFAULT_DEC_VBI_BUFFERS));
MODULE_PARM_DESC(newi2c,
"Use new I2C implementation\n"
"\t\t\t-1 is autodetect, 0 is off, 1 is on\n"
"\t\t\tDefault is autodetect");
MODULE_PARM_DESC(i2c_clock_period,
"Period of SCL for the I2C bus controlled by the CX23415/6\n"
"\t\t\tMin: 10 usec (100 kHz), Max: 4500 usec (222 Hz)\n"
"\t\t\tDefault: " __stringify(IVTV_DEFAULT_I2C_CLOCK_PERIOD));
MODULE_PARM_DESC(ivtv_first_minor, "Set device node number assigned to first card");
MODULE_AUTHOR("Kevin Thayer, Chris Kennedy, Hans Verkuil");
MODULE_DESCRIPTION("CX23415/CX23416 driver");
MODULE_SUPPORTED_DEVICE
("CX23415/CX23416 MPEG2 encoder (WinTV PVR-150/250/350/500,\n"
"\t\t\tYuan MPG series and similar)");
MODULE_LICENSE("GPL");
MODULE_VERSION(IVTV_VERSION);
void ivtv_clear_irq_mask(struct ivtv *itv, u32 mask)
void ivtv_set_irq_mask(struct ivtv *itv, u32 mask)
int ivtv_set_output_mode(struct ivtv *itv, int mode)
struct ivtv_stream *ivtv_get_output_stream(struct ivtv *itv)
int ivtv_waitq(wait_queue_head_t *waitq)
int ivtv_msleep_timeout(unsigned int msecs, int intr)
static void ivtv_iounmap(struct ivtv *itv)
void ivtv_read_eeprom(struct ivtv *itv, struct tveeprom *tv)
static void ivtv_process_eeprom(struct ivtv *itv)
static v4l2_std_id ivtv_parse_std(struct ivtv *itv)
static void ivtv_process_options(struct ivtv *itv)
static int __devinit ivtv_init_struct1(struct ivtv *itv)
static void __devinit ivtv_init_struct2(struct ivtv *itv)
static int ivtv_setup_pci(struct ivtv *itv, struct pci_dev *pdev,
const struct pci_device_id *pci_id)
static void ivtv_load_and_init_modules(struct ivtv *itv)
static int __devinit ivtv_probe(struct pci_dev *pdev,
const struct pci_device_id *pci_id)
int ivtv_init_on_first_open(struct ivtv *itv)
static void ivtv_remove(struct pci_dev *pdev)
static struct pci_driver ivtv_pci_driver = ;
static int __init module_start(void)
static void __exit module_cleanup(void)
EXPORT_SYMBOL(ivtv_set_irq_mask);
EXPORT_SYMBOL(ivtv_api);
EXPORT_SYMBOL(ivtv_vapi);
EXPORT_SYMBOL(ivtv_vapi_result);
EXPORT_SYMBOL(ivtv_clear_irq_mask);
EXPORT_SYMBOL(ivtv_debug);
EXPORT_SYMBOL(ivtv_fw_debug);
EXPORT_SYMBOL(ivtv_reset_ir_gpio);
EXPORT_SYMBOL(ivtv_udma_setup);
EXPORT_SYMBOL(ivtv_udma_unmap);
EXPORT_SYMBOL(ivtv_udma_alloc);
EXPORT_SYMBOL(ivtv_udma_prepare);
EXPORT_SYMBOL(ivtv_init_on_first_open);
EXPORT_SYMBOL(ivtv_firmware_check);
module_init(module_start);
module_exit(module_cleanup);
