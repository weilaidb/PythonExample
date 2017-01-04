#define SERVICE_ACTION16(cdb) (cdb[1] & 0x1f)
#define SERVICE_ACTION32(cdb) ((cdb[8] << 8) | cdb[9])
static const char *
scsi_trace_misc(struct trace_seq *, unsigned char *, int);
static const char *
scsi_trace_rw6(struct trace_seq *p, unsigned char *cdb, int len)
static const char *
scsi_trace_rw10(struct trace_seq *p, unsigned char *cdb, int len)
static const char *
scsi_trace_rw12(struct trace_seq *p, unsigned char *cdb, int len)
static const char *
scsi_trace_rw16(struct trace_seq *p, unsigned char *cdb, int len)
static const char *
scsi_trace_rw32(struct trace_seq *p, unsigned char *cdb, int len)
static const char *
scsi_trace_unmap(struct trace_seq *p, unsigned char *cdb, int len)
static const char *
scsi_trace_service_action_in(struct trace_seq *p, unsigned char *cdb, int len)
static const char *
scsi_trace_varlen(struct trace_seq *p, unsigned char *cdb, int len)
static const char *
scsi_trace_misc(struct trace_seq *p, unsigned char *cdb, int len)
const char *
scsi_trace_parse_cdb(struct trace_seq *p, unsigned char *cdb, int len)
