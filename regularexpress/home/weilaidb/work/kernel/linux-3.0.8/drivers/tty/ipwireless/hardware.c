static void ipw_send_setup_packet(struct ipw_hardware *hw);
static void handle_received_SETUP_packet(struct ipw_hardware *ipw,
unsigned int address,
const unsigned char *data, int len,
int is_last);
static void ipwireless_setup_timer(unsigned long data);
static void handle_received_CTRL_packet(struct ipw_hardware *hw,
unsigned int channel_idx, const unsigned char *data, int len);
static struct timing_stats ;
static void start_timing(void)
static void end_read_timing(unsigned length)
static void end_write_timing(unsigned length)
static void report_timing(void)
static void start_timing(void)
static void end_read_timing(unsigned length)
static void end_write_timing(unsigned length)
#define LL_MTU_V1 318
#define LL_MTU_V2 250
#define LL_MTU_MAX (LL_MTU_V1 > LL_MTU_V2 ? LL_MTU_V1 : LL_MTU_V2)
#define PRIO_DATA  2
#define PRIO_CTRL  1
#define PRIO_SETUP 0
#define ADDR_SETUP_PROT 0
enum ;
#define NL_FIRST_PACKET_HEADER_SIZE        3
#define NL_FOLLOWING_PACKET_HEADER_SIZE    1
struct nl_first_packet_header ;
struct nl_packet_header ;
#define NL_INTERMEDIATE_PACKET    0x0
#define NL_LAST_PACKET            0x1
#define NL_FIRST_PACKET           0x2
union nl_packet  __attribute__ ((__packed__));
#define HW_VERSION_UNKNOWN -1
#define HW_VERSION_1 1
#define HW_VERSION_2 2
#define IOIER 0x00
#define IOIR  0x02
#define IODCR 0x04
#define IODRR 0x06
#define IODWR 0x08
#define IOESR 0x0A
#define IORXR 0x0C
#define IOTXR 0x0E
#define IER_RXENABLED   0x1
#define IER_TXENABLED   0x2
#define IR_RXINTR       0x1
#define IR_TXINTR       0x2
#define DCR_RXDONE      0x1
#define DCR_TXDONE      0x2
#define DCR_RXRESET     0x4
#define DCR_TXRESET     0x8
struct MEMCCR ;
struct MEMINFREG ;
#define CARD_PRESENT_VALUE (0xBEEFCAFEUL)
#define MEMTX_TX                       0x0001
#define MEMRX_RX                       0x0001
#define MEMRX_RX_DONE                  0x0001
#define MEMRX_PCINTACKK                0x0001
#define NL_NUM_OF_PRIORITIES       3
#define NL_NUM_OF_PROTOCOLS        3
#define NL_NUM_OF_ADDRESSES        NO_OF_IPW_CHANNELS
struct ipw_hardware ;
struct ipw_tx_packet ;
#define COMCTRL_RTS	0
#define COMCTRL_DTR	1
#define COMCTRL_CTS	2
#define COMCTRL_DCD	3
#define COMCTRL_DSR	4
#define COMCTRL_RI	5
struct ipw_control_packet_body  __attribute__ ((__packed__));
struct ipw_control_packet ;
struct ipw_rx_packet ;
static char *data_type(const unsigned char *buf, unsigned length)
#define DUMP_MAX_BYTES 64
static void dump_data_bytes(const char *type, const unsigned char *data,
unsigned length)
static void swap_packet_bitfield_to_le(unsigned char *data)
static void swap_packet_bitfield_from_le(unsigned char *data)
static void do_send_fragment(struct ipw_hardware *hw, unsigned char *data,
unsigned length)
static void do_send_packet(struct ipw_hardware *hw, struct ipw_tx_packet *packet)
static void ipw_setup_hardware(struct ipw_hardware *hw)
static struct ipw_rx_packet *pool_allocate(struct ipw_hardware *hw,
struct ipw_rx_packet *packet,
int minimum_free_space)
static void pool_free(struct ipw_hardware *hw, struct ipw_rx_packet *packet)
static void queue_received_packet(struct ipw_hardware *hw,
unsigned int protocol,
unsigned int address,
const unsigned char *data, int length,
int is_last)
static void ipw_receive_data_work(struct work_struct *work_rx)
static void handle_received_CTRL_packet(struct ipw_hardware *hw,
unsigned int channel_idx,
const unsigned char *data, int len)
static void handle_received_packet(struct ipw_hardware *hw,
const union nl_packet *packet,
unsigned short len)
static void acknowledge_data_read(struct ipw_hardware *hw)
static void do_receive_packet(struct ipw_hardware *hw)
static int get_current_packet_priority(struct ipw_hardware *hw)
static int get_packets_from_hw(struct ipw_hardware *hw)
static int send_pending_packet(struct ipw_hardware *hw, int priority_limit)
static void ipwireless_do_tasklet(unsigned long hw_)
static int is_card_present(struct ipw_hardware *hw)
static irqreturn_t ipwireless_handle_v1_interrupt(int irq,
struct ipw_hardware *hw)
static void acknowledge_pcmcia_interrupt(struct ipw_hardware *hw)
static irqreturn_t ipwireless_handle_v2_v3_interrupt(int irq,
struct ipw_hardware *hw)
irqreturn_t ipwireless_interrupt(int irq, void *dev_id)
static void flush_packets_to_hw(struct ipw_hardware *hw)
static void send_packet(struct ipw_hardware *hw, int priority,
struct ipw_tx_packet *packet)
static void *alloc_data_packet(int data_size,
unsigned char dest_addr,
unsigned char protocol)
static void *alloc_ctrl_packet(int header_size,
unsigned char dest_addr,
unsigned char protocol,
unsigned char sig_no)
int ipwireless_send_packet(struct ipw_hardware *hw, unsigned int channel_idx,
const unsigned char *data, unsigned int length,
void (*callback) (void *cb, unsigned int length),
void *callback_data)
static int set_control_line(struct ipw_hardware *hw, int prio,
unsigned int channel_idx, int line, int state)
static int set_DTR(struct ipw_hardware *hw, int priority,
unsigned int channel_idx, int state)
static int set_RTS(struct ipw_hardware *hw, int priority,
unsigned int channel_idx, int state)
int ipwireless_set_DTR(struct ipw_hardware *hw, unsigned int channel_idx,
int state)
int ipwireless_set_RTS(struct ipw_hardware *hw, unsigned int channel_idx,
int state)
struct ipw_setup_get_version_query_packet ;
struct ipw_setup_config_packet ;
struct ipw_setup_config_done_packet ;
struct ipw_setup_open_packet ;
struct ipw_setup_info_packet ;
struct ipw_setup_reboot_msg_ack ;
static void __handle_setup_get_version_rsp(struct ipw_hardware *hw)
static void handle_setup_get_version_rsp(struct ipw_hardware *hw,
unsigned char vers_no)
static void ipw_send_setup_packet(struct ipw_hardware *hw)
static void handle_received_SETUP_packet(struct ipw_hardware *hw,
unsigned int address,
const unsigned char *data, int len,
int is_last)
static void do_close_hardware(struct ipw_hardware *hw)
struct ipw_hardware *ipwireless_hardware_create(void)
void ipwireless_init_hardware_v1(struct ipw_hardware *hw,
unsigned int base_port,
void __iomem *attr_memory,
void __iomem *common_memory,
int is_v2_card,
void (*reboot_callback) (void *data),
void *reboot_callback_data)
void ipwireless_init_hardware_v2_v3(struct ipw_hardware *hw)
static void ipwireless_setup_timer(unsigned long data)
void ipwireless_stop_interrupts(struct ipw_hardware *hw)
void ipwireless_hardware_free(struct ipw_hardware *hw)
void ipwireless_associate_network(struct ipw_hardware *hw,
struct ipw_network *network)
