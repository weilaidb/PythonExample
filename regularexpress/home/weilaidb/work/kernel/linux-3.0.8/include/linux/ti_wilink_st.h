#define TI_WILINK_ST_H
enum proto_type ;
struct st_proto_s ;
extern long st_register(struct st_proto_s *);
extern long st_unregister(struct st_proto_s *);
#define ST_NOTEMPTY	1
#define ST_EMPTY	0
#define ST_INITIALIZING		1
#define ST_REG_IN_PROGRESS	2
#define ST_REG_PENDING		3
#define ST_WAITING_FOR_RESP	4
struct st_data_s ;
int st_get_uart_wr_room(struct st_data_s *st_gdata);
int st_int_write(struct st_data_s*, const unsigned char*, int);
long st_write(struct sk_buff *);
void st_ll_send_frame(enum proto_type, struct sk_buff *);
void st_tx_wakeup(struct st_data_s *st_data);
int st_core_init(struct st_data_s **);
void st_core_exit(struct st_data_s *);
void st_kim_ref(struct st_data_s **, int);
#define GPS_STUB_TEST
int gps_chrdrv_stub_write(const unsigned char*, int);
void gps_chrdrv_stub_init(void);
#define LDISC_TIME	1000
#define CMD_RESP_TIME	800
#define CMD_WR_TIME	5000
#define MAKEWORD(a, b)  ((unsigned short)(((unsigned char)(a)) \
| ((unsigned short)((unsigned char)(b))) << 8))
#define GPIO_HIGH 1
#define GPIO_LOW  0
#define POR_RETRY_COUNT 5
struct chip_version ;
#define UART_DEV_NAME_LEN 32
struct kim_data_s ;
long st_kim_start(void *);
long st_kim_stop(void *);
void st_kim_recv(void *, const unsigned char *, long count);
void st_kim_complete(void *);
void kim_st_list_protocols(struct st_data_s *, void *);
#define ACTION_SEND_COMMAND     1
#define ACTION_WAIT_EVENT       2
#define ACTION_SERIAL           3
#define ACTION_DELAY            4
#define ACTION_RUN_SCRIPT       5
#define ACTION_REMARKS          6
struct bts_header  __attribute__ ((packed));
struct bts_action  __attribute__ ((packed));
struct bts_action_send  __attribute__ ((packed));
struct bts_action_wait  __attribute__ ((packed));
struct bts_action_delay  __attribute__ ((packed));
struct bts_action_serial  __attribute__ ((packed));
struct hci_command  __attribute__ ((packed));
#define ST_W4_PACKET_TYPE       0
#define ST_W4_HEADER		1
#define ST_W4_DATA		2
#define ST_LL_ASLEEP               0
#define ST_LL_ASLEEP_TO_AWAKE      1
#define ST_LL_AWAKE                2
#define ST_LL_AWAKE_TO_ASLEEP      3
#define ST_LL_INVALID		   4
#define LL_SLEEP_IND	0x30
#define LL_SLEEP_ACK	0x31
#define LL_WAKE_UP_IND	0x32
#define LL_WAKE_UP_ACK	0x33
long st_ll_init(struct st_data_s *);
long st_ll_deinit(struct st_data_s *);
void st_ll_enable(struct st_data_s *);
void st_ll_disable(struct st_data_s *);
unsigned long st_ll_getstate(struct st_data_s *);
unsigned long st_ll_sleep_state(struct st_data_s *, unsigned char);
void st_ll_wakeup(struct st_data_s *);
struct fm_event_hdr  __attribute__ ((packed));
#define FM_MAX_FRAME_SIZE 0xFF
#define FM_EVENT_HDR_SIZE 1
#define ST_FM_CH8_PKT 0x8
struct gps_event_hdr  __attribute__ ((packed));
struct ti_st_plat_data ;
