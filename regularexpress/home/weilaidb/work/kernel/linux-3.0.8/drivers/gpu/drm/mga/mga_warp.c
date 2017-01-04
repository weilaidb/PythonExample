#define FIRMWARE_G200 "matrox/g200_warp.fw"
#define FIRMWARE_G400 "matrox/g400_warp.fw"
MODULE_FIRMWARE(FIRMWARE_G200);
MODULE_FIRMWARE(FIRMWARE_G400);
#define MGA_WARP_CODE_ALIGN		256
#define WARP_UCODE_SIZE(size)		ALIGN(size, MGA_WARP_CODE_ALIGN)
int mga_warp_install_microcode(drm_mga_private_t *dev_priv)
#define WMISC_EXPECTED		(MGA_WUCODECACHE_ENABLE | MGA_WMASTER_ENABLE)
int mga_warp_init(drm_mga_private_t *dev_priv)
