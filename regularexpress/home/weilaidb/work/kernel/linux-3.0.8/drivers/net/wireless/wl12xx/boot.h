#define __BOOT_H__
int wl1271_boot(struct wl1271 *wl);
int wl1271_load_firmware(struct wl1271 *wl);
#define WL1271_NO_SUBBANDS 8
#define WL1271_NO_POWER_LEVELS 4
#define WL1271_FW_VERSION_MAX_LEN 20
struct wl1271_static_data ;
#define INIT_LOOP 20000
#define INIT_LOOP_DELAY 50
#define WU_COUNTER_PAUSE_VAL 0x3FF
#define WELP_ARM_COMMAND_VAL 0x4
#define OCP_REG_POLARITY     0x0064
#define OCP_REG_CLK_TYPE     0x0448
#define OCP_REG_CLK_POLARITY 0x0cb2
#define OCP_REG_CLK_PULL     0x0cb4
#define REG_FUSE_DATA_2_1    0x050a
#define PG_VER_MASK          0x3c
#define PG_VER_OFFSET        2
#define PG_MAJOR_VER_MASK    0x3
#define PG_MAJOR_VER_OFFSET  0x0
#define PG_MINOR_VER_MASK    0xc
#define PG_MINOR_VER_OFFSET  0x2
#define CMD_MBOX_ADDRESS     0x407B4
#define POLARITY_LOW         BIT(1)
#define NO_PULL              (BIT(14) | BIT(15))
#define FREF_CLK_TYPE_BITS     0xfffffe7f
#define CLK_REQ_PRCM           0x100
#define FREF_CLK_POLARITY_BITS 0xfffff8ff
#define CLK_REQ_OUTN_SEL       0x700
#define SYS_CLK_CFG_REG              0x2200
#define MCS_PLL_CLK_SEL_FREF         BIT(0)
#define WL_CLK_REQ_TYPE_FREF         BIT(3)
#define WL_CLK_REQ_TYPE_PG2          (BIT(3) | BIT(2))
#define PRCM_CM_EN_MUX_WLAN_FREF     BIT(4)
#define TCXO_ILOAD_INT_REG           0x2264
#define TCXO_CLK_DETECT_REG          0x2266
#define TCXO_DET_FAILED              BIT(4)
#define FREF_ILOAD_INT_REG           0x2084
#define FREF_CLK_DETECT_REG          0x2086
#define FREF_CLK_DETECT_FAIL         BIT(4)
#define WL_SPARE_REG                 0x2320
#define WL_SPARE_VAL                 BIT(2)
#define WL_SPARE_MASK_8526           (BIT(6) | BIT(5) | BIT(3))
#define PLL_LOCK_COUNTERS_REG        0xD8C
#define PLL_LOCK_COUNTERS_COEX       0x0F
#define PLL_LOCK_COUNTERS_MCS        0xF0
#define MCS_PLL_OVERRIDE_REG         0xD90
#define MCS_PLL_CONFIG_REG           0xD92
#define MCS_SEL_IN_FREQ_MASK         0x0070
#define MCS_SEL_IN_FREQ_SHIFT        4
#define MCS_PLL_CONFIG_REG_VAL       0x73
#define MCS_PLL_ENABLE_HP            (BIT(0) | BIT(1))
#define MCS_PLL_M_REG                0xD94
#define MCS_PLL_N_REG                0xD96
#define MCS_PLL_M_REG_VAL            0xC8
#define MCS_PLL_N_REG_VAL            0x07
#define SDIO_IO_DS                   0xd14
enum ;
