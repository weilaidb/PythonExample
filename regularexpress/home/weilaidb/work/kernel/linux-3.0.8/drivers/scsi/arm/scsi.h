#define BELT_AND_BRACES
static inline int copy_SCp_to_sg(struct scatterlist *sg, struct scsi_pointer *SCp, int max)
static inline int next_SCp(struct scsi_pointer *SCp)
static inline unsigned char get_next_SCp_byte(struct scsi_pointer *SCp)
static inline void put_next_SCp_byte(struct scsi_pointer *SCp, unsigned char c)
static inline void init_SCp(struct scsi_cmnd *SCpnt)
