#define _VT1636_H_
bool viafb_lvds_identify_vt1636(u8 i2c_adapter);
void viafb_init_lvds_vt1636(struct lvds_setting_information
*plvds_setting_info, struct lvds_chip_information *plvds_chip_info);
void viafb_enable_lvds_vt1636(struct lvds_setting_information
*plvds_setting_info,
struct lvds_chip_information *plvds_chip_info);
void viafb_disable_lvds_vt1636(struct lvds_setting_information
*plvds_setting_info,
struct lvds_chip_information *plvds_chip_info);
void viafb_vt1636_patch_skew_on_vt3324(
struct lvds_setting_information *plvds_setting_info,
struct lvds_chip_information *plvds_chip_info);
void viafb_vt1636_patch_skew_on_vt3327(
struct lvds_setting_information *plvds_setting_info,
struct lvds_chip_information *plvds_chip_info);
void viafb_vt1636_patch_skew_on_vt3364(
struct lvds_setting_information *plvds_setting_info,
struct lvds_chip_information *plvds_chip_info);
