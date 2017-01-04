#define S3C_SZ_HSMMC	(0x1000)
static struct resource s3c_hsmmc2_resource[] = ;
static u64 s3c_device_hsmmc2_dmamask = 0xffffffffUL;
struct s3c_sdhci_platdata s3c_hsmmc2_def_platdata = ;
struct platform_device s3c_device_hsmmc2 = ;
void s3c_sdhci2_set_platdata(struct s3c_sdhci_platdata *pd)
