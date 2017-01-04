struct nf_ct_frag6_skb_cb
;
#define NFCT_FRAG6_CB(skb)	((struct nf_ct_frag6_skb_cb*)((skb)->cb))
struct nf_ct_frag6_queue
;
static struct inet_frags nf_frags;
static struct netns_frags nf_init_frags;
static struct ctl_table nf_ct_frag6_sysctl_table[] = ;
static struct ctl_table_header *nf_ct_frag6_sysctl_header;
static unsigned int nf_hashfn(struct inet_frag_queue *q)
static void nf_skb_free(struct sk_buff *skb)
static __inline__ void fq_put(struct nf_ct_frag6_queue *fq)
static __inline__ void fq_kill(struct nf_ct_frag6_queue *fq)
static void nf_ct_frag6_evictor(void)
static void nf_ct_frag6_expire(unsigned long data)
static __inline__ struct nf_ct_frag6_queue *
fq_find(__be32 id, u32 user, struct in6_addr *src, struct in6_addr *dst)
static int nf_ct_frag6_queue(struct nf_ct_frag6_queue *fq, struct sk_buff *skb,
const struct frag_hdr *fhdr, int nhoff)
static struct sk_buff *
nf_ct_frag6_reasm(struct nf_ct_frag6_queue *fq, struct net_device *dev)
static int
find_prev_fhdr(struct sk_buff *skb, u8 *prevhdrp, int *prevhoff, int *fhoff)
struct sk_buff *nf_ct_frag6_gather(struct sk_buff *skb, u32 user)
void nf_ct_frag6_output(unsigned int hooknum, struct sk_buff *skb,
struct net_device *in, struct net_device *out,
int (*okfn)(struct sk_buff *))
int nf_ct_frag6_init(void)
void nf_ct_frag6_cleanup(void)
