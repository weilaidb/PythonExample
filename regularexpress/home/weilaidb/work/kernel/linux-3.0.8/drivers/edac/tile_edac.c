#define DRV_NAME	"tile-edac"
#define TILE_EDAC_NR_CSROWS	1
#define TILE_EDAC_NR_CHANS	1
#define TILE_EDAC_ERROR_GRAIN	8
struct platform_device *mshim_pdev[TILE_MAX_MSHIMS];
struct tile_edac_priv ;
static void tile_edac_check(struct mem_ctl_info *mci)
static int __devinit tile_edac_init_csrows(struct mem_ctl_info *mci)
static int __devinit tile_edac_mc_probe(struct platform_device *pdev)
static int __devexit tile_edac_mc_remove(struct platform_device *pdev)
static struct platform_driver tile_edac_mc_driver = ;
static int __init tile_edac_init(void)
static void __exit tile_edac_exit(void)
module_init(tile_edac_init);
module_exit(tile_edac_exit);
