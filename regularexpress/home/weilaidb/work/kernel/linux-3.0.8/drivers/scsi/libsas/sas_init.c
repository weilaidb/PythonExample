struct kmem_cache *sas_task_cache;
void sas_hash_addr(u8 *hashed, const u8 *sas_addr)
void sas_hae_reset(struct work_struct *work)
int sas_register_ha(struct sas_ha_struct *sas_ha)
int sas_unregister_ha(struct sas_ha_struct *sas_ha)
static int sas_get_linkerrors(struct sas_phy *phy)
int sas_phy_enable(struct sas_phy *phy, int enable)
int sas_phy_reset(struct sas_phy *phy, int hard_reset)
int sas_set_phy_speed(struct sas_phy *phy,
struct sas_phy_linkrates *rates)
static struct sas_function_template sft = ;
struct scsi_transport_template *
sas_domain_attach_transport(struct sas_domain_function_template *dft)
EXPORT_SYMBOL_GPL(sas_domain_attach_transport);
void sas_domain_release_transport(struct scsi_transport_template *stt)
EXPORT_SYMBOL_GPL(sas_domain_release_transport);
static int __init sas_class_init(void)
static void __exit sas_class_exit(void)
MODULE_AUTHOR("Luben Tuikov <luben_tuikov@adaptec.com>");
MODULE_DESCRIPTION("SAS Transport Layer");
MODULE_LICENSE("GPL v2");
module_init(sas_class_init);
module_exit(sas_class_exit);
EXPORT_SYMBOL_GPL(sas_register_ha);
EXPORT_SYMBOL_GPL(sas_unregister_ha);
