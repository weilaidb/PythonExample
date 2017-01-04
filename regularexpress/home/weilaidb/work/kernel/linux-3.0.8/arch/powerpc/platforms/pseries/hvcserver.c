#define HVCS_ARCH_VERSION "1.0.0"
MODULE_AUTHOR("Ryan S. Arnold <rsa@us.ibm.com>");
MODULE_DESCRIPTION("IBM hvcs ppc64 API");
MODULE_LICENSE("GPL");
MODULE_VERSION(HVCS_ARCH_VERSION);
static int hvcs_convert(long to_convert)
int hvcs_free_partner_info(struct list_head *head)
EXPORT_SYMBOL(hvcs_free_partner_info);
static int hvcs_next_partner(uint32_t unit_address,
unsigned long last_p_partition_ID,
unsigned long last_p_unit_address, unsigned long *pi_buff)
int hvcs_get_partner_info(uint32_t unit_address, struct list_head *head,
unsigned long *pi_buff)
EXPORT_SYMBOL(hvcs_get_partner_info);
int hvcs_register_connection( uint32_t unit_address,
uint32_t p_partition_ID, uint32_t p_unit_address)
EXPORT_SYMBOL(hvcs_register_connection);
int hvcs_free_connection(uint32_t unit_address)
EXPORT_SYMBOL(hvcs_free_connection);
