#define MEMORY_SETTINGS_H
#define HW_CFG_NAND_tBTA  (5 << 16)
#define HW_CFG_NAND_tWP   (4 << 11)
#define HW_CFG_NAND_tWR   (1 << 9)
#define HW_CFG_NAND_tAS   (0 << 7)
#define HW_CFG_NAND_tOE   (3 << 5)
#define HW_CFG_NAND_tRC   (7 << 0)
#define HW_CFG_NAND_TCR (HW_CFG_NAND_tBTA \
| HW_CFG_NAND_tWP  \
| HW_CFG_NAND_tWR  \
| HW_CFG_NAND_tAS  \
| HW_CFG_NAND_tOE  \
| HW_CFG_NAND_tRC)
#define HW_CFG_NOR_TPRC_TWLC (0 << 19)
#define HW_CFG_NOR_TBTA      (0 << 16)
#define HW_CFG_NOR_TWP       (6 << 11)
#define HW_CFG_NOR_TWR       (0 << 9)
#define HW_CFG_NOR_TAS       (0 << 7)
#define HW_CFG_NOR_TOE       (0 << 5)
#define HW_CFG_NOR_TRC_TLC   (0x10 << 0)
#define HW_CFG_FLASH0_TCR (HW_CFG_NOR_TPRC_TWLC \
| HW_CFG_NOR_TBTA      \
| HW_CFG_NOR_TWP       \
| HW_CFG_NOR_TWR       \
| HW_CFG_NOR_TAS       \
| HW_CFG_NOR_TOE       \
| HW_CFG_NOR_TRC_TLC)
#define HW_CFG_FLASH1_TCR    HW_CFG_FLASH0_TCR
#define HW_CFG_FLASH2_TCR    HW_CFG_FLASH0_TCR
#define HW_CFG_SDRAM_SIZE_BYTES         0x10000000
