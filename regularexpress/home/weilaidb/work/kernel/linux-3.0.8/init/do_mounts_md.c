static int __initdata raid_noautodetect;
static int __initdata raid_noautodetect=1;
static int __initdata raid_autopart;
static struct  md_setup_args[256] __initdata;
static int md_setup_ents __initdata;
static int __init md_setup(char *str)
static void __init md_setup_drive(void)
static int __init raid_setup(char *str)
__setup("raid=", raid_setup);
__setup("md=", md_setup);
static void __init autodetect_raid(void)
void __init md_run_setup(void)
