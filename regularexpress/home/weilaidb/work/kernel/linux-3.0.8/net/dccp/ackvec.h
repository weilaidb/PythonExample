#define _ACKVEC_H
#define DCCPAV_NUM_ACKVECS	2
#define DCCPAV_MAX_ACKVEC_LEN	(DCCP_SINGLE_OPT_MAXLEN * DCCPAV_NUM_ACKVECS)
#define DCCPAV_MIN_OPTLEN	16
#define DCCPAV_BURST_THRESH	(DCCPAV_MAX_ACKVEC_LEN / 8)
enum dccp_ackvec_states ;
#define DCCPAV_MAX_RUNLEN	0x3F
static inline u8 dccp_ackvec_runlen(const u8 *cell)
static inline u8 dccp_ackvec_state(const u8 *cell)
struct dccp_ackvec ;
struct dccp_ackvec_record ;
extern int dccp_ackvec_init(void);
extern void dccp_ackvec_exit(void);
extern struct dccp_ackvec *dccp_ackvec_alloc(const gfp_t priority);
extern void dccp_ackvec_free(struct dccp_ackvec *av);
extern void dccp_ackvec_input(struct dccp_ackvec *av, struct sk_buff *skb);
extern int  dccp_ackvec_update_records(struct dccp_ackvec *av, u64 seq, u8 sum);
extern void dccp_ackvec_clear_state(struct dccp_ackvec *av, const u64 ackno);
extern u16  dccp_ackvec_buflen(const struct dccp_ackvec *av);
static inline bool dccp_ackvec_is_empty(const struct dccp_ackvec *av)
struct dccp_ackvec_parsed ;
extern int dccp_ackvec_parsed_add(struct list_head *head,
u8 *vec, u8 len, u8 nonce);
extern void dccp_ackvec_parsed_cleanup(struct list_head *parsed_chunks);
