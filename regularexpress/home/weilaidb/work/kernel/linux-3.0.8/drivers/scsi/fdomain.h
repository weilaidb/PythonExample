extern struct scsi_host_template fdomain_driver_template;
extern int fdomain_setup(char *str);
extern struct Scsi_Host *__fdomain_16x0_detect(struct  scsi_host_template *tpnt );
extern int fdomain_16x0_bus_reset(struct scsi_cmnd *SCpnt);
