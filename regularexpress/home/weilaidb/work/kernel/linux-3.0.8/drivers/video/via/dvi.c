static void tmds_register_write(int index, u8 data);
static int tmds_register_read(int index);
static int tmds_register_read_bytes(int index, u8 *buff, int buff_len);
static void __devinit dvi_get_panel_size_from_DDCv1(
struct tmds_chip_information *tmds_chip,
struct tmds_setting_information *tmds_setting);
static int viafb_dvi_query_EDID(void);
static inline bool check_tmds_chip(int device_id_subaddr, int device_id)
void __devinit viafb_init_dvi_size(struct tmds_chip_information *tmds_chip,
struct tmds_setting_information *tmds_setting)
bool __devinit viafb_tmds_trasmitter_identify(void)
static void tmds_register_write(int index, u8 data)
static int tmds_register_read(int index)
static int tmds_register_read_bytes(int index, u8 *buff, int buff_len)
void viafb_dvi_set_mode(struct VideoModeTable *mode, int mode_bpp,
int set_iga)
int viafb_dvi_sense(void)
static int viafb_dvi_query_EDID(void)
static void __devinit dvi_get_panel_size_from_DDCv1(
struct tmds_chip_information *tmds_chip,
struct tmds_setting_information *tmds_setting)
void viafb_dvi_disable(void)
static void dvi_patch_skew_dvp0(void)
static void dvi_patch_skew_dvp_low(void)
void viafb_dvi_enable(void)
