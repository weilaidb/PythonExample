#undef ISDN_V110_DEBUG
char *isdn_v110_revision = "$Revision: 1.1.2.2 $";
#define V110_38400 255
#define V110_19200  15
#define V110_9600    3
static unsigned char V110_OnMatrix_9600[] =
;
static unsigned char V110_OffMatrix_9600[] =
;
static unsigned char V110_OnMatrix_19200[] =
;
static unsigned char V110_OffMatrix_19200[] =
;
static unsigned char V110_OnMatrix_38400[] =
;
static unsigned char V110_OffMatrix_38400[] =
;
static inline unsigned char
FlipBits(unsigned char c, int keylen)
static isdn_v110_stream *
isdn_v110_open(unsigned char key, int hdrlen, int maxsize)
void
isdn_v110_close(isdn_v110_stream * v)
static int
ValidHeaderBytes(isdn_v110_stream * v)
static void
SyncHeader(isdn_v110_stream * v)
static int
DecodeMatrix(isdn_v110_stream * v, unsigned char *m, int len, unsigned char *buf)
struct sk_buff *
isdn_v110_decode(isdn_v110_stream * v, struct sk_buff *skb)
static int
EncodeMatrix(unsigned char *buf, int len, unsigned char *m, int mlen)
static struct sk_buff *
isdn_v110_sync(isdn_v110_stream *v)
static struct sk_buff *
isdn_v110_idle(isdn_v110_stream *v)
struct sk_buff *
isdn_v110_encode(isdn_v110_stream * v, struct sk_buff *skb)
int
isdn_v110_stat_callback(int idx, isdn_ctrl *c)
