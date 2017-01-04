#define _TFRC_H_
extern int tfrc_debug;
#define tfrc_pr_debug(format, a...)	DCCP_PR_DEBUG(tfrc_debug, format, ##a)
#define tfrc_pr_debug(format, a...)
static inline u64 scaled_div(u64 a, u64 b)
static inline u32 scaled_div32(u64 a, u64 b)
static inline u32 tfrc_ewma(const u32 avg, const u32 newval, const u8 weight)
extern u32  tfrc_calc_x(u16 s, u32 R, u32 p);
extern u32  tfrc_calc_x_reverse_lookup(u32 fvalue);
extern u32  tfrc_invert_loss_event_rate(u32 loss_event_rate);
extern int  tfrc_tx_packet_history_init(void);
extern void tfrc_tx_packet_history_exit(void);
extern int  tfrc_rx_packet_history_init(void);
extern void tfrc_rx_packet_history_exit(void);
extern int  tfrc_li_init(void);
extern void tfrc_li_exit(void);
extern int  tfrc_lib_init(void);
extern void tfrc_lib_exit(void);
#define tfrc_lib_init() (0)
#define tfrc_lib_exit()
