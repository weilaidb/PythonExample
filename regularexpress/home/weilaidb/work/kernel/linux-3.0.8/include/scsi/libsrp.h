#define __LIBSRP_H__
enum iue_flags ;
struct srp_buf ;
struct srp_queue ;
struct srp_target ;
struct iu_entry ;
typedef int (srp_rdma_t)(struct scsi_cmnd *, struct scatterlist *, int,
struct srp_direct_buf *, int,
enum dma_data_direction, unsigned int);
extern int srp_target_alloc(struct srp_target *, struct device *, size_t, size_t);
extern void srp_target_free(struct srp_target *);
extern struct iu_entry *srp_iu_get(struct srp_target *);
extern void srp_iu_put(struct iu_entry *);
extern int srp_cmd_queue(struct Scsi_Host *, struct srp_cmd *, void *, u64, u64);
extern int srp_transfer_data(struct scsi_cmnd *, struct srp_cmd *,
srp_rdma_t, int, int);
static inline struct srp_target *host_to_srp_target(struct Scsi_Host *host)
static inline int srp_cmd_direction(struct srp_cmd *cmd)
