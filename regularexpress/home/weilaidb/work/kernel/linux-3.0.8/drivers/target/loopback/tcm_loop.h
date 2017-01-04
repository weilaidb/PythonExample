#define TCM_LOOP_VERSION		"v2.1-rc1"
#define TL_WWN_ADDR_LEN			256
#define TL_TPGS_PER_HBA			32
#define TL_SCSI_CAN_QUEUE		1024
#define TL_SCSI_CMD_PER_LUN		1024
#define TL_SCSI_MAX_SECTORS		1024
#define TL_SCSI_SG_TABLESIZE		256
#define TL_SCSI_MAX_CMD_LEN		32
# define TL_CDB_DEBUG(x...)		printk(KERN_INFO x)
# define TL_CDB_DEBUG(x...)
struct tcm_loop_cmd ;
struct tcm_loop_tmr ;
struct tcm_loop_nexus ;
struct tcm_loop_nacl ;
struct tcm_loop_tpg ;
struct tcm_loop_hba ;
