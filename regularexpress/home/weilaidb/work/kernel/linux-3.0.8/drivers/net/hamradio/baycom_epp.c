#define BAYCOM_DEBUG
#define BAYCOM_MAGIC 19730510
static const char paranoia_str[] = KERN_ERR
"baycom_epp: bad magic number for hdlcdrv_state struct in routine %s\n";
static const char bc_drvname[] = "baycom_epp";
static const char bc_drvinfo[] = KERN_INFO "baycom_epp: (C) 1998-2000 Thomas Sailer, HB9JNX/AE4WA\n"
"baycom_epp: version 0.7\n";
#define NR_PORTS 4
static struct net_device *baycom_device[NR_PORTS];
#define EPP_DCDBIT      0x80
#define EPP_PTTBIT      0x08
#define EPP_NREF        0x01
#define EPP_NRAEF       0x02
#define EPP_NRHF        0x04
#define EPP_NTHF        0x20
#define EPP_NTAEF       0x10
#define EPP_NTEF        EPP_PTTBIT
#define EPP_TX_FIFO_ENABLE 0x10
#define EPP_RX_FIFO_ENABLE 0x08
#define EPP_MODEM_ENABLE   0x20
#define EPP_LEDS           0xC0
#define EPP_IRQ_ENABLE     0x10
#define LPTREG_ECONTROL       0x402
#define LPTREG_CONFIGB        0x401
#define LPTREG_CONFIGA        0x400
#define LPTREG_EPPDATA        0x004
#define LPTREG_EPPADDR        0x003
#define LPTREG_CONTROL        0x002
#define LPTREG_STATUS         0x001
#define LPTREG_DATA           0x000
#define LPTCTRL_PROGRAM       0x04
#define LPTCTRL_WRITE         0x01
#define LPTCTRL_ADDRSTB       0x08
#define LPTCTRL_DATASTB       0x02
#define LPTCTRL_INTEN         0x10
#define LPTSTAT_SHIFT_NINTR   6
#define LPTSTAT_WAIT          0x80
#define LPTSTAT_NINTR         (1<<LPTSTAT_SHIFT_NINTR)
#define LPTSTAT_PE            0x20
#define LPTSTAT_DONE          0x10
#define LPTSTAT_NERROR        0x08
#define LPTSTAT_EPPTIMEOUT    0x01
#define LPTDATA_SHIFT_TDI     0
#define LPTDATA_SHIFT_TMS     2
#define LPTDATA_TDI           (1<<LPTDATA_SHIFT_TDI)
#define LPTDATA_TCK           0x02
#define LPTDATA_TMS           (1<<LPTDATA_SHIFT_TMS)
#define LPTDATA_INITBIAS      0x80
#define EPP_DCDBIT            0x80
#define EPP_PTTBIT            0x08
#define EPP_RXEBIT            0x01
#define EPP_RXAEBIT           0x02
#define EPP_RXHFULL           0x04
#define EPP_NTHF              0x20
#define EPP_NTAEF             0x10
#define EPP_NTEF              EPP_PTTBIT
#define EPP_TX_FIFO_ENABLE    0x10
#define EPP_RX_FIFO_ENABLE    0x08
#define EPP_MODEM_ENABLE      0x20
#define EPP_LEDS              0xC0
#define EPP_IRQ_ENABLE        0x10
#define XC4K_IRLENGTH   3
#define XC4K_EXTEST     0
#define XC4K_PRELOAD    1
#define XC4K_CONFIGURE  5
#define XC4K_BYPASS     7
#define EPP_CONVENTIONAL  0
#define EPP_FPGA          1
#define EPP_FPGAEXTSTATUS 2
#define TXBUFFER_SIZE     ((HDLCDRV_MAXFLEN*6/5)+8)
struct baycom_state ;
#define KISS_VERBOSE
#define PARAM_TXDELAY   1
#define PARAM_PERSIST   2
#define PARAM_SLOTTIME  3
#define PARAM_TXTAIL    4
#define PARAM_FULLDUP   5
#define PARAM_HARDWARE  6
#define PARAM_RETURN    255
static inline int check_crc_ccitt(const unsigned char *buf, int cnt)
static inline int calc_crc_ccitt(const unsigned char *buf, int cnt)
#define tenms_to_flags(bc,tenms) ((tenms * bc->bitrate) / 800)
static inline void baycom_int_freq(struct baycom_state *bc)
static char eppconfig_path[256] = "/usr/sbin/eppfpga";
static char *envp[] = ;
static int eppconfig(struct baycom_state *bc)
static inline void do_kiss_params(struct baycom_state *bc,
unsigned char *data, unsigned long len)
static void encode_hdlc(struct baycom_state *bc)
static int transmit(struct baycom_state *bc, int cnt, unsigned char stat)
static void do_rxpacket(struct net_device *dev)
static int receive(struct net_device *dev, int cnt)
#define GETTICK(x)                                                \
()
#define GETTICK(x)
static void epp_bh(struct work_struct *work)
static int baycom_send_packet(struct sk_buff *skb, struct net_device *dev)
static int baycom_set_mac_address(struct net_device *dev, void *addr)
static void epp_wakeup(void *handle)
static int epp_open(struct net_device *dev)
static int epp_close(struct net_device *dev)
static int baycom_setmode(struct baycom_state *bc, const char *modestr)
static int baycom_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static const struct net_device_ops baycom_netdev_ops = ;
static void baycom_probe(struct net_device *dev)
static const char *mode[NR_PORTS] = ;
static int iobase[NR_PORTS] = ;
module_param_array(mode, charp, NULL, 0);
MODULE_PARM_DESC(mode, "baycom operating mode");
module_param_array(iobase, int, NULL, 0);
MODULE_PARM_DESC(iobase, "baycom io base address");
MODULE_AUTHOR("Thomas M. Sailer, sailer@ife.ee.ethz.ch, hb9jnx@hb9w.che.eu");
MODULE_DESCRIPTION("Baycom epp amateur radio modem driver");
MODULE_LICENSE("GPL");
static void __init baycom_epp_dev_setup(struct net_device *dev)
static int __init init_baycomepp(void)
static void __exit cleanup_baycomepp(void)
module_init(init_baycomepp);
module_exit(cleanup_baycomepp);
static int __init baycom_epp_setup(char *str)
__setup("baycom_epp=", baycom_epp_setup);
