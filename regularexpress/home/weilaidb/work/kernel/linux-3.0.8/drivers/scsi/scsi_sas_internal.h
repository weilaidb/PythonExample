#define _SCSI_SAS_INTERNAL_H
#define SAS_HOST_ATTRS		0
#define SAS_PHY_ATTRS		17
#define SAS_PORT_ATTRS		1
#define SAS_RPORT_ATTRS		7
#define SAS_END_DEV_ATTRS	5
#define SAS_EXPANDER_ATTRS	7
struct sas_internal ;
#define to_sas_internal(tmpl)	container_of(tmpl, struct sas_internal, t)
