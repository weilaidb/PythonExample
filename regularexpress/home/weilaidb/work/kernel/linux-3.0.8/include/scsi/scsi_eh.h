#define _SCSI_SCSI_EH_H
struct scsi_device;
struct Scsi_Host;
struct scsi_sense_hdr ;
static inline int scsi_sense_valid(struct scsi_sense_hdr *sshdr)
extern void scsi_eh_finish_cmd(struct scsi_cmnd *scmd,
struct list_head *done_q);
extern void scsi_eh_flush_done_q(struct list_head *done_q);
extern void scsi_report_bus_reset(struct Scsi_Host *, int);
extern void scsi_report_device_reset(struct Scsi_Host *, int, int);
extern int scsi_block_when_processing_errors(struct scsi_device *);
extern int scsi_normalize_sense(const u8 *sense_buffer, int sb_len,
struct scsi_sense_hdr *sshdr);
extern int scsi_command_normalize_sense(struct scsi_cmnd *cmd,
struct scsi_sense_hdr *sshdr);
static inline int scsi_sense_is_deferred(struct scsi_sense_hdr *sshdr)
extern const u8 * scsi_sense_desc_find(const u8 * sense_buffer, int sb_len,
int desc_type);
extern int scsi_get_sense_info_fld(const u8 * sense_buffer, int sb_len,
u64 * info_out);
extern void scsi_build_sense_buffer(int desc, u8 *buf, u8 key, u8 asc, u8 ascq);
#define SCSI_TRY_RESET_DEVICE	1
#define SCSI_TRY_RESET_BUS	2
#define SCSI_TRY_RESET_HOST	3
#define SCSI_TRY_RESET_TARGET	4
extern int scsi_reset_provider(struct scsi_device *, int);
struct scsi_eh_save ;
extern void scsi_eh_prep_cmnd(struct scsi_cmnd *scmd,
struct scsi_eh_save *ses, unsigned char *cmnd,
int cmnd_size, unsigned sense_bytes);
extern void scsi_eh_restore_cmnd(struct scsi_cmnd* scmd,
struct scsi_eh_save *ses);
