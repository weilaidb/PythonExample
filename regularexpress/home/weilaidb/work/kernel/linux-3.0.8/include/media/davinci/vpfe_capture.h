#define _VPFE_CAPTURE_H
#define VPFE_CAPTURE_NUM_DECODERS        5
#define VPFE_MAJOR_RELEASE              0
#define VPFE_MINOR_RELEASE              0
#define VPFE_BUILD                      1
#define VPFE_CAPTURE_VERSION_CODE       ((VPFE_MAJOR_RELEASE << 16) | \
(VPFE_MINOR_RELEASE << 8)  | \
VPFE_BUILD)
#define CAPTURE_DRV_NAME		"vpfe-capture"
struct vpfe_pixel_format ;
struct vpfe_std_info ;
struct vpfe_route ;
struct vpfe_subdev_info ;
struct vpfe_config ;
struct vpfe_device ;
struct vpfe_fh ;
struct vpfe_config_params ;
#define VPFE_CMD_S_CCDC_RAW_PARAMS _IOW('V', BASE_VIDIOC_PRIVATE + 1, \
void *)
