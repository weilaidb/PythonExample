#define MANUAL_ALE_CLE_CONTROL 1
#define regf_ALE	a0
#define regf_CLE	a1
#define regf_NCE	ce0_n
#define CLE_BIT 10
#define ALE_BIT 11
#define CE_BIT 12
struct mtd_info_wrapper ;
#define PIN_BITMASK ((1 << CE_BIT) | (1 << CLE_BIT) | (1 << ALE_BIT))
static struct mtd_info *crisv32_mtd;
static void crisv32_hwcontrol(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static int crisv32_device_ready(struct mtd_info *mtd)
struct mtd_info *__init crisv32_nand_flash_probe(void)
