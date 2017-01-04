int wifi_get_mac_addr(unsigned char *buf);
extern int dhd_preinit_ioctls(dhd_pub_t *dhd);
#define DHD_SDALIGN	32
#if !ISPOWEROF2(DHD_SDALIGN)
#error DHD_SDALIGN is not a power of 2!
#define RETRIES 2
#define BUS_HEADER_LEN	(16+DHD_SDALIGN)
#define ROUND_UP_MARGIN	2048
typedef struct dhd_prot  dhd_prot_t;
static int dhdcdc_msg(dhd_pub_t *dhd)
static int dhdcdc_cmplt(dhd_pub_t *dhd, u32 id, u32 len)
int
dhdcdc_query_ioctl(dhd_pub_t *dhd, int ifidx, uint cmd, void *buf, uint len)
int dhdcdc_set_ioctl(dhd_pub_t *dhd, int ifidx, uint cmd, void *buf, uint len)
extern int dhd_bus_interface(struct dhd_bus *bus, uint arg, void *arg2);
int
dhd_prot_ioctl(dhd_pub_t *dhd, int ifidx, wl_ioctl_t *ioc, void *buf, int len)
#define PKTSUMNEEDED(skb) \
(((struct sk_buff *)(skb))->ip_summed == CHECKSUM_PARTIAL)
#define PKTSETSUMGOOD(skb, x) \
(((struct sk_buff *)(skb))->ip_summed = \
((x) ? CHECKSUM_UNNECESSARY : CHECKSUM_NONE))
int
dhd_prot_iovar_op(dhd_pub_t *dhdp, const char *name,
void *params, int plen, void *arg, int len, bool set)
void dhd_prot_dump(dhd_pub_t *dhdp, struct bcmstrbuf *strbuf)
void dhd_prot_hdrpush(dhd_pub_t *dhd, int ifidx, struct sk_buff *pktbuf)
int dhd_prot_hdrpull(dhd_pub_t *dhd, int *ifidx, struct sk_buff *pktbuf)
int dhd_prot_attach(dhd_pub_t *dhd)
void dhd_prot_detach(dhd_pub_t *dhd)
void dhd_prot_dstats(dhd_pub_t *dhd)
int dhd_prot_init(dhd_pub_t *dhd)
void dhd_prot_stop(dhd_pub_t *dhd)
