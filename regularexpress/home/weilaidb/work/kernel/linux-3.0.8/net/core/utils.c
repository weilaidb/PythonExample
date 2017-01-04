int net_msg_warn __read_mostly = 1;
EXPORT_SYMBOL(net_msg_warn);
DEFINE_RATELIMIT_STATE(net_ratelimit_state, 5 * HZ, 10);
int net_ratelimit(void)
EXPORT_SYMBOL(net_ratelimit);
__be32 in_aton(const char *str)
EXPORT_SYMBOL(in_aton);
#define IN6PTON_XDIGIT		0x00010000
#define IN6PTON_DIGIT		0x00020000
#define IN6PTON_COLON_MASK	0x00700000
#define IN6PTON_COLON_1		0x00100000
#define IN6PTON_COLON_2		0x00200000
#define IN6PTON_COLON_1_2	0x00400000
#define IN6PTON_DOT		0x00800000
#define IN6PTON_DELIM		0x10000000
#define IN6PTON_NULL		0x20000000
#define IN6PTON_UNKNOWN		0x40000000
static inline int xdigit2bin(char c, int delim)
int in4_pton(const char *src, int srclen,
u8 *dst,
int delim, const char **end)
EXPORT_SYMBOL(in4_pton);
int in6_pton(const char *src, int srclen,
u8 *dst,
int delim, const char **end)
EXPORT_SYMBOL(in6_pton);
void inet_proto_csum_replace4(__sum16 *sum, struct sk_buff *skb,
__be32 from, __be32 to, int pseudohdr)
EXPORT_SYMBOL(inet_proto_csum_replace4);
int mac_pton(const char *s, u8 *mac)
EXPORT_SYMBOL(mac_pton);
