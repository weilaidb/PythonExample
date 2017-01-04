#define __OMAP_OMAPDSS_H
#define DISPC_IRQ_FRAMEDONE		(1 << 0)
#define DISPC_IRQ_VSYNC			(1 << 1)
#define DISPC_IRQ_EVSYNC_EVEN		(1 << 2)
#define DISPC_IRQ_EVSYNC_ODD		(1 << 3)
#define DISPC_IRQ_ACBIAS_COUNT_STAT	(1 << 4)
#define DISPC_IRQ_PROG_LINE_NUM		(1 << 5)
#define DISPC_IRQ_GFX_FIFO_UNDERFLOW	(1 << 6)
#define DISPC_IRQ_GFX_END_WIN		(1 << 7)
#define DISPC_IRQ_PAL_GAMMA_MASK	(1 << 8)
#define DISPC_IRQ_OCP_ERR		(1 << 9)
#define DISPC_IRQ_VID1_FIFO_UNDERFLOW	(1 << 10)
#define DISPC_IRQ_VID1_END_WIN		(1 << 11)
#define DISPC_IRQ_VID2_FIFO_UNDERFLOW	(1 << 12)
#define DISPC_IRQ_VID2_END_WIN		(1 << 13)
#define DISPC_IRQ_SYNC_LOST		(1 << 14)
#define DISPC_IRQ_SYNC_LOST_DIGIT	(1 << 15)
#define DISPC_IRQ_WAKEUP		(1 << 16)
#define DISPC_IRQ_SYNC_LOST2		(1 << 17)
#define DISPC_IRQ_VSYNC2		(1 << 18)
#define DISPC_IRQ_ACBIAS_COUNT_STAT2	(1 << 21)
#define DISPC_IRQ_FRAMEDONE2		(1 << 22)
struct omap_dss_device;
struct omap_overlay_manager;
enum omap_display_type ;
enum omap_plane ;
enum omap_channel ;
enum omap_color_mode ;
enum omap_lcd_display_type ;
enum omap_dss_load_mode ;
enum omap_dss_trans_key_type ;
enum omap_rfbi_te_mode ;
enum omap_panel_config ;
enum omap_dss_venc_type ;
enum omap_display_caps ;
enum omap_dss_update_mode ;
enum omap_dss_display_state ;
enum omap_dss_overlay_managers ;
enum omap_dss_rotation_type ;
enum omap_dss_rotation_angle ;
enum omap_overlay_caps ;
enum omap_overlay_manager_caps ;
enum omap_dss_clk_source ;
struct rfbi_timings ;
void omap_rfbi_write_command(const void *buf, u32 len);
void omap_rfbi_read_data(void *buf, u32 len);
void omap_rfbi_write_data(const void *buf, u32 len);
void omap_rfbi_write_pixels(const void __iomem *buf, int scr_width,
u16 x, u16 y,
u16 w, u16 h);
int omap_rfbi_enable_te(bool enable, unsigned line);
int omap_rfbi_setup_te(enum omap_rfbi_te_mode mode,
unsigned hs_pulse_time, unsigned vs_pulse_time,
int hs_pol_inv, int vs_pol_inv, int extif_div);
void rfbi_bus_lock(void);
void rfbi_bus_unlock(void);
void dsi_bus_lock(struct omap_dss_device *dssdev);
void dsi_bus_unlock(struct omap_dss_device *dssdev);
int dsi_vc_dcs_write(struct omap_dss_device *dssdev, int channel, u8 *data,
int len);
int dsi_vc_dcs_write_0(struct omap_dss_device *dssdev, int channel,
u8 dcs_cmd);
int dsi_vc_dcs_write_1(struct omap_dss_device *dssdev, int channel, u8 dcs_cmd,
u8 param);
int dsi_vc_dcs_write_nosync(struct omap_dss_device *dssdev, int channel,
u8 *data, int len);
int dsi_vc_dcs_read(struct omap_dss_device *dssdev, int channel, u8 dcs_cmd,
u8 *buf, int buflen);
int dsi_vc_dcs_read_1(struct omap_dss_device *dssdev, int channel, u8 dcs_cmd,
u8 *data);
int dsi_vc_dcs_read_2(struct omap_dss_device *dssdev, int channel, u8 dcs_cmd,
u8 *data1, u8 *data2);
int dsi_vc_set_max_rx_packet_size(struct omap_dss_device *dssdev, int channel,
u16 len);
int dsi_vc_send_null(struct omap_dss_device *dssdev, int channel);
int dsi_vc_send_bta_sync(struct omap_dss_device *dssdev, int channel);
struct omap_dss_board_info ;
#if defined(CONFIG_OMAP2_DSS_MODULE) || defined(CONFIG_OMAP2_DSS)
extern int omap_display_init(struct omap_dss_board_info *board_data);
static inline int omap_display_init(struct omap_dss_board_info *board_data)
struct omap_display_platform_data ;
struct omap_video_timings ;
extern const struct omap_video_timings omap_dss_pal_timings;
extern const struct omap_video_timings omap_dss_ntsc_timings;
struct omap_overlay_info ;
struct omap_overlay ;
struct omap_overlay_manager_info ;
struct omap_overlay_manager ;
struct omap_dss_device ;
struct omap_dss_driver ;
int omap_dss_register_driver(struct omap_dss_driver *);
void omap_dss_unregister_driver(struct omap_dss_driver *);
void omap_dss_get_device(struct omap_dss_device *dssdev);
void omap_dss_put_device(struct omap_dss_device *dssdev);
#define for_each_dss_dev(d) while ((d = omap_dss_get_next_device(d)) != NULL)
struct omap_dss_device *omap_dss_get_next_device(struct omap_dss_device *from);
struct omap_dss_device *omap_dss_find_device(void *data,
int (*match)(struct omap_dss_device *dssdev, void *data));
int omap_dss_start_device(struct omap_dss_device *dssdev);
void omap_dss_stop_device(struct omap_dss_device *dssdev);
int omap_dss_get_num_overlay_managers(void);
struct omap_overlay_manager *omap_dss_get_overlay_manager(int num);
int omap_dss_get_num_overlays(void);
struct omap_overlay *omap_dss_get_overlay(int num);
void omapdss_default_get_resolution(struct omap_dss_device *dssdev,
u16 *xres, u16 *yres);
int omapdss_default_get_recommended_bpp(struct omap_dss_device *dssdev);
typedef void (*omap_dispc_isr_t) (void *arg, u32 mask);
int omap_dispc_register_isr(omap_dispc_isr_t isr, void *arg, u32 mask);
int omap_dispc_unregister_isr(omap_dispc_isr_t isr, void *arg, u32 mask);
int omap_dispc_wait_for_irq_timeout(u32 irqmask, unsigned long timeout);
int omap_dispc_wait_for_irq_interruptible_timeout(u32 irqmask,
unsigned long timeout);
#define to_dss_driver(x) container_of((x), struct omap_dss_driver, driver)
#define to_dss_device(x) container_of((x), struct omap_dss_device, dev)
void omapdss_dsi_vc_enable_hs(struct omap_dss_device *dssdev, int channel,
bool enable);
int omapdss_dsi_enable_te(struct omap_dss_device *dssdev, bool enable);
int omap_dsi_prepare_update(struct omap_dss_device *dssdev,
u16 *x, u16 *y, u16 *w, u16 *h,
bool enlarge_update_area);
int omap_dsi_update(struct omap_dss_device *dssdev,
int channel,
u16 x, u16 y, u16 w, u16 h,
void (*callback)(int, void *), void *data);
int omap_dsi_request_vc(struct omap_dss_device *dssdev, int *channel);
int omap_dsi_set_vc_id(struct omap_dss_device *dssdev, int channel, int vc_id);
void omap_dsi_release_vc(struct omap_dss_device *dssdev, int channel);
int omapdss_dsi_display_enable(struct omap_dss_device *dssdev);
void omapdss_dsi_display_disable(struct omap_dss_device *dssdev,
bool disconnect_lanes, bool enter_ulps);
int omapdss_dpi_display_enable(struct omap_dss_device *dssdev);
void omapdss_dpi_display_disable(struct omap_dss_device *dssdev);
void dpi_set_timings(struct omap_dss_device *dssdev,
struct omap_video_timings *timings);
int dpi_check_timings(struct omap_dss_device *dssdev,
struct omap_video_timings *timings);
int omapdss_sdi_display_enable(struct omap_dss_device *dssdev);
void omapdss_sdi_display_disable(struct omap_dss_device *dssdev);
int omapdss_rfbi_display_enable(struct omap_dss_device *dssdev);
void omapdss_rfbi_display_disable(struct omap_dss_device *dssdev);
int omap_rfbi_prepare_update(struct omap_dss_device *dssdev,
u16 *x, u16 *y, u16 *w, u16 *h);
int omap_rfbi_update(struct omap_dss_device *dssdev,
u16 x, u16 y, u16 w, u16 h,
void (*callback)(void *), void *data);
int omap_rfbi_configure(struct omap_dss_device *dssdev, int pixel_size,
int data_lines);
