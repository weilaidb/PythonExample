static struct kmem_cache *dccp_ackvec_slab;
static struct kmem_cache *dccp_ackvec_record_slab;
struct dccp_ackvec *dccp_ackvec_alloc(const gfp_t priority)
static void dccp_ackvec_purge_records(struct dccp_ackvec *av)
void dccp_ackvec_free(struct dccp_ackvec *av)
int dccp_ackvec_update_records(struct dccp_ackvec *av, u64 seqno, u8 nonce_sum)
static struct dccp_ackvec_record *dccp_ackvec_lookup(struct list_head *av_list,
const u64 ackno)
static inline u16 __ackvec_idx_add(const u16 a, const u16 b)
static inline u16 __ackvec_idx_sub(const u16 a, const u16 b)
u16 dccp_ackvec_buflen(const struct dccp_ackvec *av)
static void dccp_ackvec_update_old(struct dccp_ackvec *av, s64 distance,
u64 seqno, enum dccp_ackvec_states state)
static void dccp_ackvec_reserve_seats(struct dccp_ackvec *av, u16 num)
static void dccp_ackvec_add_new(struct dccp_ackvec *av, u32 num_packets,
u64 seqno, enum dccp_ackvec_states state)
void dccp_ackvec_input(struct dccp_ackvec *av, struct sk_buff *skb)
void dccp_ackvec_clear_state(struct dccp_ackvec *av, const u64 ackno)
int dccp_ackvec_parsed_add(struct list_head *head, u8 *vec, u8 len, u8 nonce)
EXPORT_SYMBOL_GPL(dccp_ackvec_parsed_add);
void dccp_ackvec_parsed_cleanup(struct list_head *parsed_chunks)
EXPORT_SYMBOL_GPL(dccp_ackvec_parsed_cleanup);
int __init dccp_ackvec_init(void)
void dccp_ackvec_exit(void)
