#define _AVMCARD_H_
#define	AVMB1_PORTLEN		0x1f
#define AVM_MAXVERSION		8
#define AVM_NCCI_PER_CHANNEL	4
#define	VER_DRIVER	0
#define	VER_CARDTYPE	1
#define	VER_HWID	2
#define	VER_SERIAL	3
#define	VER_OPTION	4
#define	VER_PROTO	5
#define	VER_PROFILE	6
#define	VER_CAPI	7
enum avmcardtype ;
typedef struct avmcard_dmabuf  avmcard_dmabuf;
typedef struct avmcard_dmainfo  avmcard_dmainfo;
typedef	struct avmctrl_info  avmctrl_info;
typedef struct avmcard  avmcard;
extern int b1_irq_table[16];
#define	SEND_POLL		0x72
#define SEND_INIT		0x11
#define SEND_REGISTER		0x12
#define SEND_RELEASE		0x14
#define SEND_MESSAGE		0x15
#define SEND_DATA_B3_REQ	0x13
#define SEND_CONFIG		0x21
#define SEND_POLLACK		0x73
#define RECEIVE_POLL		0x32
#define RECEIVE_INIT		0x27
#define RECEIVE_MESSAGE		0x21
#define RECEIVE_DATA_B3_IND	0x22
#define RECEIVE_START		0x23
#define RECEIVE_STOP		0x24
#define RECEIVE_NEW_NCCI	0x25
#define RECEIVE_FREE_NCCI	0x26
#define RECEIVE_RELEASE		0x26
#define RECEIVE_TASK_READY	0x31
#define RECEIVE_DEBUGMSG	0x71
#define RECEIVE_POLLDWORD	0x75
#define WRITE_REGISTER		0x00
#define READ_REGISTER		0x01
#define B1_READ			0x00
#define B1_WRITE		0x01
#define B1_INSTAT		0x02
#define B1_OUTSTAT		0x03
#define B1_ANALYSE		0x04
#define B1_REVISION		0x05
#define B1_RESET		0x10
#define B1_STAT0(cardtype)  ((cardtype) == avm_m1 ? 0x81200000l : 0x80A00000l)
#define B1_STAT1(cardtype)  (0x80E00000l)
static inline unsigned char b1outp(unsigned int base,
unsigned short offset,
unsigned char value)
static inline int b1_rx_full(unsigned int base)
static inline unsigned char b1_get_byte(unsigned int base)
static inline unsigned int b1_get_word(unsigned int base)
static inline int b1_tx_empty(unsigned int base)
static inline void b1_put_byte(unsigned int base, unsigned char val)
static inline int b1_save_put_byte(unsigned int base, unsigned char val)
static inline void b1_put_word(unsigned int base, unsigned int val)
static inline unsigned int b1_get_slice(unsigned int base,
unsigned char *dp)
static inline void b1_put_slice(unsigned int base,
unsigned char *dp, unsigned int len)
static void b1_wr_reg(unsigned int base,
unsigned int reg,
unsigned int value)
static inline unsigned int b1_rd_reg(unsigned int base,
unsigned int reg)
static inline void b1_reset(unsigned int base)
static inline unsigned char b1_disable_irq(unsigned int base)
static inline void b1_set_test_bit(unsigned int base,
enum avmcardtype cardtype,
int onoff)
static inline int b1_get_test_bit(unsigned int base,
enum avmcardtype cardtype)
#define T1_FASTLINK		0x00
#define T1_SLOWLINK		0x08
#define T1_READ			B1_READ
#define T1_WRITE		B1_WRITE
#define T1_INSTAT		B1_INSTAT
#define T1_OUTSTAT		B1_OUTSTAT
#define T1_IRQENABLE		0x05
#define T1_FIFOSTAT		0x06
#define T1_RESETLINK		0x10
#define T1_ANALYSE		0x11
#define T1_IRQMASTER		0x12
#define T1_IDENT		0x17
#define T1_RESETBOARD		0x1f
#define	T1F_IREADY		0x01
#define	T1F_IHALF		0x02
#define	T1F_IFULL		0x04
#define	T1F_IEMPTY		0x08
#define	T1F_IFLAGS		0xF0
#define	T1F_OREADY		0x10
#define	T1F_OHALF		0x20
#define	T1F_OEMPTY		0x40
#define	T1F_OFULL		0x80
#define	T1F_OFLAGS		0xF0
#define FIFO_OUTBSIZE		256
#define FIFO_INPBSIZE		512
#define HEMA_VERSION_ID		0
#define HEMA_PAL_ID		0
static inline void t1outp(unsigned int base,
unsigned short offset,
unsigned char value)
static inline unsigned char t1inp(unsigned int base,
unsigned short offset)
static inline int t1_isfastlink(unsigned int base)
static inline unsigned char t1_fifostatus(unsigned int base)
static inline unsigned int t1_get_slice(unsigned int base,
unsigned char *dp)
static inline void t1_put_slice(unsigned int base,
unsigned char *dp, unsigned int len)
static inline void t1_disable_irq(unsigned int base)
static inline void t1_reset(unsigned int base)
static inline void b1_setinterrupt(unsigned int base, unsigned irq,
enum avmcardtype cardtype)
avmcard *b1_alloc_card(int nr_controllers);
void b1_free_card(avmcard *card);
int b1_detect(unsigned int base, enum avmcardtype cardtype);
void b1_getrevision(avmcard *card);
int b1_load_t4file(avmcard *card, capiloaddatapart * t4file);
int b1_load_config(avmcard *card, capiloaddatapart * config);
int b1_loaded(avmcard *card);
int b1_load_firmware(struct capi_ctr *ctrl, capiloaddata *data);
void b1_reset_ctr(struct capi_ctr *ctrl);
void b1_register_appl(struct capi_ctr *ctrl, u16 appl,
capi_register_params *rp);
void b1_release_appl(struct capi_ctr *ctrl, u16 appl);
u16  b1_send_message(struct capi_ctr *ctrl, struct sk_buff *skb);
void b1_parse_version(avmctrl_info *card);
irqreturn_t b1_interrupt(int interrupt, void *devptr);
extern const struct file_operations b1ctl_proc_fops;
avmcard_dmainfo *avmcard_dma_alloc(char *name, struct pci_dev *,
long rsize, long ssize);
void avmcard_dma_free(avmcard_dmainfo *);
int b1pciv4_detect(avmcard *card);
int t1pci_detect(avmcard *card);
void b1dma_reset(avmcard *card);
irqreturn_t b1dma_interrupt(int interrupt, void *devptr);
int b1dma_load_firmware(struct capi_ctr *ctrl, capiloaddata *data);
void b1dma_reset_ctr(struct capi_ctr *ctrl);
void b1dma_remove_ctr(struct capi_ctr *ctrl);
void b1dma_register_appl(struct capi_ctr *ctrl,
u16 appl,
capi_register_params *rp);
void b1dma_release_appl(struct capi_ctr *ctrl, u16 appl);
u16  b1dma_send_message(struct capi_ctr *ctrl, struct sk_buff *skb);
extern const struct file_operations b1dmactl_proc_fops;
