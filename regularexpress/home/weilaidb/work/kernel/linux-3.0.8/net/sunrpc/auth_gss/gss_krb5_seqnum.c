# define RPCDBG_FACILITY        RPCDBG_AUTH
static s32
krb5_make_rc4_seq_num(struct krb5_ctx *kctx, int direction, s32 seqnum,
unsigned char *cksum, unsigned char *buf)
s32
krb5_make_seq_num(struct krb5_ctx *kctx,
struct crypto_blkcipher *key,
int direction,
u32 seqnum,
unsigned char *cksum, unsigned char *buf)
static s32
krb5_get_rc4_seq_num(struct krb5_ctx *kctx, unsigned char *cksum,
unsigned char *buf, int *direction, s32 *seqnum)
s32
krb5_get_seq_num(struct krb5_ctx *kctx,
unsigned char *cksum,
unsigned char *buf,
int *direction, u32 *seqnum)
