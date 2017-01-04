#define SCSI_TRANSPORT_SRP_H
#define SRP_RPORT_ROLE_INITIATOR 0
#define SRP_RPORT_ROLE_TARGET 1
struct srp_rport_identifiers ;
struct srp_rport ;
struct srp_function_template ;
extern struct scsi_transport_template *
srp_attach_transport(struct srp_function_template *);
extern void srp_release_transport(struct scsi_transport_template *);
extern struct srp_rport *srp_rport_add(struct Scsi_Host *,
struct srp_rport_identifiers *);
extern void srp_rport_del(struct srp_rport *);
extern void srp_remove_host(struct Scsi_Host *);
