#define DUMP_OFFSET(x) \
pr_debug("offset_before=%d, offset_after=%d, correction_pos=%u\n", \
x->offset_before, x->offset_after, x->correction_pos);
static DEFINE_SPINLOCK(nf_nat_seqofs_lock);
static inline void
adjust_tcp_sequence(u32 seq,
int sizediff,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo)
s16 nf_nat_get_offset(const struct nf_conn *ct,
enum ip_conntrack_dir dir,
u32 seq)
EXPORT_SYMBOL_GPL(nf_nat_get_offset);
static void mangle_contents(struct sk_buff *skb,
unsigned int dataoff,
unsigned int match_offset,
unsigned int match_len,
const char *rep_buffer,
unsigned int rep_len)
static int enlarge_skb(struct sk_buff *skb, unsigned int extra)
void nf_nat_set_seq_adjust(struct nf_conn *ct, enum ip_conntrack_info ctinfo,
__be32 seq, s16 off)
EXPORT_SYMBOL_GPL(nf_nat_set_seq_adjust);
static void nf_nat_csum(struct sk_buff *skb, const struct iphdr *iph, void *data,
int datalen, __sum16 *check, int oldlen)
int __nf_nat_mangle_tcp_packet(struct sk_buff *skb,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned int match_offset,
unsigned int match_len,
const char *rep_buffer,
unsigned int rep_len, bool adjust)
EXPORT_SYMBOL(__nf_nat_mangle_tcp_packet);
int
nf_nat_mangle_udp_packet(struct sk_buff *skb,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
unsigned int match_offset,
unsigned int match_len,
const char *rep_buffer,
unsigned int rep_len)
EXPORT_SYMBOL(nf_nat_mangle_udp_packet);
static void
sack_adjust(struct sk_buff *skb,
struct tcphdr *tcph,
unsigned int sackoff,
unsigned int sackend,
struct nf_nat_seq *natseq)
static inline unsigned int
nf_nat_sack_adjust(struct sk_buff *skb,
struct tcphdr *tcph,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo)
int
nf_nat_seq_adjust(struct sk_buff *skb,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo)
void nf_nat_follow_master(struct nf_conn *ct,
struct nf_conntrack_expect *exp)
EXPORT_SYMBOL(nf_nat_follow_master);
