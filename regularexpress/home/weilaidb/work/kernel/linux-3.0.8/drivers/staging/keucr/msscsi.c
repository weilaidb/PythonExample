#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
int MS_SCSI_Test_Unit_Ready(struct us_data *us, struct scsi_cmnd *srb)
int MS_SCSI_Inquiry(struct us_data *us, struct scsi_cmnd *srb)
int MS_SCSI_Mode_Sense(struct us_data *us, struct scsi_cmnd *srb)
int MS_SCSI_Read_Capacity(struct us_data *us, struct scsi_cmnd *srb)
int MS_SCSI_Read(struct us_data *us, struct scsi_cmnd *srb)
int MS_SCSI_Write(struct us_data *us, struct scsi_cmnd *srb)
int MS_SCSIIrp(struct us_data *us, struct scsi_cmnd *srb)
