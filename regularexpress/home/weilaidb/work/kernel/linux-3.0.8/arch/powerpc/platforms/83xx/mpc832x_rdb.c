#undef DEBUG
#define DBG(fmt...) udbg_printf(fmt)
#define DBG(fmt...)
static int __init of_fsl_spi_probe(char *type, char *compatible, u32 sysclk,
struct spi_board_info *board_infos,
unsigned int num_board_infos,
void (*cs_control)(struct spi_device *dev,
bool on))
static int __init fsl_spi_init(struct spi_board_info *board_infos,
unsigned int num_board_infos,
void (*cs_control)(struct spi_device *spi,
bool on))
static void mpc83xx_spi_cs_control(struct spi_device *spi, bool on)
static struct mmc_spi_platform_data mpc832x_mmc_pdata = ;
static struct spi_board_info mpc832x_spi_boardinfo = ;
static int __init mpc832x_spi_init(void)
machine_device_initcall(mpc832x_rdb, mpc832x_spi_init);
static void __init mpc832x_rdb_setup_arch(void)
static struct of_device_id mpc832x_ids[] = ;
static int __init mpc832x_declare_of_platform_devices(void)
machine_device_initcall(mpc832x_rdb, mpc832x_declare_of_platform_devices);
static void __init mpc832x_rdb_init_IRQ(void)
static int __init mpc832x_rdb_probe(void)
define_machine(mpc832x_rdb) ;
