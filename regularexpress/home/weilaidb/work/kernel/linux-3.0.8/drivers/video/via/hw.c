static struct pll_limit cle266_pll_limits[] = ;
static struct pll_limit k800_pll_limits[] = ;
static struct pll_limit cx700_pll_limits[] = ;
static struct pll_limit vx855_pll_limits[] = ;
static struct io_reg scaling_parameters[] = ;
static struct io_reg common_vga[] = ;
static struct fifo_depth_select display_fifo_depth_reg = ;
static struct fifo_threshold_select fifo_threshold_select_reg = ;
static struct fifo_high_threshold_select fifo_high_threshold_select_reg = ;
static struct display_queue_expire_num display_queue_expire_num_reg = ;
static struct fetch_count fetch_count_reg = ;
static struct iga1_crtc_timing iga1_crtc_reg = ;
static struct iga2_crtc_timing iga2_crtc_reg = ;
static struct rgbLUT palLUT_table[] = ;
static struct via_device_mapping device_mapping[] = ;
static struct via_clock clock;
static void load_fix_bit_crtc_reg(void);
static void __devinit init_gfx_chip_info(int chip_type);
static void __devinit init_tmds_chip_info(void);
static void __devinit init_lvds_chip_info(void);
static void device_screen_off(void);
static void device_screen_on(void);
static void set_display_channel(void);
static void device_off(void);
static void device_on(void);
static void enable_second_display_channel(void);
static void disable_second_display_channel(void);
void viafb_lock_crt(void)
void viafb_unlock_crt(void)
static void write_dac_reg(u8 index, u8 r, u8 g, u8 b)
static u32 get_dvi_devices(int output_interface)
static u32 get_lcd_devices(int output_interface)
void viafb_set_iga_path(void)
static void set_color_register(u8 index, u8 red, u8 green, u8 blue)
void viafb_set_primary_color_register(u8 index, u8 red, u8 green, u8 blue)
void viafb_set_secondary_color_register(u8 index, u8 red, u8 green, u8 blue)
static void set_source_common(u8 index, u8 offset, u8 iga)
static void set_crt_source(u8 iga)
static inline void set_ldvp0_source(u8 iga)
static inline void set_ldvp1_source(u8 iga)
static inline void set_dvp0_source(u8 iga)
static inline void set_dvp1_source(u8 iga)
static inline void set_lvds1_source(u8 iga)
static inline void set_lvds2_source(u8 iga)
void via_set_source(u32 devices, u8 iga)
static void set_crt_state(u8 state)
static void set_dvp0_state(u8 state)
static void set_dvp1_state(u8 state)
static void set_lvds1_state(u8 state)
static void set_lvds2_state(u8 state)
void via_set_state(u32 devices, u8 state)
void via_set_sync_polarity(u32 devices, u8 polarity)
u32 via_parse_odev(char *input, char **end)
void via_odev_to_seq(struct seq_file *m, u32 odev)
static void load_fix_bit_crtc_reg(void)
void viafb_load_reg(int timing_value, int viafb_load_reg_num,
struct io_register *reg,
int io_type)
void viafb_write_regx(struct io_reg RegTable[], int ItemNum)
void viafb_load_fetch_count_reg(int h_addr, int bpp_byte, int set_iga)
void viafb_load_FIFO_reg(int set_iga, int hor_active, int ver_active)
static struct via_pll_config get_pll_config(struct pll_limit *limits, int size,
int clk)
static struct via_pll_config get_best_pll_config(int clk)
void viafb_set_vclock(u32 clk, int set_iga)
void viafb_load_crtc_timing(struct display_timing device_timing,
int set_iga)
void viafb_fill_crtc_timing(struct crt_mode_table *crt_table,
struct VideoModeTable *video_mode, int bpp_byte, int set_iga)
void __devinit viafb_init_chip_info(int chip_type)
void viafb_update_device_setting(int hres, int vres, int bpp, int flag)
static void __devinit init_gfx_chip_info(int chip_type)
static void __devinit init_tmds_chip_info(void)
static void __devinit init_lvds_chip_info(void)
void __devinit viafb_init_dac(int set_iga)
static void device_screen_off(void)
static void device_screen_on(void)
static void set_display_channel(void)
static u8 get_sync(struct fb_info *info)
int viafb_setmode(struct VideoModeTable *vmode_tbl, int video_bpp,
struct VideoModeTable *vmode_tbl1, int video_bpp1)
int viafb_get_pixclock(int hres, int vres, int vmode_refresh)
int viafb_get_refresh(int hres, int vres, u32 long_refresh)
static void device_off(void)
static void device_on(void)
static void enable_second_display_channel(void)
static void disable_second_display_channel(void)
void viafb_set_dpa_gfx(int output_interface, struct GFX_DPA_SETTING\
*p_gfx_dpa_setting)
void viafb_fill_var_timing_info(struct fb_var_screeninfo *var, int refresh,
struct VideoModeTable *vmode_tbl)
