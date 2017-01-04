#define TOUCHKIT_MAX_XC			0x07ff
#define TOUCHKIT_MAX_YC			0x07ff
#define TOUCHKIT_CMD			0x0a
#define TOUCHKIT_CMD_LENGTH		1
#define TOUCHKIT_CMD_ACTIVE		'A'
#define TOUCHKIT_CMD_FIRMWARE_VERSION	'D'
#define TOUCHKIT_CMD_CONTROLLER_TYPE	'E'
#define TOUCHKIT_SEND_PARMS(s, r, c)	((s) << 12 | (r) << 8 | (c))
#define TOUCHKIT_GET_TOUCHED(packet)	(((packet)[0]) & 0x01)
#define TOUCHKIT_GET_X(packet)		(((packet)[1] << 7) | (packet)[2])
#define TOUCHKIT_GET_Y(packet)		(((packet)[3] << 7) | (packet)[4])
static psmouse_ret_t touchkit_ps2_process_byte(struct psmouse *psmouse)
int touchkit_ps2_detect(struct psmouse *psmouse, bool set_properties)
