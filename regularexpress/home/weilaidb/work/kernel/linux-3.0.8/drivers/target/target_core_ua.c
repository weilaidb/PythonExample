int core_scsi3_ua_check(
struct se_cmd *cmd,
unsigned char *cdb)
int core_scsi3_ua_allocate(
struct se_node_acl *nacl,
u32 unpacked_lun,
u8 asc,
u8 ascq)
void core_scsi3_ua_release_all(
struct se_dev_entry *deve)
void core_scsi3_ua_for_check_condition(
struct se_cmd *cmd,
u8 *asc,
u8 *ascq)
int core_scsi3_ua_clear_for_request_sense(
struct se_cmd *cmd,
u8 *asc,
u8 *ascq)
