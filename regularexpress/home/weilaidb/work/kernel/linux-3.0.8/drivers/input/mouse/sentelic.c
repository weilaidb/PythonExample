#define	FSP_CMD_TIMEOUT		200
#define	FSP_CMD_TIMEOUT2	30
static const char fsp_drv_ver[] = "1.0.0-K";
static unsigned char fsp_test_swap_cmd(unsigned char reg_val)
static unsigned char fsp_test_invert_cmd(unsigned char reg_val)
static int fsp_reg_read(struct psmouse *psmouse, int reg_addr, int *reg_val)
static int fsp_reg_write(struct psmouse *psmouse, int reg_addr, int reg_val)
static int fsp_reg_write_enable(struct psmouse *psmouse, bool enable)
static int fsp_page_reg_read(struct psmouse *psmouse, int *reg_val)
static int fsp_page_reg_write(struct psmouse *psmouse, int reg_val)
static int fsp_get_version(struct psmouse *psmouse, int *version)
static int fsp_get_revision(struct psmouse *psmouse, int *rev)
static int fsp_get_buttons(struct psmouse *psmouse, int *btn)
static int fsp_opc_tag_enable(struct psmouse *psmouse, bool enable)
static int fsp_onpad_vscr(struct psmouse *psmouse, bool enable)
static int fsp_onpad_hscr(struct psmouse *psmouse, bool enable)
static ssize_t fsp_attr_set_setreg(struct psmouse *psmouse, void *data,
const char *buf, size_t count)
PSMOUSE_DEFINE_WO_ATTR(setreg, S_IWUSR, NULL, fsp_attr_set_setreg);
static ssize_t fsp_attr_show_getreg(struct psmouse *psmouse,
void *data, char *buf)
static ssize_t fsp_attr_set_getreg(struct psmouse *psmouse, void *data,
const char *buf, size_t count)
PSMOUSE_DEFINE_ATTR(getreg, S_IWUSR | S_IRUGO, NULL,
fsp_attr_show_getreg, fsp_attr_set_getreg);
static ssize_t fsp_attr_show_pagereg(struct psmouse *psmouse,
void *data, char *buf)
static ssize_t fsp_attr_set_pagereg(struct psmouse *psmouse, void *data,
const char *buf, size_t count)
PSMOUSE_DEFINE_ATTR(page, S_IWUSR | S_IRUGO, NULL,
fsp_attr_show_pagereg, fsp_attr_set_pagereg);
static ssize_t fsp_attr_show_vscroll(struct psmouse *psmouse,
void *data, char *buf)
static ssize_t fsp_attr_set_vscroll(struct psmouse *psmouse, void *data,
const char *buf, size_t count)
PSMOUSE_DEFINE_ATTR(vscroll, S_IWUSR | S_IRUGO, NULL,
fsp_attr_show_vscroll, fsp_attr_set_vscroll);
static ssize_t fsp_attr_show_hscroll(struct psmouse *psmouse,
void *data, char *buf)
static ssize_t fsp_attr_set_hscroll(struct psmouse *psmouse, void *data,
const char *buf, size_t count)
PSMOUSE_DEFINE_ATTR(hscroll, S_IWUSR | S_IRUGO, NULL,
fsp_attr_show_hscroll, fsp_attr_set_hscroll);
static ssize_t fsp_attr_show_flags(struct psmouse *psmouse,
void *data, char *buf)
static ssize_t fsp_attr_set_flags(struct psmouse *psmouse, void *data,
const char *buf, size_t count)
PSMOUSE_DEFINE_ATTR(flags, S_IWUSR | S_IRUGO, NULL,
fsp_attr_show_flags, fsp_attr_set_flags);
static ssize_t fsp_attr_show_ver(struct psmouse *psmouse,
void *data, char *buf)
PSMOUSE_DEFINE_RO_ATTR(ver, S_IRUGO, NULL, fsp_attr_show_ver);
static struct attribute *fsp_attributes[] = ;
static struct attribute_group fsp_attribute_group = ;
static void fsp_packet_debug(unsigned char packet[])
static void fsp_packet_debug(unsigned char packet[])
static psmouse_ret_t fsp_process_byte(struct psmouse *psmouse)
static int fsp_activate_protocol(struct psmouse *psmouse)
int fsp_detect(struct psmouse *psmouse, bool set_properties)
static void fsp_reset(struct psmouse *psmouse)
static void fsp_disconnect(struct psmouse *psmouse)
static int fsp_reconnect(struct psmouse *psmouse)
int fsp_init(struct psmouse *psmouse)
