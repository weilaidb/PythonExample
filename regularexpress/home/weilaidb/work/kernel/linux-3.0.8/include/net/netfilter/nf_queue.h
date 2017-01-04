#define _NF_QUEUE_H
struct nf_queue_entry ;
#define nf_queue_entry_reroute(x) ((void *)x + sizeof(struct nf_queue_entry))
struct nf_queue_handler ;
extern int nf_register_queue_handler(u_int8_t pf,
const struct nf_queue_handler *qh);
extern int nf_unregister_queue_handler(u_int8_t pf,
const struct nf_queue_handler *qh);
extern void nf_unregister_queue_handlers(const struct nf_queue_handler *qh);
extern void nf_reinject(struct nf_queue_entry *entry, unsigned int verdict);
