#define AR3KCONFIG_H_
#define AR3K_CONFIG_FLAG_FORCE_MINBOOT_EXIT         (1 << 0)
#define AR3K_CONFIG_FLAG_SET_AR3K_BAUD              (1 << 1)
#define AR3K_CONFIG_FLAG_AR3K_BAUD_CHANGE_DELAY     (1 << 2)
#define AR3K_CONFIG_FLAG_SET_AR6K_SCALE_STEP        (1 << 3)
struct ar3k_config_info ;
int AR3KConfigure(struct ar3k_config_info *pConfigInfo);
int AR3KConfigureExit(void *config);
