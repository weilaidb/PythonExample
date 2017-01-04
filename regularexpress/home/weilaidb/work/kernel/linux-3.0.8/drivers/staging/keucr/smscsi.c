int SM_SCSI_Test_Unit_Ready (struct us_data *us, struct scsi_cmnd *srb);
int SM_SCSI_Inquiry         (struct us_data *us, struct scsi_cmnd *srb);
int SM_SCSI_Mode_Sense      (struct us_data *us, struct scsi_cmnd *srb);
int SM_SCSI_Start_Stop      (struct us_data *us, struct scsi_cmnd *srb);
int SM_SCSI_Read_Capacity   (struct us_data *us, struct scsi_cmnd *srb);
int SM_SCSI_Read            (struct us_data *us, struct scsi_cmnd *srb);
int SM_SCSI_Write           (struct us_data *us, struct scsi_cmnd *srb);
extern PBYTE                SMHostAddr;
extern DWORD                ErrXDCode;
int SM_SCSIIrp(struct us_data *us, struct scsi_cmnd *srb)
int SM_SCSI_Test_Unit_Ready(struct us_data *us, struct scsi_cmnd *srb)
int SM_SCSI_Inquiry(struct us_data *us, struct scsi_cmnd *srb)
int SM_SCSI_Mode_Sense(struct us_data *us, struct scsi_cmnd *srb)
int SM_SCSI_Read_Capacity(struct us_data *us, struct scsi_cmnd *srb)
int SM_SCSI_Read(struct us_data *us, struct scsi_cmnd *srb)
int SM_SCSI_Write(struct us_data *us, struct scsi_cmnd *srb)
