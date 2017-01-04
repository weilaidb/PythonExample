#define SCSI_TRANSPORT_SPI_H
struct scsi_transport_template;
struct scsi_target;
struct scsi_device;
struct Scsi_Host;
struct spi_transport_attrs ;
enum spi_signal_type ;
struct spi_host_attrs ;
#define spi_period(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->period)
#define spi_min_period(x) (((struct spi_transport_attrs *)&(x)->starget_data)->min_period)
#define spi_offset(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->offset)
#define spi_max_offset(x) (((struct spi_transport_attrs *)&(x)->starget_data)->max_offset)
#define spi_width(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->width)
#define spi_max_width(x) (((struct spi_transport_attrs *)&(x)->starget_data)->max_width)
#define spi_iu(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->iu)
#define spi_max_iu(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->max_iu)
#define spi_dt(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->dt)
#define spi_qas(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->qas)
#define spi_max_qas(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->max_qas)
#define spi_wr_flow(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->wr_flow)
#define spi_rd_strm(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->rd_strm)
#define spi_rti(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->rti)
#define spi_pcomp_en(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->pcomp_en)
#define spi_hold_mcs(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->hold_mcs)
#define spi_initial_dv(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->initial_dv)
#define spi_dv_pending(x) (((struct spi_transport_attrs *)&(x)->starget_data)->dv_pending)
#define spi_support_sync(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->support_sync)
#define spi_support_wide(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->support_wide)
#define spi_support_dt(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->support_dt)
#define spi_support_dt_only(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->support_dt_only)
#define spi_support_ius(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->support_ius)
#define spi_support_qas(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->support_qas)
#define spi_flags(x)	(((struct spi_transport_attrs *)&(x)->starget_data)->flags)
#define spi_signalling(h)	(((struct spi_host_attrs *)(h)->shost_data)->signalling)
struct spi_function_template ;
struct scsi_transport_template *spi_attach_transport(struct spi_function_template *);
void spi_release_transport(struct scsi_transport_template *);
void spi_schedule_dv_device(struct scsi_device *);
void spi_dv_device(struct scsi_device *);
void spi_display_xfer_agreement(struct scsi_target *);
int spi_print_msg(const unsigned char *);
int spi_populate_width_msg(unsigned char *msg, int width);
int spi_populate_sync_msg(unsigned char *msg, int period, int offset);
int spi_populate_ppr_msg(unsigned char *msg, int period, int offset, int width,
int options);
