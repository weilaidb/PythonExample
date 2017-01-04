static const char *block_name[] = ;
static unsigned int debugs_on;
static int apply_vp_patch(struct camera_data *cam);
static int set_default_user_mode(struct camera_data *cam);
static int set_vw_size(struct camera_data *cam, int size);
static int configure_sensor(struct camera_data *cam,
int reqwidth, int reqheight);
static int config_sensor_410(struct camera_data *cam,
int reqwidth, int reqheight);
static int config_sensor_500(struct camera_data *cam,
int reqwidth, int reqheight);
static int set_all_properties(struct camera_data *cam);
static void get_color_params(struct camera_data *cam);
static void wake_system(struct camera_data *cam);
static void set_lowlight_boost(struct camera_data *cam);
static void reset_camera_struct(struct camera_data *cam);
static int cpia2_set_high_power(struct camera_data *cam);
static inline unsigned long kvirt_to_pa(unsigned long adr)
static void *rvmalloc(unsigned long size)
static void rvfree(void *mem, unsigned long size)
int cpia2_do_command(struct camera_data *cam,
u32 command, u8 direction, u8 param)
#define DIR(cmd) ((cmd->direction == TRANSFER_WRITE) ? "Write" : "Read")
#define BINDEX(cmd) (cmd->req_mode & 0x03)
int cpia2_send_command(struct camera_data *cam, struct cpia2_command *cmd)
;
static void cpia2_get_version_info(struct camera_data *cam)
int cpia2_reset_camera(struct camera_data *cam)
static int cpia2_set_high_power(struct camera_data *cam)
int cpia2_set_low_power(struct camera_data *cam)
static int cpia2_send_onebyte_command(struct camera_data *cam,
struct cpia2_command *cmd,
u8 start, u8 datum)
static int apply_vp_patch(struct camera_data *cam)
static int set_default_user_mode(struct camera_data *cam)
int cpia2_match_video_size(int width, int height)
static int set_vw_size(struct camera_data *cam, int size)
static int configure_sensor(struct camera_data *cam,
int req_width, int req_height)
static int config_sensor_410(struct camera_data *cam,
int req_width, int req_height)
static int config_sensor_500(struct camera_data *cam,
int req_width, int req_height)
static int set_all_properties(struct camera_data *cam)
void cpia2_save_camera_state(struct camera_data *cam)
static void get_color_params(struct camera_data *cam)
void cpia2_set_color_params(struct camera_data *cam)
int cpia2_set_flicker_mode(struct camera_data *cam, int mode)
void cpia2_set_property_flip(struct camera_data *cam, int prop_val)
void cpia2_set_property_mirror(struct camera_data *cam, int prop_val)
int cpia2_set_target_kb(struct camera_data *cam, unsigned char value)
int cpia2_set_gpio(struct camera_data *cam, unsigned char setting)
int cpia2_set_fps(struct camera_data *cam, int framerate)
void cpia2_set_brightness(struct camera_data *cam, unsigned char value)
void cpia2_set_contrast(struct camera_data *cam, unsigned char value)
void cpia2_set_saturation(struct camera_data *cam, unsigned char value)
static void wake_system(struct camera_data *cam)
static void set_lowlight_boost(struct camera_data *cam)
void cpia2_set_format(struct camera_data *cam)
void cpia2_dbg_dump_registers(struct camera_data *cam)
static void reset_camera_struct(struct camera_data *cam)
struct camera_data *cpia2_init_camera_struct(void)
int cpia2_init_camera(struct camera_data *cam)
int cpia2_allocate_buffers(struct camera_data *cam)
void cpia2_free_buffers(struct camera_data *cam)
long cpia2_read(struct camera_data *cam,
char __user *buf, unsigned long count, int noblock)
unsigned int cpia2_poll(struct camera_data *cam, struct file *filp,
poll_table *wait)
int cpia2_remap_buffer(struct camera_data *cam, struct vm_area_struct *vma)
