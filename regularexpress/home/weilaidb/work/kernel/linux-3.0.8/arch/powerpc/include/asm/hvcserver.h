#define _PPC64_HVCSERVER_H
#define HVCS_CLC_LENGTH	79
struct hvcs_partner_info ;
extern int hvcs_free_partner_info(struct list_head *head);
extern int hvcs_get_partner_info(uint32_t unit_address,
struct list_head *head, unsigned long *pi_buff);
extern int hvcs_register_connection(uint32_t unit_address,
uint32_t p_partition_ID, uint32_t p_unit_address);
extern int hvcs_free_connection(uint32_t unit_address);
