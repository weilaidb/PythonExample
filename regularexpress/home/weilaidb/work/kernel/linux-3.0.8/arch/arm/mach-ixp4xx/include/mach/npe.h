#define __IXP4XX_NPE_H
extern const char *npe_names[];
struct npe_regs ;
struct npe ;
static inline const char *npe_name(struct npe *npe)
int npe_running(struct npe *npe);
int npe_send_message(struct npe *npe, const void *msg, const char *what);
int npe_recv_message(struct npe *npe, void *msg, const char *what);
int npe_send_recv_message(struct npe *npe, void *msg, const char *what);
int npe_load_firmware(struct npe *npe, const char *name, struct device *dev);
struct npe *npe_request(unsigned id);
void npe_release(struct npe *npe);
