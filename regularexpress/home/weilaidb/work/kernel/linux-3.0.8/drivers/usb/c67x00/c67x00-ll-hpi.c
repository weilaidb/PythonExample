#define COMM_REGS 14
struct c67x00_lcp_int_data ;
#define COMM_ACK			0x0FED
#define COMM_NAK			0xDEAD
#define COMM_RESET			0xFA50
#define COMM_EXEC_INT			0xCE01
#define COMM_INT_NUM			0x01C2
#define COMM_R(x)			(0x01C4 + 2 * (x))
#define HUSB_SIE_pCurrentTDPtr(x)	((x) ? 0x01B2 : 0x01B0)
#define HUSB_SIE_pTDListDone_Sem(x)	((x) ? 0x01B8 : 0x01B6)
#define HUSB_pEOT			0x01B4
#define HUSB_SIE_INIT_INT(x)		((x) ? 0x0073 : 0x0072)
#define HUSB_RESET_INT			0x0074
#define SUSB_INIT_INT			0x0071
#define SUSB_INIT_INT_LOC		(SUSB_INIT_INT * 2)
#define HPI_DATA	0
#define HPI_MAILBOX	1
#define HPI_ADDR	2
#define HPI_STATUS	3
static inline u16 hpi_read_reg(struct c67x00_device *dev, int reg)
static inline void hpi_write_reg(struct c67x00_device *dev, int reg, u16 value)
static inline u16 hpi_read_word_nolock(struct c67x00_device *dev, u16 reg)
static u16 hpi_read_word(struct c67x00_device *dev, u16 reg)
static void hpi_write_word_nolock(struct c67x00_device *dev, u16 reg, u16 value)
static void hpi_write_word(struct c67x00_device *dev, u16 reg, u16 value)
static void hpi_write_words_le16(struct c67x00_device *dev, u16 addr,
__le16 *data, u16 count)
static void hpi_read_words_le16(struct c67x00_device *dev, u16 addr,
__le16 *data, u16 count)
static void hpi_set_bits(struct c67x00_device *dev, u16 reg, u16 mask)
static void hpi_clear_bits(struct c67x00_device *dev, u16 reg, u16 mask)
static u16 hpi_recv_mbox(struct c67x00_device *dev)
static u16 hpi_send_mbox(struct c67x00_device *dev, u16 value)
u16 c67x00_ll_hpi_status(struct c67x00_device *dev)
void c67x00_ll_hpi_reg_init(struct c67x00_device *dev)
void c67x00_ll_hpi_enable_sofeop(struct c67x00_sie *sie)
void c67x00_ll_hpi_disable_sofeop(struct c67x00_sie *sie)
static inline u16 ll_recv_msg(struct c67x00_device *dev)
u16 c67x00_ll_fetch_siemsg(struct c67x00_device *dev, int sie_num)
u16 c67x00_ll_get_usb_ctl(struct c67x00_sie *sie)
void c67x00_ll_usb_clear_status(struct c67x00_sie *sie, u16 bits)
u16 c67x00_ll_usb_get_status(struct c67x00_sie *sie)
static int c67x00_comm_exec_int(struct c67x00_device *dev, u16 nr,
struct c67x00_lcp_int_data *data)
void c67x00_ll_set_husb_eot(struct c67x00_device *dev, u16 value)
static inline void c67x00_ll_husb_sie_init(struct c67x00_sie *sie)
void c67x00_ll_husb_reset(struct c67x00_sie *sie, int port)
void c67x00_ll_husb_set_current_td(struct c67x00_sie *sie, u16 addr)
u16 c67x00_ll_husb_get_current_td(struct c67x00_sie *sie)
u16 c67x00_ll_husb_get_frame(struct c67x00_sie *sie)
void c67x00_ll_husb_init_host_port(struct c67x00_sie *sie)
void c67x00_ll_husb_reset_port(struct c67x00_sie *sie, int port)
void c67x00_ll_irq(struct c67x00_device *dev, u16 int_status)
int c67x00_ll_reset(struct c67x00_device *dev)
void c67x00_ll_write_mem_le16(struct c67x00_device *dev, u16 addr,
void *data, int len)
void c67x00_ll_read_mem_le16(struct c67x00_device *dev, u16 addr,
void *data, int len)
void c67x00_ll_init(struct c67x00_device *dev)
void c67x00_ll_release(struct c67x00_device *dev)
