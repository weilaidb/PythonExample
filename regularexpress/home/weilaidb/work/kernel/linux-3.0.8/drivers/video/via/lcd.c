#define viafb_compact_res(x, y) (((x)<<16)|(y))
static const int PowerSequenceOn[3][3] = ;
static const int PowerSequenceOff[3][3] = ;
static struct _lcd_scaling_factor lcd_scaling_factor = ;
static struct _lcd_scaling_factor lcd_scaling_factor_CLE = ;
static bool lvds_identify_integratedlvds(void);
static void __devinit fp_id_to_vindex(int panel_id);
static int lvds_register_read(int index);
static void load_lcd_scaling(int set_hres, int set_vres, int panel_hres,
int panel_vres);
static void via_pitch_alignment_patch_lcd(
struct lvds_setting_information *plvds_setting_info,
struct lvds_chip_information
*plvds_chip_info);
static void lcd_patch_skew_dvp0(struct lvds_setting_information
*plvds_setting_info,
struct lvds_chip_information *plvds_chip_info);
static void lcd_patch_skew_dvp1(struct lvds_setting_information
*plvds_setting_info,
struct lvds_chip_information *plvds_chip_info);
static void lcd_patch_skew(struct lvds_setting_information
*plvds_setting_info, struct lvds_chip_information *plvds_chip_info);
static void integrated_lvds_disable(struct lvds_setting_information
*plvds_setting_info,
struct lvds_chip_information *plvds_chip_info);
static void integrated_lvds_enable(struct lvds_setting_information
*plvds_setting_info,
struct lvds_chip_information *plvds_chip_info);
static void lcd_powersequence_off(void);
static void lcd_powersequence_on(void);
static void fill_lcd_format(void);
static void check_diport_of_integrated_lvds(
struct lvds_chip_information *plvds_chip_info,
struct lvds_setting_information
*plvds_setting_info);
static struct display_timing lcd_centering_timging(struct display_timing
mode_crt_reg,
struct display_timing panel_crt_reg);
static inline bool check_lvds_chip(int device_id_subaddr, int device_id)
void __devinit viafb_init_lcd_size(void)
static bool lvds_identify_integratedlvds(void)
bool __devinit viafb_lvds_trasmitter_identify(void)
static void __devinit fp_id_to_vindex(int panel_id)
static int lvds_register_read(int index)
static void load_lcd_scaling(int set_hres, int set_vres, int panel_hres,
int panel_vres)
static void via_pitch_alignment_patch_lcd(
struct lvds_setting_information *plvds_setting_info,
struct lvds_chip_information
*plvds_chip_info)
static void lcd_patch_skew_dvp0(struct lvds_setting_information
*plvds_setting_info,
struct lvds_chip_information *plvds_chip_info)
static void lcd_patch_skew_dvp1(struct lvds_setting_information
*plvds_setting_info,
struct lvds_chip_information *plvds_chip_info)
static void lcd_patch_skew(struct lvds_setting_information
*plvds_setting_info, struct lvds_chip_information *plvds_chip_info)
void viafb_lcd_set_mode(struct crt_mode_table *mode_crt_table,
struct lvds_setting_information *plvds_setting_info,
struct lvds_chip_information *plvds_chip_info)
static void integrated_lvds_disable(struct lvds_setting_information
*plvds_setting_info,
struct lvds_chip_information *plvds_chip_info)
static void integrated_lvds_enable(struct lvds_setting_information
*plvds_setting_info,
struct lvds_chip_information *plvds_chip_info)
void viafb_lcd_disable(void)
static void set_lcd_output_path(int set_iga, int output_interface)
void viafb_lcd_enable(void)
static void lcd_powersequence_off(void)
static void lcd_powersequence_on(void)
static void fill_lcd_format(void)
static void check_diport_of_integrated_lvds(
struct lvds_chip_information *plvds_chip_info,
struct lvds_setting_information
*plvds_setting_info)
void __devinit viafb_init_lvds_output_interface(struct lvds_chip_information
*plvds_chip_info,
struct lvds_setting_information
*plvds_setting_info)
static struct display_timing lcd_centering_timging(struct display_timing
mode_crt_reg,
struct display_timing panel_crt_reg)
bool viafb_lcd_get_mobile_state(bool *mobile)
