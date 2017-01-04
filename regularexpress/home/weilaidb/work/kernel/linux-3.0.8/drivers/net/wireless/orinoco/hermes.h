#define _HERMES_H
#define		HERMES_ALLOC_LEN_MIN		(4)
#define		HERMES_ALLOC_LEN_MAX		(2400)
#define		HERMES_LTV_LEN_MAX		(34)
#define		HERMES_BAP_DATALEN_MAX		(4096)
#define		HERMES_BAP_OFFSET_MAX		(4096)
#define		HERMES_PORTID_MAX		(7)
#define		HERMES_NUMPORTS_MAX		(HERMES_PORTID_MAX+1)
#define		HERMES_PDR_LEN_MAX		(260)
#define		HERMES_PDA_RECS_MAX		(200)
#define		HERMES_PDA_LEN_MAX		(1024)
#define		HERMES_SCANRESULT_MAX		(35)
#define		HERMES_CHINFORESULT_MAX		(8)
#define		HERMES_MAX_MULTICAST		(16)
#define		HERMES_MAGIC			(0x7d1f)
#define		HERMES_CMD			(0x00)
#define		HERMES_PARAM0			(0x02)
#define		HERMES_PARAM1			(0x04)
#define		HERMES_PARAM2			(0x06)
#define		HERMES_STATUS			(0x08)
#define		HERMES_RESP0			(0x0A)
#define		HERMES_RESP1			(0x0C)
#define		HERMES_RESP2			(0x0E)
#define		HERMES_INFOFID			(0x10)
#define		HERMES_RXFID			(0x20)
#define		HERMES_ALLOCFID			(0x22)
#define		HERMES_TXCOMPLFID		(0x24)
#define		HERMES_SELECT0			(0x18)
#define		HERMES_OFFSET0			(0x1C)
#define		HERMES_DATA0			(0x36)
#define		HERMES_SELECT1			(0x1A)
#define		HERMES_OFFSET1			(0x1E)
#define		HERMES_DATA1			(0x38)
#define		HERMES_EVSTAT			(0x30)
#define		HERMES_INTEN			(0x32)
#define		HERMES_EVACK			(0x34)
#define		HERMES_CONTROL			(0x14)
#define		HERMES_SWSUPPORT0		(0x28)
#define		HERMES_SWSUPPORT1		(0x2A)
#define		HERMES_SWSUPPORT2		(0x2C)
#define		HERMES_AUXPAGE			(0x3A)
#define		HERMES_AUXOFFSET		(0x3C)
#define		HERMES_AUXDATA			(0x3E)
#define		HERMES_CMD_BUSY			(0x8000)
#define		HERMES_CMD_AINFO		(0x7f00)
#define		HERMES_CMD_MACPORT		(0x0700)
#define		HERMES_CMD_RECL			(0x0100)
#define		HERMES_CMD_WRITE		(0x0100)
#define		HERMES_CMD_PROGMODE		(0x0300)
#define		HERMES_CMD_CMDCODE		(0x003f)
#define		HERMES_STATUS_RESULT		(0x7f00)
#define		HERMES_STATUS_CMDCODE		(0x003f)
#define		HERMES_OFFSET_BUSY		(0x8000)
#define		HERMES_OFFSET_ERR		(0x4000)
#define		HERMES_OFFSET_DATAOFF		(0x0ffe)
#define		HERMES_EV_TICK			(0x8000)
#define		HERMES_EV_WTERR			(0x4000)
#define		HERMES_EV_INFDROP		(0x2000)
#define		HERMES_EV_INFO			(0x0080)
#define		HERMES_EV_DTIM			(0x0020)
#define		HERMES_EV_CMD			(0x0010)
#define		HERMES_EV_ALLOC			(0x0008)
#define		HERMES_EV_TXEXC			(0x0004)
#define		HERMES_EV_TX			(0x0002)
#define		HERMES_EV_RX			(0x0001)
#define		HERMES_CMD_INIT			(0x0000)
#define		HERMES_CMD_ENABLE		(0x0001)
#define		HERMES_CMD_DISABLE		(0x0002)
#define		HERMES_CMD_DIAG			(0x0003)
#define		HERMES_CMD_ALLOC		(0x000A)
#define		HERMES_CMD_TX			(0x000B)
#define		HERMES_CMD_NOTIFY		(0x0010)
#define		HERMES_CMD_INQUIRE		(0x0011)
#define		HERMES_CMD_ACCESS		(0x0021)
#define		HERMES_CMD_DOWNLD		(0x0022)
#define		HERMES_CMD_READMIF		(0x0030)
#define		HERMES_CMD_WRITEMIF		(0x0031)
#define 	HERMES_CMD_TEST			(0x0038)
#define		HERMES_TEST_SET_CHANNEL		0x0800
#define		HERMES_TEST_MONITOR		0x0b00
#define		HERMES_TEST_STOP		0x0f00
#define		HERMES_AUTH_OPEN		1
#define		HERMES_AUTH_SHARED_KEY		2
#define		HERMES_WEP_PRIVACY_INVOKED	0x0001
#define		HERMES_WEP_EXCL_UNENCRYPTED	0x0002
#define		HERMES_WEP_HOST_ENCRYPT		0x0010
#define		HERMES_WEP_HOST_DECRYPT		0x0080
#define		HERMES_HOSTSCAN_SYMBOL_5SEC	0x0001
#define		HERMES_HOSTSCAN_SYMBOL_ONCE	0x0002
#define		HERMES_HOSTSCAN_SYMBOL_PASSIVE	0x0040
#define		HERMES_HOSTSCAN_SYMBOL_BCAST	0x0080
#define HERMES_DESCRIPTOR_OFFSET	0
#define HERMES_802_11_OFFSET		(14)
#define HERMES_802_3_OFFSET		(14+32)
#define HERMES_802_2_OFFSET		(14+32+14)
#define HERMES_TXCNTL2_OFFSET		(HERMES_802_3_OFFSET - 2)
#define HERMES_RXSTAT_ERR		(0x0003)
#define	HERMES_RXSTAT_BADCRC		(0x0001)
#define	HERMES_RXSTAT_UNDECRYPTABLE	(0x0002)
#define	HERMES_RXSTAT_MIC		(0x0010)
#define	HERMES_RXSTAT_MACPORT		(0x0700)
#define HERMES_RXSTAT_PCF		(0x1000)
#define	HERMES_RXSTAT_MIC_KEY_ID	(0x1800)
#define	HERMES_RXSTAT_MSGTYPE		(0xE000)
#define	HERMES_RXSTAT_1042		(0x2000)
#define	HERMES_RXSTAT_TUNNEL		(0x4000)
#define	HERMES_RXSTAT_WMP		(0x6000)
#define	HERMES_MIC_KEY_ID_SHIFT		11
struct hermes_tx_descriptor  __packed;
#define HERMES_TXSTAT_RETRYERR		(0x0001)
#define HERMES_TXSTAT_AGEDERR		(0x0002)
#define HERMES_TXSTAT_DISCON		(0x0004)
#define HERMES_TXSTAT_FORMERR		(0x0008)
#define HERMES_TXCTRL_TX_OK		(0x0002)
#define HERMES_TXCTRL_TX_EX		(0x0004)
#define HERMES_TXCTRL_802_11		(0x0008)
#define HERMES_TXCTRL_MIC		(0x0010)
#define HERMES_TXCTRL_MIC_KEY_ID	(0x1800)
#define HERMES_TXCTRL_ALT_RTRY		(0x0020)
#define HERMES_INQ_TALLIES		(0xF100)
#define HERMES_INQ_SCAN			(0xF101)
#define HERMES_INQ_CHANNELINFO		(0xF102)
#define HERMES_INQ_HOSTSCAN		(0xF103)
#define HERMES_INQ_HOSTSCAN_SYMBOL	(0xF104)
#define HERMES_INQ_LINKSTATUS		(0xF200)
#define HERMES_INQ_SEC_STAT_AGERE	(0xF202)
struct hermes_tallies_frame  __packed;
struct prism2_scan_apinfo  __packed;
struct agere_scan_apinfo  __packed;
struct symbol_scan_apinfo  __packed;
union hermes_scan_info ;
struct agere_ext_scan_info  __packed;
#define HERMES_LINKSTATUS_NOT_CONNECTED   (0x0000)
#define HERMES_LINKSTATUS_CONNECTED       (0x0001)
#define HERMES_LINKSTATUS_DISCONNECTED    (0x0002)
#define HERMES_LINKSTATUS_AP_CHANGE       (0x0003)
#define HERMES_LINKSTATUS_AP_OUT_OF_RANGE (0x0004)
#define HERMES_LINKSTATUS_AP_IN_RANGE     (0x0005)
#define HERMES_LINKSTATUS_ASSOC_FAILED    (0x0006)
struct hermes_linkstatus  __packed;
struct hermes_response ;
struct hermes_idstring  __packed;
struct hermes_multicast  __packed;
#define HERMES_BAP_BUSY_TIMEOUT (10000)
struct hermes;
struct hermes_ops ;
typedef struct hermes  hermes_t;
#define hermes_read_reg(hw, off) \
(ioread16((hw)->iobase + ((off) << (hw)->reg_spacing)))
#define hermes_write_reg(hw, off, val) \
(iowrite16((val), (hw)->iobase + ((off) << (hw)->reg_spacing)))
#define hermes_read_regn(hw, name) hermes_read_reg((hw), HERMES_##name)
#define hermes_write_regn(hw, name, val) \
hermes_write_reg((hw), HERMES_##name, (val))
void hermes_struct_init(hermes_t *hw, void __iomem *address, int reg_spacing);
static inline int hermes_present(hermes_t *hw)
static inline void hermes_set_irqmask(hermes_t *hw, u16 events)
static inline int hermes_enable_port(hermes_t *hw, int port)
static inline int hermes_disable_port(hermes_t *hw, int port)
static inline int hermes_inquire(hermes_t *hw, u16 rid)
#define HERMES_BYTES_TO_RECLEN(n) ((((n)+1)/2) + 1)
#define HERMES_RECLEN_TO_BYTES(n) (((n)-1) * 2)
static inline void hermes_read_words(struct hermes *hw, int off,
void *buf, unsigned count)
static inline void hermes_write_bytes(struct hermes *hw, int off,
const char *buf, unsigned count)
static inline void hermes_clear_words(struct hermes *hw, int off,
unsigned count)
#define HERMES_READ_RECORD(hw, bap, rid, buf) \
(hw->ops->read_ltv((hw), (bap), (rid), sizeof(*buf), NULL, (buf)))
#define HERMES_WRITE_RECORD(hw, bap, rid, buf) \
(hw->ops->write_ltv((hw), (bap), (rid), \
HERMES_BYTES_TO_RECLEN(sizeof(*buf)), (buf)))
static inline int hermes_read_wordrec(hermes_t *hw, int bap, u16 rid, u16 *word)
static inline int hermes_write_wordrec(hermes_t *hw, int bap, u16 rid, u16 word)
