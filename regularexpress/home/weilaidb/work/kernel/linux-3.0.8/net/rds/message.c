static unsigned int	rds_exthdr_size[__RDS_EXTHDR_MAX] = ;
void rds_message_addref(struct rds_message *rm)
EXPORT_SYMBOL_GPL(rds_message_addref);
static void rds_message_purge(struct rds_message *rm)
void rds_message_put(struct rds_message *rm)
EXPORT_SYMBOL_GPL(rds_message_put);
void rds_message_populate_header(struct rds_header *hdr, __be16 sport,
__be16 dport, u64 seq)
EXPORT_SYMBOL_GPL(rds_message_populate_header);
int rds_message_add_extension(struct rds_header *hdr, unsigned int type,
const void *data, unsigned int len)
EXPORT_SYMBOL_GPL(rds_message_add_extension);
int rds_message_next_extension(struct rds_header *hdr,
unsigned int *pos, void *buf, unsigned int *buflen)
int rds_message_add_rdma_dest_extension(struct rds_header *hdr, u32 r_key, u32 offset)
EXPORT_SYMBOL_GPL(rds_message_add_rdma_dest_extension);
struct rds_message *rds_message_alloc(unsigned int extra_len, gfp_t gfp)
struct scatterlist *rds_message_alloc_sgs(struct rds_message *rm, int nents)
struct rds_message *rds_message_map_pages(unsigned long *page_addrs, unsigned int total_len)
int rds_message_copy_from_user(struct rds_message *rm, struct iovec *first_iov,
size_t total_len)
int rds_message_inc_copy_to_user(struct rds_incoming *inc,
struct iovec *first_iov, size_t size)
void rds_message_wait(struct rds_message *rm)
void rds_message_unmapped(struct rds_message *rm)
EXPORT_SYMBOL_GPL(rds_message_unmapped);
