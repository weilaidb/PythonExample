#define GET_LE32(p) (*(const int *)(p))
#define PUT_LE32(p,v)
#define BVAL(buf,pos) (((const __u8 *)(buf))[pos])
#define PVAL(buf,pos) ((unsigned)BVAL(buf,pos))
#define BSET(buf,pos,val) (((__u8 *)(buf))[pos] = (val))
static inline __u16
WVAL_LH(const __u8 * buf, int pos)
static inline __u32
DVAL_LH(const __u8 * buf, int pos)
static inline void
WSET_LH(__u8 * buf, int pos, __u16 val)
static inline void
DSET_LH(__u8 * buf, int pos, __u32 val)
#define GET_LE32(p) DVAL_LH(p,0)
#define PUT_LE32(p,v) DSET_LH(p,0,v)
static void nwsign(char *r_data1, char *r_data2, char *outdata)
void __sign_packet(struct ncp_server *server, const char *packet, size_t size, __u32 totalsize, void *sign_buff)
int sign_verify_reply(struct ncp_server *server, const char *packet, size_t size, __u32 totalsize, const void *sign_buff)
