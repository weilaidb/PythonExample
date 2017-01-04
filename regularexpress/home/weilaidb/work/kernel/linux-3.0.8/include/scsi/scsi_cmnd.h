#define _SCSI_SCSI_CMND_H
struct Scsi_Host;
struct scsi_device;
#define MAX_COMMAND_SIZE 16
#if (MAX_COMMAND_SIZE > BLK_MAX_CDB)
# error MAX_COMMAND_SIZE can not be bigger than BLK_MAX_CDB
struct scsi_data_buffer ;
struct scsi_pointer ;
struct scsi_cmnd ;
extern struct scsi_cmnd *scsi_get_command(struct scsi_device *, gfp_t);
extern struct scsi_cmnd *__scsi_get_command(struct Scsi_Host *, gfp_t);
extern void scsi_put_command(struct scsi_cmnd *);
extern void __scsi_put_command(struct Scsi_Host *, struct scsi_cmnd *,
struct device *);
extern void scsi_finish_command(struct scsi_cmnd *cmd);
extern void *scsi_kmap_atomic_sg(struct scatterlist *sg, int sg_count,
size_t *offset, size_t *len);
extern void scsi_kunmap_atomic_sg(void *virt);
extern int scsi_init_io(struct scsi_cmnd *cmd, gfp_t gfp_mask);
extern void scsi_release_buffers(struct scsi_cmnd *cmd);
extern int scsi_dma_map(struct scsi_cmnd *cmd);
extern void scsi_dma_unmap(struct scsi_cmnd *cmd);
struct scsi_cmnd *scsi_allocate_command(gfp_t gfp_mask);
void scsi_free_command(gfp_t gfp_mask, struct scsi_cmnd *cmd);
static inline unsigned scsi_sg_count(struct scsi_cmnd *cmd)
static inline struct scatterlist *scsi_sglist(struct scsi_cmnd *cmd)
static inline unsigned scsi_bufflen(struct scsi_cmnd *cmd)
static inline void scsi_set_resid(struct scsi_cmnd *cmd, int resid)
static inline int scsi_get_resid(struct scsi_cmnd *cmd)
#define scsi_for_each_sg(cmd, sg, nseg, __i)			\
for_each_sg(scsi_sglist(cmd), sg, nseg, __i)
static inline int scsi_bidi_cmnd(struct scsi_cmnd *cmd)
static inline struct scsi_data_buffer *scsi_in(struct scsi_cmnd *cmd)
static inline struct scsi_data_buffer *scsi_out(struct scsi_cmnd *cmd)
static inline int scsi_sg_copy_from_buffer(struct scsi_cmnd *cmd,
void *buf, int buflen)
static inline int scsi_sg_copy_to_buffer(struct scsi_cmnd *cmd,
void *buf, int buflen)
enum scsi_prot_operations ;
static inline void scsi_set_prot_op(struct scsi_cmnd *scmd, unsigned char op)
static inline unsigned char scsi_get_prot_op(struct scsi_cmnd *scmd)
enum scsi_prot_target_type ;
static inline void scsi_set_prot_type(struct scsi_cmnd *scmd, unsigned char type)
static inline unsigned char scsi_get_prot_type(struct scsi_cmnd *scmd)
static inline sector_t scsi_get_lba(struct scsi_cmnd *scmd)
static inline unsigned scsi_prot_sg_count(struct scsi_cmnd *cmd)
static inline struct scatterlist *scsi_prot_sglist(struct scsi_cmnd *cmd)
static inline struct scsi_data_buffer *scsi_prot(struct scsi_cmnd *cmd)
#define scsi_for_each_prot_sg(cmd, sg, nseg, __i)		\
for_each_sg(scsi_prot_sglist(cmd), sg, nseg, __i)
static inline void set_msg_byte(struct scsi_cmnd *cmd, char status)
static inline void set_host_byte(struct scsi_cmnd *cmd, char status)
static inline void set_driver_byte(struct scsi_cmnd *cmd, char status)
