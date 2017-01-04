struct lifebook_data ;
static bool lifebook_present;
static const char *desired_serio_phys;
static int lifebook_limit_serio3(const struct dmi_system_id *d)
static bool lifebook_use_6byte_proto;
static int lifebook_set_6byte_proto(const struct dmi_system_id *d)
static const struct dmi_system_id __initconst lifebook_dmi_table[] = ;
void __init lifebook_module_init(void)
static psmouse_ret_t lifebook_process_byte(struct psmouse *psmouse)
static int lifebook_absolute_mode(struct psmouse *psmouse)
static void lifebook_relative_mode(struct psmouse *psmouse)
static void lifebook_set_resolution(struct psmouse *psmouse, unsigned int resolution)
static void lifebook_disconnect(struct psmouse *psmouse)
int lifebook_detect(struct psmouse *psmouse, bool set_properties)
static int lifebook_create_relative_device(struct psmouse *psmouse)
int lifebook_init(struct psmouse *psmouse)
