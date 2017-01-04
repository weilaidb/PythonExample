u64 dccp_decode_value_var(const u8 *bf, const u8 len)
int dccp_parse_options(struct sock *sk, struct dccp_request_sock *dreq,
struct sk_buff *skb)
EXPORT_SYMBOL_GPL(dccp_parse_options);
void dccp_encode_value_var(const u64 value, u8 *to, const u8 len)
static inline u8 dccp_ndp_len(const u64 ndp)
int dccp_insert_option(struct sk_buff *skb, const unsigned char option,
const void *value, const unsigned char len)
EXPORT_SYMBOL_GPL(dccp_insert_option);
static int dccp_insert_option_ndp(struct sock *sk, struct sk_buff *skb)
static inline int dccp_elapsed_time_len(const u32 elapsed_time)
int dccp_insert_option_elapsed_time(struct sk_buff *skb, u32 elapsed_time)
EXPORT_SYMBOL_GPL(dccp_insert_option_elapsed_time);
static int dccp_insert_option_timestamp(struct sk_buff *skb)
static int dccp_insert_option_timestamp_echo(struct dccp_sock *dp,
struct dccp_request_sock *dreq,
struct sk_buff *skb)
static int dccp_insert_option_ackvec(struct sock *sk, struct sk_buff *skb)
int dccp_insert_option_mandatory(struct sk_buff *skb)
int dccp_insert_fn_opt(struct sk_buff *skb, u8 type, u8 feat,
u8 *val, u8 len, bool repeat_first)
static void dccp_insert_option_padding(struct sk_buff *skb)
int dccp_insert_options(struct sock *sk, struct sk_buff *skb)
int dccp_insert_options_rsk(struct dccp_request_sock *dreq, struct sk_buff *skb)
