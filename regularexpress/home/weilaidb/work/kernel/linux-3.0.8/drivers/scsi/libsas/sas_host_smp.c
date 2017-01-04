static void sas_host_smp_discover(struct sas_ha_struct *sas_ha, u8 *resp_data,
u8 phy_id)
static void sas_report_phy_sata(struct sas_ha_struct *sas_ha, u8 *resp_data,
u8 phy_id)
static void sas_phy_control(struct sas_ha_struct *sas_ha, u8 phy_id,
u8 phy_op, enum sas_linkrate min,
enum sas_linkrate max, u8 *resp_data)
int sas_smp_host_handler(struct Scsi_Host *shost, struct request *req,
struct request *rsp)
