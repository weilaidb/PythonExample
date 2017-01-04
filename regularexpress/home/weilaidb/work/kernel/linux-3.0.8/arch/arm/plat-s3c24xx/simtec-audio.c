static void simtec_audio_startup_lrroute(void)
static struct s3c24xx_audio_simtec_pdata simtec_audio_platdata;
static char our_name[32];
static struct platform_device simtec_audio_dev = ;
int __init simtec_audio_add(const char *name, bool has_lr_routing,
struct s3c24xx_audio_simtec_pdata *spd)
