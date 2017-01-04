#define _PSMOUSE_H
#define PSMOUSE_CMD_SETSCALE11	0x00e6
#define PSMOUSE_CMD_SETSCALE21	0x00e7
#define PSMOUSE_CMD_SETRES	0x10e8
#define PSMOUSE_CMD_GETINFO	0x03e9
#define PSMOUSE_CMD_SETSTREAM	0x00ea
#define PSMOUSE_CMD_SETPOLL	0x00f0
#define PSMOUSE_CMD_POLL	0x00eb
#define PSMOUSE_CMD_GETID	0x02f2
#define PSMOUSE_CMD_SETRATE	0x10f3
#define PSMOUSE_CMD_ENABLE	0x00f4
#define PSMOUSE_CMD_DISABLE	0x00f5
#define PSMOUSE_CMD_RESET_DIS	0x00f6
#define PSMOUSE_CMD_RESET_BAT	0x02ff
#define PSMOUSE_RET_BAT		0xaa
#define PSMOUSE_RET_ID		0x00
#define PSMOUSE_RET_ACK		0xfa
#define PSMOUSE_RET_NAK		0xfe
enum psmouse_state ;
typedef enum  psmouse_ret_t;
struct psmouse ;
enum psmouse_type ;
void psmouse_queue_work(struct psmouse *psmouse, struct delayed_work *work,
unsigned long delay);
int psmouse_sliced_command(struct psmouse *psmouse, unsigned char command);
int psmouse_reset(struct psmouse *psmouse);
void psmouse_set_state(struct psmouse *psmouse, enum psmouse_state new_state);
void psmouse_set_resolution(struct psmouse *psmouse, unsigned int resolution);
struct psmouse_attribute ;
#define to_psmouse_attr(a)	container_of((a), struct psmouse_attribute, dattr)
ssize_t psmouse_attr_show_helper(struct device *dev, struct device_attribute *attr,
char *buf);
ssize_t psmouse_attr_set_helper(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count);
#define __PSMOUSE_DEFINE_ATTR_VAR(_name, _mode, _data, _show, _set, _protect)	\
static struct psmouse_attribute psmouse_attr_##_name =
#define __PSMOUSE_DEFINE_ATTR(_name, _mode, _data, _show, _set, _protect)	\
static ssize_t _show(struct psmouse *, void *, char *);			\
static ssize_t _set(struct psmouse *, void *, const char *, size_t);	\
__PSMOUSE_DEFINE_ATTR_VAR(_name, _mode, _data, _show, _set, _protect)
#define PSMOUSE_DEFINE_ATTR(_name, _mode, _data, _show, _set)			\
__PSMOUSE_DEFINE_ATTR(_name, _mode, _data, _show, _set, true)
#define PSMOUSE_DEFINE_RO_ATTR(_name, _mode, _data, _show)			\
static ssize_t _show(struct psmouse *, void *, char *);			\
__PSMOUSE_DEFINE_ATTR_VAR(_name, _mode, _data, _show, NULL, true)
#define PSMOUSE_DEFINE_WO_ATTR(_name, _mode, _data, _set)			\
static ssize_t _set(struct psmouse *, void *, const char *, size_t);	\
__PSMOUSE_DEFINE_ATTR_VAR(_name, _mode, _data, NULL, _set, true)
