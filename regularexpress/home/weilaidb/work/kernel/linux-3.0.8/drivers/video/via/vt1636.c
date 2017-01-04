static const struct IODATA common_init_data[] = ;
static const struct IODATA dual_channel_enable_data = ;
static const struct IODATA single_channel_enable_data = ;
static const struct IODATA dithering_enable_data = ;
static const struct IODATA dithering_disable_data = ;
static const struct IODATA vdd_on_data = ;
static const struct IODATA vdd_off_data = ;
u8 viafb_gpio_i2c_read_lvds(struct lvds_setting_information
*plvds_setting_info, struct lvds_chip_information *plvds_chip_info,
u8 index)
void viafb_gpio_i2c_write_mask_lvds(struct lvds_setting_information
*plvds_setting_info, struct lvds_chip_information
*plvds_chip_info, struct IODATA io_data)
void viafb_init_lvds_vt1636(struct lvds_setting_information
*plvds_setting_info, struct lvds_chip_information *plvds_chip_info)
void viafb_enable_lvds_vt1636(struct lvds_setting_information
*plvds_setting_info,
struct lvds_chip_information *plvds_chip_info)
void viafb_disable_lvds_vt1636(struct lvds_setting_information
*plvds_setting_info,
struct lvds_chip_information *plvds_chip_info)
bool viafb_lvds_identify_vt1636(u8 i2c_adapter)
static int get_clk_range_index(u32 Clk)
static void set_dpa_vt1636(struct lvds_setting_information
*plvds_setting_info, struct lvds_chip_information *plvds_chip_info,
struct VT1636_DPA_SETTING *p_vt1636_dpa_setting)
void viafb_vt1636_patch_skew_on_vt3324(
struct lvds_setting_information *plvds_setting_info,
struct lvds_chip_information *plvds_chip_info)
void viafb_vt1636_patch_skew_on_vt3327(
struct lvds_setting_information *plvds_setting_info,
struct lvds_chip_information *plvds_chip_info)
void viafb_vt1636_patch_skew_on_vt3364(
struct lvds_setting_information *plvds_setting_info,
struct lvds_chip_information *plvds_chip_info)
