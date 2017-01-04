#define __LINUX_FILTER_H__
#define BPF_MAJOR_VERSION 1
#define BPF_MINOR_VERSION 1
struct sock_filter ;
struct sock_fprog ;
#define BPF_CLASS(code) ((code) & 0x07)
#define         BPF_LD          0x00
#define         BPF_LDX         0x01
#define         BPF_ST          0x02
#define         BPF_STX         0x03
#define         BPF_ALU         0x04
#define         BPF_JMP         0x05
#define         BPF_RET         0x06
#define         BPF_MISC        0x07
#define BPF_SIZE(code)  ((code) & 0x18)
#define         BPF_W           0x00
#define         BPF_H           0x08
#define         BPF_B           0x10
#define BPF_MODE(code)  ((code) & 0xe0)
#define         BPF_IMM         0x00
#define         BPF_ABS         0x20
#define         BPF_IND         0x40
#define         BPF_MEM         0x60
#define         BPF_LEN         0x80
#define         BPF_MSH         0xa0
#define BPF_OP(code)    ((code) & 0xf0)
#define         BPF_ADD         0x00
#define         BPF_SUB         0x10
#define         BPF_MUL         0x20
#define         BPF_DIV         0x30
#define         BPF_OR          0x40
#define         BPF_AND         0x50
#define         BPF_LSH         0x60
#define         BPF_RSH         0x70
#define         BPF_NEG         0x80
#define         BPF_JA          0x00
#define         BPF_JEQ         0x10
#define         BPF_JGT         0x20
#define         BPF_JGE         0x30
#define         BPF_JSET        0x40
#define BPF_SRC(code)   ((code) & 0x08)
#define         BPF_K           0x00
#define         BPF_X           0x08
#define BPF_RVAL(code)  ((code) & 0x18)
#define         BPF_A           0x10
#define BPF_MISCOP(code) ((code) & 0xf8)
#define         BPF_TAX         0x00
#define         BPF_TXA         0x80
#define BPF_MAXINSNS 4096
#define BPF_STMT(code, k)
#define BPF_JUMP(code, k, jt, jf)
#define BPF_MEMWORDS 16
#define SKF_AD_OFF    (-0x1000)
#define SKF_AD_PROTOCOL 0
#define SKF_AD_PKTTYPE 	4
#define SKF_AD_IFINDEX 	8
#define SKF_AD_NLATTR	12
#define SKF_AD_NLATTR_NEST	16
#define SKF_AD_MARK 	20
#define SKF_AD_QUEUE	24
#define SKF_AD_HATYPE	28
#define SKF_AD_RXHASH	32
#define SKF_AD_CPU	36
#define SKF_AD_MAX	40
#define SKF_NET_OFF   (-0x100000)
#define SKF_LL_OFF    (-0x200000)
struct sk_buff;
struct sock;
struct sk_filter
;
static inline unsigned int sk_filter_len(const struct sk_filter *fp)
extern int sk_filter(struct sock *sk, struct sk_buff *skb);
extern unsigned int sk_run_filter(const struct sk_buff *skb,
const struct sock_filter *filter);
extern int sk_attach_filter(struct sock_fprog *fprog, struct sock *sk);
extern int sk_detach_filter(struct sock *sk);
extern int sk_chk_filter(struct sock_filter *filter, int flen);
extern void bpf_jit_compile(struct sk_filter *fp);
extern void bpf_jit_free(struct sk_filter *fp);
#define SK_RUN_FILTER(FILTER, SKB) (*FILTER->bpf_func)(SKB, FILTER->insns)
static inline void bpf_jit_compile(struct sk_filter *fp)
static inline void bpf_jit_free(struct sk_filter *fp)
#define SK_RUN_FILTER(FILTER, SKB) sk_run_filter(SKB, FILTER->insns)
enum ;
