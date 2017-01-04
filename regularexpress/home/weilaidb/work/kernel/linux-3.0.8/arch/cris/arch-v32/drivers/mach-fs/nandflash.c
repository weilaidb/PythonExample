#define CE_BIT 4
#define CLE_BIT 5
#define ALE_BIT 6
#define BY_BIT 7
struct mtd_info_wrapper ;
#define PIN_BITMASK ((1 << CE_BIT) | (1 << CLE_BIT) | (1 << ALE_BIT))
#define CTRL_BITMASK (NAND_NCE | NAND_CLE | NAND_ALE)
static struct mtd_info *crisv32_mtd;
static void crisv32_hwcontrol(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static int crisv32_device_ready(struct mtd_info *mtd)
struct mtd_info *__init crisv32_nand_flash_probe(void)
