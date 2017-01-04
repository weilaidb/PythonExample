#define EAGLEUSBVERSION "ueagle 1.4"
#define uea_dbg(usb_dev, format, args...)	\
do  while (0)
#define uea_vdbg(usb_dev, format, args...)	\
do  while (0)
#define uea_enters(usb_dev) \
uea_vdbg(usb_dev, "entering %s\n" , __func__)
#define uea_leaves(usb_dev) \
uea_vdbg(usb_dev, "leaving  %s\n" , __func__)
#define uea_err(usb_dev, format, args...) \
dev_err(&(usb_dev)->dev , "[UEAGLE-ATM] " format , ##args)
#define uea_warn(usb_dev, format, args...) \
dev_warn(&(usb_dev)->dev , "[Ueagle-atm] " format, ##args)
#define uea_info(usb_dev, format, args...) \
dev_info(&(usb_dev)->dev , "[ueagle-atm] " format, ##args)
struct intr_pkt;
struct uea_cmvs_v1  __attribute__ ((packed));
struct uea_cmvs_v2  __attribute__ ((packed));
struct cmv_dsc_e1 ;
struct cmv_dsc_e4 ;
union cmv_dsc ;
struct uea_softc ;
#define ELSA_VID		0x05CC
#define ELSA_PID_PSTFIRM	0x3350
#define ELSA_PID_PREFIRM	0x3351
#define ELSA_PID_A_PREFIRM	0x3352
#define ELSA_PID_A_PSTFIRM	0x3353
#define ELSA_PID_B_PREFIRM	0x3362
#define ELSA_PID_B_PSTFIRM	0x3363
#define DEVOLO_VID			0x1039
#define DEVOLO_EAGLE_I_A_PID_PSTFIRM	0x2110
#define DEVOLO_EAGLE_I_A_PID_PREFIRM	0x2111
#define DEVOLO_EAGLE_I_B_PID_PSTFIRM	0x2100
#define DEVOLO_EAGLE_I_B_PID_PREFIRM	0x2101
#define DEVOLO_EAGLE_II_A_PID_PSTFIRM	0x2130
#define DEVOLO_EAGLE_II_A_PID_PREFIRM	0x2131
#define DEVOLO_EAGLE_II_B_PID_PSTFIRM	0x2120
#define DEVOLO_EAGLE_II_B_PID_PREFIRM	0x2121
#define ANALOG_VID		0x1110
#define ADI930_PID_PREFIRM	0x9001
#define ADI930_PID_PSTFIRM	0x9000
#define EAGLE_I_PID_PREFIRM	0x9010
#define EAGLE_I_PID_PSTFIRM	0x900F
#define EAGLE_IIC_PID_PREFIRM	0x9024
#define EAGLE_IIC_PID_PSTFIRM	0x9023
#define EAGLE_II_PID_PREFIRM	0x9022
#define EAGLE_II_PID_PSTFIRM	0x9021
#define EAGLE_III_PID_PREFIRM	0x9032
#define EAGLE_III_PID_PSTFIRM	0x9031
#define EAGLE_IV_PID_PREFIRM	0x9042
#define EAGLE_IV_PID_PSTFIRM	0x9041
#define USR_VID			0x0BAF
#define MILLER_A_PID_PREFIRM	0x00F2
#define MILLER_A_PID_PSTFIRM	0x00F1
#define MILLER_B_PID_PREFIRM	0x00FA
#define MILLER_B_PID_PSTFIRM	0x00F9
#define HEINEKEN_A_PID_PREFIRM	0x00F6
#define HEINEKEN_A_PID_PSTFIRM	0x00F5
#define HEINEKEN_B_PID_PREFIRM	0x00F8
#define HEINEKEN_B_PID_PSTFIRM	0x00F7
#define PREFIRM 0
#define PSTFIRM (1<<7)
#define AUTO_ANNEX_A (1<<8)
#define AUTO_ANNEX_B (1<<9)
enum ;
#define UEA_IS_PREFIRM(x) \
(!((x)->driver_info & PSTFIRM))
#define UEA_CHIP_VERSION(x) \
((x)->driver_info & 0xf)
#define IS_ISDN(x) \
((x)->annex & ANNEXB)
#define INS_TO_USBDEV(ins) (ins->usb_dev)
#define GET_STATUS(data) \
((data >> 8) & 0xf)
#define IS_OPERATIONAL(sc) \
((UEA_CHIP_VERSION(sc) != EAGLE_IV) ? \
(GET_STATUS(sc->stats.phy.state) == 2) : \
(sc->stats.phy.state == 7))
#define FW_GET_BYTE(p) (*((__u8 *) (p)))
#define FW_DIR "ueagle-atm/"
#define UEA_FW_NAME_MAX 30
#define NB_MODEM 4
#define BULK_TIMEOUT 300
#define CTRL_TIMEOUT 1000
#define ACK_TIMEOUT msecs_to_jiffies(3000)
#define UEA_INTR_IFACE_NO	0
#define UEA_US_IFACE_NO		1
#define UEA_DS_IFACE_NO		2
#define FASTEST_ISO_INTF	8
#define UEA_BULK_DATA_PIPE	0x02
#define UEA_IDMA_PIPE		0x04
#define UEA_INTR_PIPE		0x04
#define UEA_ISO_DATA_PIPE	0x08
#define UEA_E1_SET_BLOCK	0x0001
#define UEA_E4_SET_BLOCK	0x002c
#define UEA_SET_MODE		0x0003
#define UEA_SET_2183_DATA	0x0004
#define UEA_SET_TIMEOUT		0x0011
#define UEA_LOOPBACK_OFF	0x0002
#define UEA_LOOPBACK_ON		0x0003
#define UEA_BOOT_IDMA		0x0006
#define UEA_START_RESET		0x0007
#define UEA_END_RESET		0x0008
#define UEA_SWAP_MAILBOX	(0x3fcd | 0x4000)
#define UEA_MPTX_START		(0x3fce | 0x4000)
#define UEA_MPTX_MAILBOX	(0x3fd6 | 0x4000)
#define UEA_MPRX_MAILBOX	(0x3fdf | 0x4000)
struct block_index  __attribute__ ((packed));
#define E4_IS_BOOT_PAGE(PageSize) ((le32_to_cpu(PageSize)) & 0x80000000)
#define E4_PAGE_BYTES(PageSize) ((le32_to_cpu(PageSize) & 0x7fffffff) * 4)
#define E4_L1_STRING_HEADER 0x10
#define E4_MAX_PAGE_NUMBER 0x58
#define E4_NO_SWAPPAGE_HEADERS 0x31
struct l1_code  __attribute__ ((packed));
struct block_info_e1  __attribute__ ((packed));
#define E1_BLOCK_INFO_SIZE 12
struct block_info_e4  __attribute__ ((packed));
#define E4_BLOCK_INFO_SIZE 14
#define UEA_BIHDR 0xabcd
#define UEA_RESERVED 0xffff
#define E1_PREAMBLE 0x535c
#define E1_MODEMTOHOST 0x01
#define E1_HOSTTOMODEM 0x10
#define E1_MEMACCESS 0x1
#define E1_ADSLDIRECTIVE 0x7
#define E1_FUNCTION_TYPE(f) ((f) >> 4)
#define E1_FUNCTION_SUBTYPE(f) ((f) & 0x0f)
#define E4_MEMACCESS 0
#define E4_ADSLDIRECTIVE 0xf
#define E4_FUNCTION_TYPE(f) ((f) >> 8)
#define E4_FUNCTION_SIZE(f) ((f) & 0x0f)
#define E4_FUNCTION_SUBTYPE(f) (((f) >> 4) & 0x0f)
#define E1_REQUESTREAD	0x0
#define E1_REQUESTWRITE	0x1
#define E1_REPLYREAD	0x2
#define E1_REPLYWRITE	0x3
#define E4_REQUESTREAD	0x0
#define E4_REQUESTWRITE	0x4
#define E4_REPLYREAD	(E4_REQUESTREAD | 1)
#define E4_REPLYWRITE	(E4_REQUESTWRITE | 1)
#define E1_KERNELREADY 0x0
#define E1_MODEMREADY  0x1
#define E4_KERNELREADY 0x0
#define E4_MODEMREADY  0x1
#define E1_MAKEFUNCTION(t, s) (((t) & 0xf) << 4 | ((s) & 0xf))
#define E4_MAKEFUNCTION(t, st, s) (((t) & 0xf) << 8 | \
((st) & 0xf) << 4 | ((s) & 0xf))
#define E1_MAKESA(a, b, c, d)						\
(((c) & 0xff) << 24 |						\
((d) & 0xff) << 16 |						\
((a) & 0xff) << 8  |						\
((b) & 0xff))
#define E1_GETSA1(a) ((a >> 8) & 0xff)
#define E1_GETSA2(a) (a & 0xff)
#define E1_GETSA3(a) ((a >> 24) & 0xff)
#define E1_GETSA4(a) ((a >> 16) & 0xff)
#define E1_SA_CNTL E1_MAKESA('C', 'N', 'T', 'L')
#define E1_SA_DIAG E1_MAKESA('D', 'I', 'A', 'G')
#define E1_SA_INFO E1_MAKESA('I', 'N', 'F', 'O')
#define E1_SA_OPTN E1_MAKESA('O', 'P', 'T', 'N')
#define E1_SA_RATE E1_MAKESA('R', 'A', 'T', 'E')
#define E1_SA_STAT E1_MAKESA('S', 'T', 'A', 'T')
#define E4_SA_CNTL 1
#define E4_SA_STAT 2
#define E4_SA_INFO 3
#define E4_SA_TEST 4
#define E4_SA_OPTN 5
#define E4_SA_RATE 6
#define E4_SA_DIAG 7
#define E4_SA_CNFG 8
struct cmv_e1  __attribute__ ((packed));
struct cmv_e4  __attribute__ ((packed));
struct swap_info_e1  __attribute__ ((packed));
struct swap_info_e4  __attribute__ ((packed));
#define e1_bSwapPageNo	u.e1.s1.swapinfo.bSwapPageNo
#define e1_bOvl		u.e1.s1.swapinfo.bOvl
#define e4_bSwapPageNo  u.e4.s1.swapinfo.bSwapPageNo
#define INT_LOADSWAPPAGE 0x0001
#define INT_INCOMINGCMV  0x0002
union intr_data_e1  __attribute__ ((packed));
union intr_data_e4  __attribute__ ((packed));
struct intr_pkt  __attribute__ ((packed));
#define E1_INTR_PKT_SIZE 28
#define E4_INTR_PKT_SIZE 64
static struct usb_driver uea_driver;
static DEFINE_MUTEX(uea_mutex);
static const char *chip_name[] = ;
static int modem_index;
static unsigned int debug;
static unsigned int altsetting[NB_MODEM] = ;
static int sync_wait[NB_MODEM];
static char *cmv_file[NB_MODEM];
static int annex[NB_MODEM];
module_param(debug, uint, 0644);
MODULE_PARM_DESC(debug, "module debug level (0=off,1=on,2=verbose)");
module_param_array(altsetting, uint, NULL, 0644);
MODULE_PARM_DESC(altsetting, "alternate setting for incoming traffic: 0=bulk, "
"1=isoc slowest, ... , 8=isoc fastest (default)");
module_param_array(sync_wait, bool, NULL, 0644);
MODULE_PARM_DESC(sync_wait, "wait the synchronisation before starting ATM");
module_param_array(cmv_file, charp, NULL, 0644);
MODULE_PARM_DESC(cmv_file,
"file name with configuration and management variables");
module_param_array(annex, uint, NULL, 0644);
MODULE_PARM_DESC(annex,
"manually set annex a/b (0=auto, 1=annex a, 2=annex b)");
#define uea_wait(sc, cond, timeo) \
()
#define UPDATE_ATM_STAT(type, val) \
do  while (0)
#define UPDATE_ATM_SIGNAL(val) \
do  while (0)
#define LOAD_INTERNAL     0xA0
#define F8051_USBCS       0x7f92
static int uea_send_modem_cmd(struct usb_device *usb,
u16 addr, u16 size, const u8 *buff)
static void uea_upload_pre_firmware(const struct firmware *fw_entry,
void *context)
static int uea_load_firmware(struct usb_device *usb, unsigned int ver)
static int check_dsp_e1(const u8 *dsp, unsigned int len)
static int check_dsp_e4(const u8 *dsp, int len)
static int uea_idma_write(struct uea_softc *sc, const void *data, u32 size)
static int request_dsp(struct uea_softc *sc)
static void uea_load_page_e1(struct work_struct *work)
static void __uea_load_page_e4(struct uea_softc *sc, u8 pageno, int boot)
static void uea_load_page_e4(struct work_struct *work)
static inline void wake_up_cmv_ack(struct uea_softc *sc)
static inline int wait_cmv_ack(struct uea_softc *sc)
#define UCDC_SEND_ENCAPSULATED_COMMAND 0x00
static int uea_request(struct uea_softc *sc,
u16 value, u16 index, u16 size, const void *data)
static int uea_cmv_e1(struct uea_softc *sc,
u8 function, u32 address, u16 offset, u32 data)
static int uea_cmv_e4(struct uea_softc *sc,
u16 function, u16 group, u16 address, u16 offset, u32 data)
static inline int uea_read_cmv_e1(struct uea_softc *sc,
u32 address, u16 offset, u32 *data)
static inline int uea_read_cmv_e4(struct uea_softc *sc,
u8 size, u16 group, u16 address, u16 offset, u32 *data)
static inline int uea_write_cmv_e1(struct uea_softc *sc,
u32 address, u16 offset, u32 data)
static inline int uea_write_cmv_e4(struct uea_softc *sc,
u8 size, u16 group, u16 address, u16 offset, u32 data)
static void uea_set_bulk_timeout(struct uea_softc *sc, u32 dsrate)
static int uea_stat_e1(struct uea_softc *sc)
static int uea_stat_e4(struct uea_softc *sc)
static void cmvs_file_name(struct uea_softc *sc, char *const cmv_name, int ver)
static int request_cmvs_old(struct uea_softc *sc,
void **cmvs, const struct firmware **fw)
static int request_cmvs(struct uea_softc *sc,
void **cmvs, const struct firmware **fw, int *ver)
static int uea_send_cmvs_e1(struct uea_softc *sc)
static int uea_send_cmvs_e4(struct uea_softc *sc)
static int uea_start_reset(struct uea_softc *sc)
static int uea_kthread(void *data)
static int load_XILINX_firmware(struct uea_softc *sc)
static void uea_dispatch_cmv_e1(struct uea_softc *sc, struct intr_pkt *intr)
static void uea_dispatch_cmv_e4(struct uea_softc *sc, struct intr_pkt *intr)
static void uea_schedule_load_page_e1(struct uea_softc *sc,
struct intr_pkt *intr)
static void uea_schedule_load_page_e4(struct uea_softc *sc,
struct intr_pkt *intr)
static void uea_intr(struct urb *urb)
static int uea_boot(struct uea_softc *sc)
static void uea_stop(struct uea_softc *sc)
static struct uea_softc *dev_to_uea(struct device *dev)
static ssize_t read_status(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t reboot(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(stat_status, S_IWUSR | S_IRUGO, read_status, reboot);
static ssize_t read_human_status(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(stat_human_status, S_IRUGO, read_human_status, NULL);
static ssize_t read_delin(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(stat_delin, S_IRUGO, read_delin, NULL);
#define UEA_ATTR(name, reset)					\
\
static ssize_t read_##name(struct device *dev,			\
struct device_attribute *attr, char *buf)	\
\
\
static DEVICE_ATTR(stat_##name, S_IRUGO, read_##name, NULL)
UEA_ATTR(mflags, 1);
UEA_ATTR(vidcpe, 0);
UEA_ATTR(usrate, 0);
UEA_ATTR(dsrate, 0);
UEA_ATTR(usattenuation, 0);
UEA_ATTR(dsattenuation, 0);
UEA_ATTR(usmargin, 0);
UEA_ATTR(dsmargin, 0);
UEA_ATTR(txflow, 0);
UEA_ATTR(rxflow, 0);
UEA_ATTR(uscorr, 0);
UEA_ATTR(dscorr, 0);
UEA_ATTR(usunc, 0);
UEA_ATTR(dsunc, 0);
UEA_ATTR(firmid, 0);
static int uea_getesi(struct uea_softc *sc, u_char * esi)
static int uea_atm_open(struct usbatm_data *usbatm, struct atm_dev *atm_dev)
static int uea_heavy(struct usbatm_data *usbatm, struct usb_interface *intf)
static int claim_interface(struct usb_device *usb_dev,
struct usbatm_data *usbatm, int ifnum)
static struct attribute *attrs[] = ;
static struct attribute_group attr_grp = ;
static int uea_bind(struct usbatm_data *usbatm, struct usb_interface *intf,
const struct usb_device_id *id)
static void uea_unbind(struct usbatm_data *usbatm, struct usb_interface *intf)
static struct usbatm_driver uea_usbatm_driver = ;
static int uea_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void uea_disconnect(struct usb_interface *intf)
static const struct usb_device_id uea_ids[] = ;
static struct usb_driver uea_driver = ;
MODULE_DEVICE_TABLE(usb, uea_ids);
static int __init uea_init(void)
module_init(uea_init);
static void __exit uea_exit(void)
module_exit(uea_exit);
MODULE_AUTHOR("Damien Bergamini/Matthieu Castet/Stanislaw W. Gruszka");
MODULE_DESCRIPTION("ADI 930/Eagle USB ADSL Modem driver");
MODULE_LICENSE("Dual BSD/GPL");
