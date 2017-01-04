int cx18_first_minor;
int (*cx18_ext_init)(struct cx18 *);
EXPORT_SYMBOL(cx18_ext_init);
static struct pci_device_id cx18_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, cx18_pci_tbl);
static atomic_t cx18_instance = ATOMIC_INIT(0);
static int cardtype[CX18_MAX_CARDS];
static int tuner[CX18_MAX_CARDS] = ;
static int radio[CX18_MAX_CARDS] = ;
static unsigned cardtype_c = 1;
static unsigned tuner_c = 1;
static unsigned radio_c = 1;
static char pal[] = "--";
static char secam[] = "--";
static char ntsc[] = "-";
static int enc_ts_buffers = CX18_DEFAULT_ENC_TS_BUFFERS;
static int enc_mpg_buffers = CX18_DEFAULT_ENC_MPG_BUFFERS;
static int enc_idx_buffers = CX18_DEFAULT_ENC_IDX_BUFFERS;
static int enc_yuv_buffers = CX18_DEFAULT_ENC_YUV_BUFFERS;
static int enc_vbi_buffers = CX18_DEFAULT_ENC_VBI_BUFFERS;
static int enc_pcm_buffers = CX18_DEFAULT_ENC_PCM_BUFFERS;
static int enc_ts_bufsize = CX18_DEFAULT_ENC_TS_BUFSIZE;
static int enc_mpg_bufsize = CX18_DEFAULT_ENC_MPG_BUFSIZE;
static int enc_idx_bufsize = CX18_DEFAULT_ENC_IDX_BUFSIZE;
static int enc_yuv_bufsize = CX18_DEFAULT_ENC_YUV_BUFSIZE;
static int enc_pcm_bufsize = CX18_DEFAULT_ENC_PCM_BUFSIZE;
static int enc_ts_bufs = -1;
static int enc_mpg_bufs = -1;
static int enc_idx_bufs = CX18_MAX_FW_MDLS_PER_STREAM;
static int enc_yuv_bufs = -1;
static int enc_vbi_bufs = -1;
static int enc_pcm_bufs = -1;
static int cx18_pci_latency = 1;
static int mmio_ndelay;
static int retry_mmio = 1;
int cx18_debug;
module_param_array(tuner, int, &tuner_c, 0644);
module_param_array(radio, bool, &radio_c, 0644);
module_param_array(cardtype, int, &cardtype_c, 0644);
module_param_string(pal, pal, sizeof(pal), 0644);
module_param_string(secam, secam, sizeof(secam), 0644);
module_param_string(ntsc, ntsc, sizeof(ntsc), 0644);
module_param_named(debug, cx18_debug, int, 0644);
module_param(mmio_ndelay, int, 0644);
module_param(retry_mmio, int, 0644);
module_param(cx18_pci_latency, int, 0644);
module_param(cx18_first_minor, int, 0644);
module_param(enc_ts_buffers, int, 0644);
module_param(enc_mpg_buffers, int, 0644);
module_param(enc_idx_buffers, int, 0644);
module_param(enc_yuv_buffers, int, 0644);
module_param(enc_vbi_buffers, int, 0644);
module_param(enc_pcm_buffers, int, 0644);
module_param(enc_ts_bufsize, int, 0644);
module_param(enc_mpg_bufsize, int, 0644);
module_param(enc_idx_bufsize, int, 0644);
module_param(enc_yuv_bufsize, int, 0644);
module_param(enc_pcm_bufsize, int, 0644);
module_param(enc_ts_bufs, int, 0644);
module_param(enc_mpg_bufs, int, 0644);
module_param(enc_idx_bufs, int, 0644);
module_param(enc_yuv_bufs, int, 0644);
module_param(enc_vbi_bufs, int, 0644);
module_param(enc_pcm_bufs, int, 0644);
MODULE_PARM_DESC(tuner, "Tuner type selection,\n"
"\t\t\tsee tuner.h for values");
MODULE_PARM_DESC(radio,
"Enable or disable the radio. Use only if autodetection\n"
"\t\t\tfails. 0 = disable, 1 = enable");
MODULE_PARM_DESC(cardtype,
"Only use this option if your card is not detected properly.\n"
"\t\tSpecify card type:\n"
"\t\t\t 1 = Hauppauge HVR 1600 (ESMT memory)\n"
"\t\t\t 2 = Hauppauge HVR 1600 (Samsung memory)\n"
"\t\t\t 3 = Compro VideoMate H900\n"
"\t\t\t 4 = Yuan MPC718\n"
"\t\t\t 5 = Conexant Raptor PAL/SECAM\n"
"\t\t\t 6 = Toshiba Qosmio DVB-T/Analog\n"
"\t\t\t 7 = Leadtek WinFast PVR2100\n"
"\t\t\t 8 = Leadtek WinFast DVR3100 H\n"
"\t\t\t 9 = GoTView PCI DVD3 Hybrid\n"
"\t\t\t 10 = Hauppauge HVR 1600 (S5H1411)\n"
"\t\t\t 0 = Autodetect (default)\n"
"\t\t\t-1 = Ignore this card\n\t\t");
MODULE_PARM_DESC(pal, "Set PAL standard: B, G, H, D, K, I, M, N, Nc, 60");
MODULE_PARM_DESC(secam, "Set SECAM standard: B, G, H, D, K, L, LC");
MODULE_PARM_DESC(ntsc, "Set NTSC standard: M, J, K");
MODULE_PARM_DESC(debug,
"Debug level (bitmask). Default: 0\n"
"\t\t\t  1/0x0001: warning\n"
"\t\t\t  2/0x0002: info\n"
"\t\t\t  4/0x0004: mailbox\n"
"\t\t\t  8/0x0008: dma\n"
"\t\t\t 16/0x0010: ioctl\n"
"\t\t\t 32/0x0020: file\n"
"\t\t\t 64/0x0040: i2c\n"
"\t\t\t128/0x0080: irq\n"
"\t\t\t256/0x0100: high volume\n");
MODULE_PARM_DESC(cx18_pci_latency,
"Change the PCI latency to 64 if lower: 0 = No, 1 = Yes,\n"
"\t\t\tDefault: Yes");
MODULE_PARM_DESC(retry_mmio,
"(Deprecated) MMIO writes are now always checked and retried\n"
"\t\t\tEffectively: 1 [Yes]");
MODULE_PARM_DESC(mmio_ndelay,
"(Deprecated) MMIO accesses are now never purposely delayed\n"
"\t\t\tEffectively: 0 ns");
MODULE_PARM_DESC(enc_ts_buffers,
"Encoder TS buffer memory (MB). (enc_ts_bufs can override)\n"
"\t\t\tDefault: " __stringify(CX18_DEFAULT_ENC_TS_BUFFERS));
MODULE_PARM_DESC(enc_ts_bufsize,
"Size of an encoder TS buffer (kB)\n"
"\t\t\tDefault: " __stringify(CX18_DEFAULT_ENC_TS_BUFSIZE));
MODULE_PARM_DESC(enc_ts_bufs,
"Number of encoder TS buffers\n"
"\t\t\tDefault is computed from other enc_ts_* parameters");
MODULE_PARM_DESC(enc_mpg_buffers,
"Encoder MPG buffer memory (MB). (enc_mpg_bufs can override)\n"
"\t\t\tDefault: " __stringify(CX18_DEFAULT_ENC_MPG_BUFFERS));
MODULE_PARM_DESC(enc_mpg_bufsize,
"Size of an encoder MPG buffer (kB)\n"
"\t\t\tDefault: " __stringify(CX18_DEFAULT_ENC_MPG_BUFSIZE));
MODULE_PARM_DESC(enc_mpg_bufs,
"Number of encoder MPG buffers\n"
"\t\t\tDefault is computed from other enc_mpg_* parameters");
MODULE_PARM_DESC(enc_idx_buffers,
"(Deprecated) Encoder IDX buffer memory (MB)\n"
"\t\t\tIgnored, except 0 disables IDX buffer allocations\n"
"\t\t\tDefault: 1 [Enabled]");
MODULE_PARM_DESC(enc_idx_bufsize,
"Size of an encoder IDX buffer (kB)\n"
"\t\t\tAllowed values are multiples of 1.5 kB rounded up\n"
"\t\t\t(multiples of size required for 64 index entries)\n"
"\t\t\tDefault: 2");
MODULE_PARM_DESC(enc_idx_bufs,
"Number of encoder IDX buffers\n"
"\t\t\tDefault: " __stringify(CX18_MAX_FW_MDLS_PER_STREAM));
MODULE_PARM_DESC(enc_yuv_buffers,
"Encoder YUV buffer memory (MB). (enc_yuv_bufs can override)\n"
"\t\t\tDefault: " __stringify(CX18_DEFAULT_ENC_YUV_BUFFERS));
MODULE_PARM_DESC(enc_yuv_bufsize,
"Size of an encoder YUV buffer (kB)\n"
"\t\t\tAllowed values are multiples of 33.75 kB rounded up\n"
"\t\t\t(multiples of size required for 32 screen lines)\n"
"\t\t\tDefault: 102");
MODULE_PARM_DESC(enc_yuv_bufs,
"Number of encoder YUV buffers\n"
"\t\t\tDefault is computed from other enc_yuv_* parameters");
MODULE_PARM_DESC(enc_vbi_buffers,
"Encoder VBI buffer memory (MB). (enc_vbi_bufs can override)\n"
"\t\t\tDefault: " __stringify(CX18_DEFAULT_ENC_VBI_BUFFERS));
MODULE_PARM_DESC(enc_vbi_bufs,
"Number of encoder VBI buffers\n"
"\t\t\tDefault is computed from enc_vbi_buffers");
MODULE_PARM_DESC(enc_pcm_buffers,
"Encoder PCM buffer memory (MB). (enc_pcm_bufs can override)\n"
"\t\t\tDefault: " __stringify(CX18_DEFAULT_ENC_PCM_BUFFERS));
MODULE_PARM_DESC(enc_pcm_bufsize,
"Size of an encoder PCM buffer (kB)\n"
"\t\t\tDefault: " __stringify(CX18_DEFAULT_ENC_PCM_BUFSIZE));
MODULE_PARM_DESC(enc_pcm_bufs,
"Number of encoder PCM buffers\n"
"\t\t\tDefault is computed from other enc_pcm_* parameters");
MODULE_PARM_DESC(cx18_first_minor,
"Set device node number assigned to first card");
MODULE_AUTHOR("Hans Verkuil");
MODULE_DESCRIPTION("CX23418 driver");
MODULE_SUPPORTED_DEVICE("CX23418 MPEG2 encoder");
MODULE_LICENSE("GPL");
MODULE_VERSION(CX18_VERSION);
#if defined(CONFIG_MODULES) && defined(MODULE)
static void request_module_async(struct work_struct *work)
static void request_modules(struct cx18 *dev)
static void flush_request_modules(struct cx18 *dev)
#define request_modules(dev)
#define flush_request_modules(dev)
int cx18_msleep_timeout(unsigned int msecs, int intr)
static void cx18_iounmap(struct cx18 *cx)
static void cx18_eeprom_dump(struct cx18 *cx, unsigned char *eedata, int len)
void cx18_read_eeprom(struct cx18 *cx, struct tveeprom *tv)
static void cx18_process_eeprom(struct cx18 *cx)
static v4l2_std_id cx18_parse_std(struct cx18 *cx)
static void cx18_process_options(struct cx18 *cx)
static int __devinit cx18_create_in_workq(struct cx18 *cx)
static void __devinit cx18_init_in_work_orders(struct cx18 *cx)
static int __devinit cx18_init_struct1(struct cx18 *cx)
static void __devinit cx18_init_struct2(struct cx18 *cx)
static int cx18_setup_pci(struct cx18 *cx, struct pci_dev *pci_dev,
const struct pci_device_id *pci_id)
static void cx18_init_subdevs(struct cx18 *cx)
static int __devinit cx18_probe(struct pci_dev *pci_dev,
const struct pci_device_id *pci_id)
int cx18_init_on_first_open(struct cx18 *cx)
static void cx18_cancel_in_work_orders(struct cx18 *cx)
static void cx18_cancel_out_work_orders(struct cx18 *cx)
static void cx18_remove(struct pci_dev *pci_dev)
static struct pci_driver cx18_pci_driver = ;
static int __init module_start(void)
static void __exit module_cleanup(void)
module_init(module_start);
module_exit(module_cleanup);
