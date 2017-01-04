#define _SCSI_SCSI_TCQ_H
#define MSG_SIMPLE_TAG	0x20
#define MSG_HEAD_TAG	0x21
#define MSG_ORDERED_TAG	0x22
#define MSG_ACA_TAG	0x24
#define SCSI_NO_TAG	(-1)
static inline int scsi_get_tag_type(struct scsi_device *sdev)
static inline void scsi_set_tag_type(struct scsi_device *sdev, int tag)
static inline void scsi_activate_tcq(struct scsi_device *sdev, int depth)
static inline void scsi_deactivate_tcq(struct scsi_device *sdev, int depth)
static inline int scsi_populate_tag_msg(struct scsi_cmnd *cmd, char *msg)
static inline struct scsi_cmnd *scsi_find_tag(struct scsi_device *sdev, int tag)
static inline int scsi_init_shared_tag_map(struct Scsi_Host *shost, int depth)
static inline struct scsi_cmnd *scsi_host_find_tag(struct Scsi_Host *shost,
int tag)
