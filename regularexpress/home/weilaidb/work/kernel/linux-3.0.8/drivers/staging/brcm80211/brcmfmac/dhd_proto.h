#define _dhd_proto_h_
#define IOCTL_RESP_TIMEOUT  2000
#define IOCTL_CHIP_ACTIVE_TIMEOUT  10
extern int dhd_prot_attach(dhd_pub_t *dhdp);
extern void dhd_prot_detach(dhd_pub_t *dhdp);
extern int dhd_prot_init(dhd_pub_t *dhdp);
extern void dhd_prot_stop(dhd_pub_t *dhdp);
extern void dhd_prot_hdrpush(dhd_pub_t *, int ifidx, struct sk_buff *txp);
extern int dhd_prot_hdrpull(dhd_pub_t *, int *ifidx, struct sk_buff *rxp);
extern int dhd_prot_ioctl(dhd_pub_t *dhd, int ifidx, wl_ioctl_t *ioc,
void *buf, int len);
extern int dhd_prot_iovar_op(dhd_pub_t *dhdp, const char *name,
void *params, int plen, void *arg, int len,
bool set);
extern void dhd_prot_dump(dhd_pub_t *dhdp, struct bcmstrbuf *strbuf);
extern void dhd_prot_dstats(dhd_pub_t *dhdp);
extern int dhd_ioctl(dhd_pub_t *dhd_pub, dhd_ioctl_t *ioc, void *buf,
uint buflen);
extern int dhd_preinit_ioctls(dhd_pub_t *dhd);
#if defined(BDC)
#define DHD_PROTOCOL "bdc"
#elif defined(CDC)
#define DHD_PROTOCOL "cdc"
#elif defined(RNDIS)
#define DHD_PROTOCOL "rndis"
#define DHD_PROTOCOL "unknown"
