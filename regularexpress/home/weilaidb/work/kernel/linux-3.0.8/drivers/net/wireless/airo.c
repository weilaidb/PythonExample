#define DRV_NAME "airo"
static DEFINE_PCI_DEVICE_TABLE(card_ids) = ;
MODULE_DEVICE_TABLE(pci, card_ids);
static int airo_pci_probe(struct pci_dev *, const struct pci_device_id *);
static void airo_pci_remove(struct pci_dev *);
static int airo_pci_suspend(struct pci_dev *pdev, pm_message_t state);
static int airo_pci_resume(struct pci_dev *pdev);
static struct pci_driver airo_driver = ;
#define WIRELESS_SPY
#define CISCO_EXT
#define POWER_ON_DOWN
#define IGNLABEL(comment) NULL
static const char *statsLabels[] = ;
#define RUN_AT(x) (jiffies+(x))
static int rates[8];
static char *ssids[3];
static int io[4];
static int irq[4];
static
int maxencrypt;
static int auto_wep;
static int aux_bap;
static int adhoc;
static int probe = 1;
static int proc_uid;
static int proc_gid;
static int airo_perm = 0555;
static int proc_perm = 0644;
MODULE_AUTHOR("Benjamin Reed");
MODULE_DESCRIPTION("Support for Cisco/Aironet 802.11 wireless ethernet cards.  "
"Direct support for ISA/PCI/MPI cards and support for PCMCIA when used with airo_cs.");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_SUPPORTED_DEVICE("Aironet 4500, 4800 and Cisco 340/350");
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(rates, int, NULL, 0);
module_param_array(ssids, charp, NULL, 0);
module_param(auto_wep, int, 0);
MODULE_PARM_DESC(auto_wep,
"If non-zero, the driver will keep looping through the authentication options until an association is made.  "
"The value of auto_wep is number of the wep keys to check.  "
"A value of 2 will try using the key at index 0 and index 1.");
module_param(aux_bap, int, 0);
MODULE_PARM_DESC(aux_bap,
"If non-zero, the driver will switch into a mode that seems to work better for older cards with some older buses.  "
"Before switching it checks that the switch is needed.");
module_param(maxencrypt, int, 0);
MODULE_PARM_DESC(maxencrypt,
"The maximum speed that the card can do encryption.  "
"Units are in 512kbs.  "
"Zero (default) means there is no limit.  "
"Older cards used to be limited to 2mbs (4).");
module_param(adhoc, int, 0);
MODULE_PARM_DESC(adhoc, "If non-zero, the card will start in adhoc mode.");
module_param(probe, int, 0);
MODULE_PARM_DESC(probe, "If zero, the driver won't start the card.");
module_param(proc_uid, int, 0);
MODULE_PARM_DESC(proc_uid, "The uid that the /proc files will belong to.");
module_param(proc_gid, int, 0);
MODULE_PARM_DESC(proc_gid, "The gid that the /proc files will belong to.");
module_param(airo_perm, int, 0);
MODULE_PARM_DESC(airo_perm, "The permission bits of /proc/[driver/]aironet.");
module_param(proc_perm, int, 0);
MODULE_PARM_DESC(proc_perm, "The permission bits of the files in /proc");
static int do8bitIO;
#define SUCCESS 0
#define ERROR -1
#define NO_PACKET -2
#define NOP2		0x0000
#define MAC_ENABLE	0x0001
#define MAC_DISABLE	0x0002
#define CMD_LOSE_SYNC	0x0003
#define CMD_SOFTRESET	0x0004
#define HOSTSLEEP	0x0005
#define CMD_MAGIC_PKT	0x0006
#define CMD_SETWAKEMASK	0x0007
#define CMD_READCFG	0x0008
#define CMD_SETMODE	0x0009
#define CMD_ALLOCATETX	0x000a
#define CMD_TRANSMIT	0x000b
#define CMD_DEALLOCATETX 0x000c
#define NOP		0x0010
#define CMD_WORKAROUND	0x0011
#define CMD_ALLOCATEAUX 0x0020
#define CMD_ACCESS	0x0021
#define CMD_PCIBAP	0x0022
#define CMD_PCIAUX	0x0023
#define CMD_ALLOCBUF	0x0028
#define CMD_GETTLV	0x0029
#define CMD_PUTTLV	0x002a
#define CMD_DELTLV	0x002b
#define CMD_FINDNEXTTLV	0x002c
#define CMD_PSPNODES	0x0030
#define CMD_SETCW	0x0031
#define CMD_SETPCF	0x0032
#define CMD_SETPHYREG	0x003e
#define CMD_TXTEST	0x003f
#define MAC_ENABLETX	0x0101
#define CMD_LISTBSS	0x0103
#define CMD_SAVECFG	0x0108
#define CMD_ENABLEAUX	0x0111
#define CMD_WRITERID	0x0121
#define CMD_USEPSPNODES	0x0130
#define MAC_ENABLERX	0x0201
#define ERROR_QUALIF 0x00
#define ERROR_ILLCMD 0x01
#define ERROR_ILLFMT 0x02
#define ERROR_INVFID 0x03
#define ERROR_INVRID 0x04
#define ERROR_LARGE 0x05
#define ERROR_NDISABL 0x06
#define ERROR_ALLOCBSY 0x07
#define ERROR_NORD 0x0B
#define ERROR_NOWR 0x0C
#define ERROR_INVFIDTX 0x0D
#define ERROR_TESTACT 0x0E
#define ERROR_TAGNFND 0x12
#define ERROR_DECODE 0x20
#define ERROR_DESCUNAV 0x21
#define ERROR_BADLEN 0x22
#define ERROR_MODE 0x80
#define ERROR_HOP 0x81
#define ERROR_BINTER 0x82
#define ERROR_RXMODE 0x83
#define ERROR_MACADDR 0x84
#define ERROR_RATES 0x85
#define ERROR_ORDER 0x86
#define ERROR_SCAN 0x87
#define ERROR_AUTH 0x88
#define ERROR_PSMODE 0x89
#define ERROR_RTYPE 0x8A
#define ERROR_DIVER 0x8B
#define ERROR_SSID 0x8C
#define ERROR_APLIST 0x8D
#define ERROR_AUTOWAKE 0x8E
#define ERROR_LEAP 0x8F
#define COMMAND 0x00
#define PARAM0 0x02
#define PARAM1 0x04
#define PARAM2 0x06
#define STATUS 0x08
#define RESP0 0x0a
#define RESP1 0x0c
#define RESP2 0x0e
#define LINKSTAT 0x10
#define SELECT0 0x18
#define OFFSET0 0x1c
#define RXFID 0x20
#define TXALLOCFID 0x22
#define TXCOMPLFID 0x24
#define DATA0 0x36
#define EVSTAT 0x30
#define EVINTEN 0x32
#define EVACK 0x34
#define SWS0 0x28
#define SWS1 0x2a
#define SWS2 0x2c
#define SWS3 0x2e
#define AUXPAGE 0x3A
#define AUXOFF 0x3C
#define AUXDATA 0x3E
#define FID_TX 1
#define FID_RX 2
#define AUX_OFFSET 0x800
#define PKTSIZE 1840
#define RIDSIZE 2048
#define MAXTXQ 64
#define BAP0 0
#define BAP1 2
#define COMMAND_BUSY 0x8000
#define BAP_BUSY 0x8000
#define BAP_ERR 0x4000
#define BAP_DONE 0x2000
#define PROMISC 0xffff
#define NOPROMISC 0x0000
#define EV_CMD 0x10
#define EV_CLEARCOMMANDBUSY 0x4000
#define EV_RX 0x01
#define EV_TX 0x02
#define EV_TXEXC 0x04
#define EV_ALLOC 0x08
#define EV_LINK 0x80
#define EV_AWAKE 0x100
#define EV_TXCPY 0x400
#define EV_UNKNOWN 0x800
#define EV_MIC 0x1000
#define EV_AWAKEN 0x2000
#define STATUS_INTS (EV_AWAKE|EV_LINK|EV_TXEXC|EV_TX|EV_TXCPY|EV_RX|EV_MIC)
#define IGNORE_INTS ( EV_CMD | EV_UNKNOWN)
#define IGNORE_INTS (~STATUS_INTS)
#define RID_RW 0x20
#define RID_CAPABILITIES 0xFF00
#define RID_APINFO     0xFF01
#define RID_RADIOINFO  0xFF02
#define RID_UNKNOWN3   0xFF03
#define RID_RSSI       0xFF04
#define RID_CONFIG     0xFF10
#define RID_SSID       0xFF11
#define RID_APLIST     0xFF12
#define RID_DRVNAME    0xFF13
#define RID_ETHERENCAP 0xFF14
#define RID_WEP_TEMP   0xFF15
#define RID_WEP_PERM   0xFF16
#define RID_MODULATION 0xFF17
#define RID_OPTIONS    0xFF18
#define RID_ACTUALCONFIG 0xFF20
#define RID_FACTORYCONFIG 0xFF21
#define RID_UNKNOWN22  0xFF22
#define RID_LEAPUSERNAME 0xFF23
#define RID_LEAPPASSWORD 0xFF24
#define RID_STATUS     0xFF50
#define RID_BEACON_HST 0xFF51
#define RID_BUSY_HST   0xFF52
#define RID_RETRIES_HST 0xFF53
#define RID_UNKNOWN54  0xFF54
#define RID_UNKNOWN55  0xFF55
#define RID_UNKNOWN56  0xFF56
#define RID_MIC        0xFF57
#define RID_STATS16    0xFF60
#define RID_STATS16DELTA 0xFF61
#define RID_STATS16DELTACLEAR 0xFF62
#define RID_STATS      0xFF68
#define RID_STATSDELTA 0xFF69
#define RID_STATSDELTACLEAR 0xFF6A
#define RID_ECHOTEST_RID 0xFF70
#define RID_ECHOTEST_RESULTS 0xFF71
#define RID_BSSLISTFIRST 0xFF72
#define RID_BSSLISTNEXT  0xFF73
#define RID_WPA_BSSLISTFIRST 0xFF74
#define RID_WPA_BSSLISTNEXT  0xFF75
typedef struct  Cmd;
typedef struct  Resp;
typedef struct WepKeyRid WepKeyRid;
struct WepKeyRid  __packed;
typedef struct Ssid Ssid;
struct Ssid  __packed;
typedef struct SsidRid SsidRid;
struct SsidRid  __packed;
typedef struct ModulationRid ModulationRid;
struct ModulationRid  __packed;
typedef struct ConfigRid ConfigRid;
struct ConfigRid  __packed;
typedef struct StatusRid StatusRid;
struct StatusRid  __packed;
typedef struct StatsRid StatsRid;
struct StatsRid  __packed;
typedef struct APListRid APListRid;
struct APListRid  __packed;
typedef struct CapabilityRid CapabilityRid;
struct CapabilityRid  __packed;
typedef struct BSSListRidExtra BSSListRidExtra;
struct BSSListRidExtra  __packed;
typedef struct BSSListRid BSSListRid;
struct BSSListRid  __packed;
typedef struct  BSSListElement;
typedef struct tdsRssiEntry tdsRssiEntry;
struct tdsRssiEntry  __packed;
typedef struct tdsRssiRid tdsRssiRid;
struct tdsRssiRid  __packed;
typedef struct MICRid MICRid;
struct MICRid  __packed;
typedef struct MICBuffer MICBuffer;
struct MICBuffer  __packed;
typedef struct  etherHead;
#define TXCTL_TXOK (1<<1)
#define TXCTL_TXEX (1<<2)
#define TXCTL_802_3 (0<<3)
#define TXCTL_802_11 (1<<3)
#define TXCTL_ETHERNET (0<<4)
#define TXCTL_LLC (1<<4)
#define TXCTL_RELEASE (0<<5)
#define TXCTL_NORELEASE (1<<5)
#define BUSY_FID 0x10000
#define AIROMAGIC	0xa55a
#define AIROOLDIOCTL	SIOCDEVPRIVATE
#define AIROOLDIDIFC 	AIROOLDIOCTL + 1
#define SIOCIWFIRSTPRIV SIOCDEVPRIVATE
#define AIROIOCTL	SIOCIWFIRSTPRIV
#define AIROIDIFC 	AIROIOCTL + 1
#define	AIROGCAP  		0
#define AIROGCFG		1
#define AIROGSLIST		2
#define AIROGVLIST		3
#define AIROGDRVNAM		4
#define AIROGEHTENC		5
#define AIROGWEPKTMP		6
#define AIROGWEPKNV		7
#define AIROGSTAT		8
#define AIROGSTATSC32		9
#define AIROGSTATSD32		10
#define AIROGMICRID		11
#define AIROGMICSTATS		12
#define AIROGFLAGS		13
#define AIROGID			14
#define AIRORRID		15
#define AIRORSWVERSION		17
#define AIROPCAP               	AIROGSTATSD32 + 40
#define AIROPVLIST              AIROPCAP      + 1
#define AIROPSLIST		AIROPVLIST    + 1
#define AIROPCFG		AIROPSLIST    + 1
#define AIROPSIDS		AIROPCFG      + 1
#define AIROPAPLIST		AIROPSIDS     + 1
#define AIROPMACON		AIROPAPLIST   + 1
#define AIROPMACOFF		AIROPMACON    + 1
#define AIROPSTCLR		AIROPMACOFF   + 1
#define AIROPWEPKEY		AIROPSTCLR    + 1
#define AIROPWEPKEYNV		AIROPWEPKEY   + 1
#define AIROPLEAPPWD            AIROPWEPKEYNV + 1
#define AIROPLEAPUSR            AIROPLEAPPWD  + 1
#define AIROFLSHRST	       AIROPWEPKEYNV  + 40
#define AIROFLSHGCHR           AIROFLSHRST    + 1
#define AIROFLSHSTFL           AIROFLSHGCHR   + 1
#define AIROFLSHPCHR           AIROFLSHSTFL   + 1
#define AIROFLPUTBUF           AIROFLSHPCHR   + 1
#define AIRORESTART            AIROFLPUTBUF   + 1
#define FLASHSIZE	32768
#define AUXMEMSIZE	(256 * 1024)
typedef struct aironet_ioctl  aironet_ioctl;
static const char swversion[] = "2.1";
#define NUM_MODULES       2
#define MIC_MSGLEN_MAX    2400
#define EMMH32_MSGLEN_MAX MIC_MSGLEN_MAX
#define AIRO_DEF_MTU      2312
typedef struct  mic_statistics;
typedef struct  emmh32_context;
typedef struct  miccntx;
typedef struct  mic_module;
typedef struct  Rid;
typedef struct  TxFid;
struct rx_hdr  __packed;
typedef struct  RxFid;
typedef struct  HostRxDesc;
typedef struct  HostTxDesc;
typedef struct  HostRidDesc;
typedef struct  TxCtlHdr;
typedef struct  WifiHdr;
typedef struct  WifiCtlHdr;
static WifiCtlHdr wifictlhdr8023 = ;
#define MAX_KEY_SIZE 13
#define MIN_KEY_SIZE  5
typedef struct wep_key_t  wep_key_t;
static const struct iw_handler_def	airo_handler_def;
static const char version[] = "airo.c 0.6 (Ben Reed & Javier Achirica)";
struct airo_info;
static int get_dec_u16( char *buffer, int *start, int limit );
static void OUT4500( struct airo_info *, u16 register, u16 value );
static unsigned short IN4500( struct airo_info *, u16 register );
static u16 setup_card(struct airo_info*, u8 *mac, int lock);
static int enable_MAC(struct airo_info *ai, int lock);
static void disable_MAC(struct airo_info *ai, int lock);
static void enable_interrupts(struct airo_info*);
static void disable_interrupts(struct airo_info*);
static u16 issuecommand(struct airo_info*, Cmd *pCmd, Resp *pRsp);
static int bap_setup(struct airo_info*, u16 rid, u16 offset, int whichbap);
static int aux_bap_read(struct airo_info*, __le16 *pu16Dst, int bytelen,
int whichbap);
static int fast_bap_read(struct airo_info*, __le16 *pu16Dst, int bytelen,
int whichbap);
static int bap_write(struct airo_info*, const __le16 *pu16Src, int bytelen,
int whichbap);
static int PC4500_accessrid(struct airo_info*, u16 rid, u16 accmd);
static int PC4500_readrid(struct airo_info*, u16 rid, void *pBuf, int len, int lock);
static int PC4500_writerid(struct airo_info*, u16 rid, const void
*pBuf, int len, int lock);
static int do_writerid( struct airo_info*, u16 rid, const void *rid_data,
int len, int dummy );
static u16 transmit_allocate(struct airo_info*, int lenPayload, int raw);
static int transmit_802_3_packet(struct airo_info*, int len, char *pPacket);
static int transmit_802_11_packet(struct airo_info*, int len, char *pPacket);
static int mpi_send_packet (struct net_device *dev);
static void mpi_unmap_card(struct pci_dev *pci);
static void mpi_receive_802_3(struct airo_info *ai);
static void mpi_receive_802_11(struct airo_info *ai);
static int waitbusy (struct airo_info *ai);
static irqreturn_t airo_interrupt( int irq, void* dev_id);
static int airo_thread(void *data);
static void timer_func( struct net_device *dev );
static int airo_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static struct iw_statistics *airo_get_wireless_stats (struct net_device *dev);
static void airo_read_wireless_stats (struct airo_info *local);
static int readrids(struct net_device *dev, aironet_ioctl *comp);
static int writerids(struct net_device *dev, aironet_ioctl *comp);
static int flashcard(struct net_device *dev, aironet_ioctl *comp);
static void micinit(struct airo_info *ai);
static int micsetup(struct airo_info *ai);
static int encapsulate(struct airo_info *ai, etherHead *pPacket, MICBuffer *buffer, int len);
static int decapsulate(struct airo_info *ai, MICBuffer *mic, etherHead *pPacket, u16 payLen);
static u8 airo_rssi_to_dbm (tdsRssiEntry *rssi_rid, u8 rssi);
static u8 airo_dbm_to_pct (tdsRssiEntry *rssi_rid, u8 dbm);
static void airo_networks_free(struct airo_info *ai);
struct airo_info ;
static inline int bap_read(struct airo_info *ai, __le16 *pu16Dst, int bytelen,
int whichbap)
static int setup_proc_entry( struct net_device *dev,
struct airo_info *apriv );
static int takedown_proc_entry( struct net_device *dev,
struct airo_info *apriv );
static int cmdreset(struct airo_info *ai);
static int setflashmode (struct airo_info *ai);
static int flashgchar(struct airo_info *ai,int matchbyte,int dwelltime);
static int flashputbuf(struct airo_info *ai);
static int flashrestart(struct airo_info *ai,struct net_device *dev);
#define airo_print(type, name, fmt, args...) \
printk(type DRV_NAME "(%s): " fmt "\n", name, ##args)
#define airo_print_info(name, fmt, args...) \
airo_print(KERN_INFO, name, fmt, ##args)
#define airo_print_dbg(name, fmt, args...) \
airo_print(KERN_DEBUG, name, fmt, ##args)
#define airo_print_warn(name, fmt, args...) \
airo_print(KERN_WARNING, name, fmt, ##args)
#define airo_print_err(name, fmt, args...) \
airo_print(KERN_ERR, name, fmt, ##args)
#define AIRO_FLASH(dev) (((struct airo_info *)dev->ml_priv)->flash)
static int RxSeqValid (struct airo_info *ai,miccntx *context,int mcast,u32 micSeq);
static void MoveWindow(miccntx *context, u32 micSeq);
static void emmh32_setseed(emmh32_context *context, u8 *pkey, int keylen,
struct crypto_cipher *tfm);
static void emmh32_init(emmh32_context *context);
static void emmh32_update(emmh32_context *context, u8 *pOctets, int len);
static void emmh32_final(emmh32_context *context, u8 digest[4]);
static int flashpchar(struct airo_info *ai,int byte,int dwelltime);
static void age_mic_context(miccntx *cur, miccntx *old, u8 *key, int key_len,
struct crypto_cipher *tfm)
static void micinit(struct airo_info *ai)
static int micsetup(struct airo_info *ai)
static const u8 micsnap[] = ;
static int encapsulate(struct airo_info *ai ,etherHead *frame, MICBuffer *mic, int payLen)
typedef enum  mic_error;
static int decapsulate(struct airo_info *ai, MICBuffer *mic, etherHead *eth, u16 payLen)
static int RxSeqValid (struct airo_info *ai,miccntx *context,int mcast,u32 micSeq)
static void MoveWindow(miccntx *context, u32 micSeq)
#define MIC_ACCUM(val)	\
context->accum += (u64)(val) * context->coeff[coeff_position++];
static unsigned char aes_counter[16];
static void emmh32_setseed(emmh32_context *context, u8 *pkey, int keylen,
struct crypto_cipher *tfm)
static void emmh32_init(emmh32_context *context)
static void emmh32_update(emmh32_context *context, u8 *pOctets, int len)
static u32 mask32[4] = ;
static void emmh32_final(emmh32_context *context, u8 digest[4])
static int readBSSListRid(struct airo_info *ai, int first,
BSSListRid *list)
static int readWepKeyRid(struct airo_info *ai, WepKeyRid *wkr, int temp, int lock)
static int writeWepKeyRid(struct airo_info *ai, WepKeyRid *wkr, int perm, int lock)
static int readSsidRid(struct airo_info*ai, SsidRid *ssidr)
static int writeSsidRid(struct airo_info*ai, SsidRid *pssidr, int lock)
static int readConfigRid(struct airo_info *ai, int lock)
static inline void checkThrottle(struct airo_info *ai)
static int writeConfigRid(struct airo_info *ai, int lock)
static int readStatusRid(struct airo_info *ai, StatusRid *statr, int lock)
static int readAPListRid(struct airo_info *ai, APListRid *aplr)
static int writeAPListRid(struct airo_info *ai, APListRid *aplr, int lock)
static int readCapabilityRid(struct airo_info *ai, CapabilityRid *capr, int lock)
static int readStatsRid(struct airo_info*ai, StatsRid *sr, int rid, int lock)
static void try_auto_wep(struct airo_info *ai)
static int airo_open(struct net_device *dev)
static netdev_tx_t mpi_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static int mpi_send_packet (struct net_device *dev)
static void get_tx_error(struct airo_info *ai, s32 fid)
static void airo_end_xmit(struct net_device *dev)
static netdev_tx_t airo_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static void airo_end_xmit11(struct net_device *dev)
static netdev_tx_t airo_start_xmit11(struct sk_buff *skb,
struct net_device *dev)
static void airo_read_stats(struct net_device *dev)
static struct net_device_stats *airo_get_stats(struct net_device *dev)
static void airo_set_promisc(struct airo_info *ai)
static void airo_set_multicast_list(struct net_device *dev)
static int airo_set_mac_address(struct net_device *dev, void *p)
static int airo_change_mtu(struct net_device *dev, int new_mtu)
static LIST_HEAD(airo_devices);
static void add_airo_dev(struct airo_info *ai)
static void del_airo_dev(struct airo_info *ai)
static int airo_close(struct net_device *dev)
void stop_airo_card( struct net_device *dev, int freeres )
EXPORT_SYMBOL(stop_airo_card);
static int wll_header_parse(const struct sk_buff *skb, unsigned char *haddr)
static void mpi_unmap_card(struct pci_dev *pci)
static int mpi_init_descriptors (struct airo_info *ai)
static int mpi_map_card(struct airo_info *ai, struct pci_dev *pci)
static const struct header_ops airo_header_ops = ;
static const struct net_device_ops airo11_netdev_ops = ;
static void wifi_setup(struct net_device *dev)
static struct net_device *init_wifidev(struct airo_info *ai,
struct net_device *ethdev)
static int reset_card( struct net_device *dev , int lock)
#define AIRO_MAX_NETWORK_COUNT	64
static int airo_networks_allocate(struct airo_info *ai)
static void airo_networks_free(struct airo_info *ai)
static void airo_networks_initialize(struct airo_info *ai)
static const struct net_device_ops airo_netdev_ops = ;
static const struct net_device_ops mpi_netdev_ops = ;
static struct net_device *_init_airo_card( unsigned short irq, int port,
int is_pcmcia, struct pci_dev *pci,
struct device *dmdev )
struct net_device *init_airo_card( unsigned short irq, int port, int is_pcmcia,
struct device *dmdev)
EXPORT_SYMBOL(init_airo_card);
static int waitbusy (struct airo_info *ai)
int reset_airo_card( struct net_device *dev )
EXPORT_SYMBOL(reset_airo_card);
static void airo_send_event(struct net_device *dev)
static void airo_process_scan_results (struct airo_info *ai)
static int airo_thread(void *data)
static int header_len(__le16 ctl)
static void airo_handle_cisco_mic(struct airo_info *ai)
#define STAT_NOBEACON	0x8000
#define STAT_MAXRETRIES	0x8001
#define STAT_MAXARL	0x8002
#define STAT_FORCELOSS	0x8003
#define STAT_TSFSYNC	0x8004
#define STAT_DEAUTH	0x8100
#define STAT_DISASSOC	0x8200
#define STAT_ASSOC_FAIL	0x8400
#define STAT_AUTH_FAIL	0x0300
#define STAT_ASSOC	0x0400
#define STAT_REASSOC    0x0600
static void airo_print_status(const char *devname, u16 status)
static void airo_handle_link(struct airo_info *ai)
static void airo_handle_rx(struct airo_info *ai)
static void airo_handle_tx(struct airo_info *ai, u16 status)
static irqreturn_t airo_interrupt(int irq, void *dev_id)
static void OUT4500( struct airo_info *ai, u16 reg, u16 val )
static u16 IN4500( struct airo_info *ai, u16 reg )
static int enable_MAC(struct airo_info *ai, int lock)
static void disable_MAC( struct airo_info *ai, int lock )
static void enable_interrupts( struct airo_info *ai )
static void disable_interrupts( struct airo_info *ai )
static void mpi_receive_802_3(struct airo_info *ai)
static void mpi_receive_802_11(struct airo_info *ai)
static u16 setup_card(struct airo_info *ai, u8 *mac, int lock)
static u16 issuecommand(struct airo_info *ai, Cmd *pCmd, Resp *pRsp)
static int bap_setup(struct airo_info *ai, u16 rid, u16 offset, int whichbap )
static u16 aux_setup(struct airo_info *ai, u16 page,
u16 offset, u16 *len)
static int aux_bap_read(struct airo_info *ai, __le16 *pu16Dst,
int bytelen, int whichbap)
static int fast_bap_read(struct airo_info *ai, __le16 *pu16Dst,
int bytelen, int whichbap)
static int bap_write(struct airo_info *ai, const __le16 *pu16Src,
int bytelen, int whichbap)
static int PC4500_accessrid(struct airo_info *ai, u16 rid, u16 accmd)
static int PC4500_readrid(struct airo_info *ai, u16 rid, void *pBuf, int len, int lock)
static int PC4500_writerid(struct airo_info *ai, u16 rid,
const void *pBuf, int len, int lock)
static u16 transmit_allocate(struct airo_info *ai, int lenPayload, int raw)
static int transmit_802_3_packet(struct airo_info *ai, int len, char *pPacket)
static int transmit_802_11_packet(struct airo_info *ai, int len, char *pPacket)
static ssize_t proc_read( struct file *file,
char __user *buffer,
size_t len,
loff_t *offset);
static ssize_t proc_write( struct file *file,
const char __user *buffer,
size_t len,
loff_t *offset );
static int proc_close( struct inode *inode, struct file *file );
static int proc_stats_open( struct inode *inode, struct file *file );
static int proc_statsdelta_open( struct inode *inode, struct file *file );
static int proc_status_open( struct inode *inode, struct file *file );
static int proc_SSID_open( struct inode *inode, struct file *file );
static int proc_APList_open( struct inode *inode, struct file *file );
static int proc_BSSList_open( struct inode *inode, struct file *file );
static int proc_config_open( struct inode *inode, struct file *file );
static int proc_wepkey_open( struct inode *inode, struct file *file );
static const struct file_operations proc_statsdelta_ops = ;
static const struct file_operations proc_stats_ops = ;
static const struct file_operations proc_status_ops = ;
static const struct file_operations proc_SSID_ops = ;
static const struct file_operations proc_BSSList_ops = ;
static const struct file_operations proc_APList_ops = ;
static const struct file_operations proc_config_ops = ;
static const struct file_operations proc_wepkey_ops = ;
static struct proc_dir_entry *airo_entry;
struct proc_data ;
static int setup_proc_entry( struct net_device *dev,
struct airo_info *apriv )
static int takedown_proc_entry( struct net_device *dev,
struct airo_info *apriv )
static ssize_t proc_read( struct file *file,
char __user *buffer,
size_t len,
loff_t *offset )
static ssize_t proc_write( struct file *file,
const char __user *buffer,
size_t len,
loff_t *offset )
static int proc_status_open(struct inode *inode, struct file *file)
static int proc_stats_rid_open(struct inode*, struct file*, u16);
static int proc_statsdelta_open( struct inode *inode,
struct file *file )
static int proc_stats_open( struct inode *inode, struct file *file )
static int proc_stats_rid_open( struct inode *inode,
struct file *file,
u16 rid )
static int get_dec_u16( char *buffer, int *start, int limit )
static int airo_config_commit(struct net_device *dev,
struct iw_request_info *info, void *zwrq,
char *extra);
static inline int sniffing_mode(struct airo_info *ai)
static void proc_config_on_close(struct inode *inode, struct file *file)
static const char *get_rmode(__le16 mode)
static int proc_config_open(struct inode *inode, struct file *file)
static void proc_SSID_on_close(struct inode *inode, struct file *file)
static void proc_APList_on_close( struct inode *inode, struct file *file )
static int do_writerid( struct airo_info *ai, u16 rid, const void *rid_data,
int len, int dummy )
static int get_wep_key(struct airo_info *ai, u16 index, char *buf, u16 buflen)
static int get_wep_tx_idx(struct airo_info *ai)
static int set_wep_key(struct airo_info *ai, u16 index, const char *key,
u16 keylen, int perm, int lock)
static int set_wep_tx_idx(struct airo_info *ai, u16 index, int perm, int lock)
static void proc_wepkey_on_close( struct inode *inode, struct file *file )
static int proc_wepkey_open( struct inode *inode, struct file *file )
static int proc_SSID_open(struct inode *inode, struct file *file)
static int proc_APList_open( struct inode *inode, struct file *file )
static int proc_BSSList_open( struct inode *inode, struct file *file )
static int proc_close( struct inode *inode, struct file *file )
static void timer_func( struct net_device *dev )
static int __devinit airo_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *pent)
static void __devexit airo_pci_remove(struct pci_dev *pdev)
static int airo_pci_suspend(struct pci_dev *pdev, pm_message_t state)
static int airo_pci_resume(struct pci_dev *pdev)
static int __init airo_init_module( void )
static void __exit airo_cleanup_module( void )
static u8 airo_rssi_to_dbm (tdsRssiEntry *rssi_rid, u8 rssi)
static u8 airo_dbm_to_pct (tdsRssiEntry *rssi_rid, u8 dbm)
static int airo_get_quality (StatusRid *status_rid, CapabilityRid *cap_rid)
#define airo_get_max_quality(cap_rid) (memcmp((cap_rid)->prodName, "350", 3) ? 0x20 : 0xa0)
#define airo_get_avg_quality(cap_rid) (memcmp((cap_rid)->prodName, "350", 3) ? 0x10 : 0x50);
static int airo_get_name(struct net_device *dev,
struct iw_request_info *info,
char *cwrq,
char *extra)
static int airo_set_freq(struct net_device *dev,
struct iw_request_info *info,
struct iw_freq *fwrq,
char *extra)
static int airo_get_freq(struct net_device *dev,
struct iw_request_info *info,
struct iw_freq *fwrq,
char *extra)
static int airo_set_essid(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq,
char *extra)
static int airo_get_essid(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq,
char *extra)
static int airo_set_wap(struct net_device *dev,
struct iw_request_info *info,
struct sockaddr *awrq,
char *extra)
static int airo_get_wap(struct net_device *dev,
struct iw_request_info *info,
struct sockaddr *awrq,
char *extra)
static int airo_set_nick(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq,
char *extra)
static int airo_get_nick(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq,
char *extra)
static int airo_set_rate(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int airo_get_rate(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int airo_set_rts(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int airo_get_rts(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int airo_set_frag(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int airo_get_frag(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int airo_set_mode(struct net_device *dev,
struct iw_request_info *info,
__u32 *uwrq,
char *extra)
static int airo_get_mode(struct net_device *dev,
struct iw_request_info *info,
__u32 *uwrq,
char *extra)
static inline int valid_index(struct airo_info *ai, int index)
static int airo_set_encode(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq,
char *extra)
static int airo_get_encode(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq,
char *extra)
static int airo_set_encodeext(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu,
char *extra)
static int airo_get_encodeext(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu,
char *extra)
static int airo_set_auth(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int airo_get_auth(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int airo_set_txpow(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int airo_get_txpow(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int airo_set_retry(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int airo_get_retry(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int airo_get_range(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq,
char *extra)
static int airo_set_power(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int airo_get_power(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int airo_set_sens(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int airo_get_sens(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int airo_get_aplist(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq,
char *extra)
static int airo_set_scan(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq,
char *extra)
static inline char *airo_translate_scan(struct net_device *dev,
struct iw_request_info *info,
char *current_ev,
char *end_buf,
BSSListRid *bss)
static int airo_get_scan(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq,
char *extra)
static int airo_config_commit(struct net_device *dev,
struct iw_request_info *info,
void *zwrq,
char *extra)
static const struct iw_priv_args airo_private_args[] = ;
static const iw_handler		airo_handler[] =
;
static const iw_handler		airo_private_handler[] =
;
static const struct iw_handler_def	airo_handler_def =
;
static int airo_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void airo_read_wireless_stats(struct airo_info *local)
static struct iw_statistics *airo_get_wireless_stats(struct net_device *dev)
static int readrids(struct net_device *dev, aironet_ioctl *comp)
static int writerids(struct net_device *dev, aironet_ioctl *comp)
static int flashcard(struct net_device *dev, aironet_ioctl *comp)
#define FLASH_COMMAND  0x7e7e
static int cmdreset(struct airo_info *ai)
static int setflashmode (struct airo_info *ai)
static int flashpchar(struct airo_info *ai,int byte,int dwelltime)
static int flashgchar(struct airo_info *ai,int matchbyte,int dwelltime)
static int flashputbuf(struct airo_info *ai)
static int flashrestart(struct airo_info *ai,struct net_device *dev)
module_init(airo_init_module);
module_exit(airo_cleanup_module);
