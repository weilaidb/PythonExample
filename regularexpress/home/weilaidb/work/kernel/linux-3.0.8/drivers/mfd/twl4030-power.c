static u8 twl4030_start_script_address = 0x2b;
#define PWR_P1_SW_EVENTS	0x10
#define PWR_DEVOFF	(1<<0)
#define PHY_TO_OFF_PM_MASTER(p)		(p - 0x36)
#define PHY_TO_OFF_PM_RECEIVER(p)	(p - 0x5b)
#define R_HFCLKOUT_DEV_GRP 	PHY_TO_OFF_PM_RECEIVER(0xe6)
#define R_P1_SW_EVENTS		PHY_TO_OFF_PM_MASTER(0x46)
#define R_P2_SW_EVENTS		PHY_TO_OFF_PM_MASTER(0x47)
#define R_P3_SW_EVENTS		PHY_TO_OFF_PM_MASTER(0x48)
#define R_CFG_P1_TRANSITION	PHY_TO_OFF_PM_MASTER(0x36)
#define R_CFG_P2_TRANSITION	PHY_TO_OFF_PM_MASTER(0x37)
#define R_CFG_P3_TRANSITION	PHY_TO_OFF_PM_MASTER(0x38)
#define LVL_WAKEUP	0x08
#define ENABLE_WARMRESET (1<<4)
#define END_OF_SCRIPT		0x3f
#define R_SEQ_ADD_A2S		PHY_TO_OFF_PM_MASTER(0x55)
#define R_SEQ_ADD_S2A12		PHY_TO_OFF_PM_MASTER(0x56)
#define	R_SEQ_ADD_S2A3		PHY_TO_OFF_PM_MASTER(0x57)
#define	R_SEQ_ADD_WARM		PHY_TO_OFF_PM_MASTER(0x58)
#define R_MEMORY_ADDRESS	PHY_TO_OFF_PM_MASTER(0x59)
#define R_MEMORY_DATA		PHY_TO_OFF_PM_MASTER(0x5a)
#define DEV_GRP_OFFSET		0
#define TYPE_OFFSET		1
#define REMAP_OFFSET		2
#define DEDICATED_OFFSET	3
#define DEV_GRP_SHIFT		5
#define DEV_GRP_MASK		(7 << DEV_GRP_SHIFT)
#define TYPE_SHIFT		0
#define TYPE_MASK		(7 << TYPE_SHIFT)
#define TYPE2_SHIFT		3
#define TYPE2_MASK		(3 << TYPE2_SHIFT)
#define SLEEP_STATE_SHIFT	0
#define SLEEP_STATE_MASK	(0xf << SLEEP_STATE_SHIFT)
#define OFF_STATE_SHIFT		4
#define OFF_STATE_MASK		(0xf << OFF_STATE_SHIFT)
static u8 res_config_addrs[] = ;
static int __init twl4030_write_script_byte(u8 address, u8 byte)
static int __init twl4030_write_script_ins(u8 address, u16 pmb_message,
u8 delay, u8 next)
static int __init twl4030_write_script(u8 address, struct twl4030_ins *script,
int len)
static int __init twl4030_config_wakeup3_sequence(u8 address)
static int __init twl4030_config_wakeup12_sequence(u8 address)
static int __init twl4030_config_sleep_sequence(u8 address)
static int __init twl4030_config_warmreset_sequence(u8 address)
static int __init twl4030_configure_resource(struct twl4030_resconfig *rconfig)
static int __init load_twl4030_script(struct twl4030_script *tscript,
u8 address)
int twl4030_remove_script(u8 flags)
void __init twl4030_power_init(struct twl4030_power_data *twl4030_scripts)
