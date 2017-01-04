static int trackpoint_read(struct ps2dev *ps2dev, unsigned char loc, unsigned char *results)
static int trackpoint_write(struct ps2dev *ps2dev, unsigned char loc, unsigned char val)
static int trackpoint_toggle_bit(struct ps2dev *ps2dev, unsigned char loc, unsigned char mask)
struct trackpoint_attr_data ;
static ssize_t trackpoint_show_int_attr(struct psmouse *psmouse, void *data, char *buf)
static ssize_t trackpoint_set_int_attr(struct psmouse *psmouse, void *data,
const char *buf, size_t count)
#define TRACKPOINT_INT_ATTR(_name, _command)					\
static struct trackpoint_attr_data trackpoint_attr_##_name = ;									\
PSMOUSE_DEFINE_ATTR(_name, S_IWUSR | S_IRUGO,				\
&trackpoint_attr_##_name,				\
trackpoint_show_int_attr, trackpoint_set_int_attr)
static ssize_t trackpoint_set_bit_attr(struct psmouse *psmouse, void *data,
const char *buf, size_t count)
#define TRACKPOINT_BIT_ATTR(_name, _command, _mask, _inv)				\
static struct trackpoint_attr_data trackpoint_attr_##_name = ;									\
PSMOUSE_DEFINE_ATTR(_name, S_IWUSR | S_IRUGO,				\
&trackpoint_attr_##_name,				\
trackpoint_show_int_attr, trackpoint_set_bit_attr)
TRACKPOINT_INT_ATTR(sensitivity, TP_SENS);
TRACKPOINT_INT_ATTR(speed, TP_SPEED);
TRACKPOINT_INT_ATTR(inertia, TP_INERTIA);
TRACKPOINT_INT_ATTR(reach, TP_REACH);
TRACKPOINT_INT_ATTR(draghys, TP_DRAGHYS);
TRACKPOINT_INT_ATTR(mindrag, TP_MINDRAG);
TRACKPOINT_INT_ATTR(thresh, TP_THRESH);
TRACKPOINT_INT_ATTR(upthresh, TP_UP_THRESH);
TRACKPOINT_INT_ATTR(ztime, TP_Z_TIME);
TRACKPOINT_INT_ATTR(jenks, TP_JENKS_CURV);
TRACKPOINT_BIT_ATTR(press_to_select, TP_TOGGLE_PTSON, TP_MASK_PTSON, 0);
TRACKPOINT_BIT_ATTR(skipback, TP_TOGGLE_SKIPBACK, TP_MASK_SKIPBACK, 0);
TRACKPOINT_BIT_ATTR(ext_dev, TP_TOGGLE_EXT_DEV, TP_MASK_EXT_DEV, 1);
static struct attribute *trackpoint_attrs[] = ;
static struct attribute_group trackpoint_attr_group = ;
static int trackpoint_start_protocol(struct psmouse *psmouse, unsigned char *firmware_id)
static int trackpoint_sync(struct psmouse *psmouse)
static void trackpoint_defaults(struct trackpoint_data *tp)
static void trackpoint_disconnect(struct psmouse *psmouse)
static int trackpoint_reconnect(struct psmouse *psmouse)
int trackpoint_detect(struct psmouse *psmouse, bool set_properties)
