struct sm_oob  __attribute__((packed));
#define SM_SECTOR_SIZE		512
#define SM_OOB_SIZE		16
#define SM_MAX_ZONE_SIZE 	1024
#define SM_SMALL_PAGE 		256
#define SM_SMALL_OOB_SIZE	8
extern int sm_register_device(struct mtd_info *mtd, int smartmedia);
static inline int sm_sector_valid(struct sm_oob *oob)
static inline int sm_block_valid(struct sm_oob *oob)
static inline int sm_block_erased(struct sm_oob *oob)
