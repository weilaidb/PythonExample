#define SCSI_TRANSPORT_H
struct scsi_transport_template ;
#define transport_class_to_shost(tc) \
dev_to_shost((tc)->parent)
static inline void
scsi_transport_reserve_target(struct scsi_transport_template * t, int space)
static inline void
scsi_transport_reserve_device(struct scsi_transport_template * t, int space)
static inline void *
scsi_transport_target_data(struct scsi_target *starget)
static inline void *
scsi_transport_device_data(struct scsi_device *sdev)
