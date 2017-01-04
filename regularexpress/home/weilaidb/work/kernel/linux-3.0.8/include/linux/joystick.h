#define _LINUX_JOYSTICK_H
#define JS_VERSION		0x020100
#define JS_EVENT_BUTTON		0x01
#define JS_EVENT_AXIS		0x02
#define JS_EVENT_INIT		0x80
struct js_event ;
#define JSIOCGVERSION		_IOR('j', 0x01, __u32)
#define JSIOCGAXES		_IOR('j', 0x11, __u8)
#define JSIOCGBUTTONS		_IOR('j', 0x12, __u8)
#define JSIOCGNAME(len)		_IOC(_IOC_READ, 'j', 0x13, len)
#define JSIOCSCORR		_IOW('j', 0x21, struct js_corr)
#define JSIOCGCORR		_IOR('j', 0x22, struct js_corr)
#define JSIOCSAXMAP		_IOW('j', 0x31, __u8[ABS_CNT])
#define JSIOCGAXMAP		_IOR('j', 0x32, __u8[ABS_CNT])
#define JSIOCSBTNMAP		_IOW('j', 0x33, __u16[KEY_MAX - BTN_MISC + 1])
#define JSIOCGBTNMAP		_IOR('j', 0x34, __u16[KEY_MAX - BTN_MISC + 1])
#define JS_CORR_NONE		0x00
#define JS_CORR_BROKEN		0x01
struct js_corr ;
#define JS_RETURN		sizeof(struct JS_DATA_TYPE)
#define JS_TRUE			1
#define JS_FALSE		0
#define JS_X_0			0x01
#define JS_Y_0			0x02
#define JS_X_1			0x04
#define JS_Y_1			0x08
#define JS_MAX			2
#define JS_DEF_TIMEOUT		0x1300
#define JS_DEF_CORR		0
#define JS_DEF_TIMELIMIT	10L
#define JS_SET_CAL		1
#define JS_GET_CAL		2
#define JS_SET_TIMEOUT		3
#define JS_GET_TIMEOUT		4
#define JS_SET_TIMELIMIT	5
#define JS_GET_TIMELIMIT	6
#define JS_GET_ALL		7
#define JS_SET_ALL		8
struct JS_DATA_TYPE ;
struct JS_DATA_SAVE_TYPE_32 ;
struct JS_DATA_SAVE_TYPE_64 ;
#if BITS_PER_LONG == 64
#define JS_DATA_SAVE_TYPE JS_DATA_SAVE_TYPE_64
#elif BITS_PER_LONG == 32
#define JS_DATA_SAVE_TYPE JS_DATA_SAVE_TYPE_32
#error Unexpected BITS_PER_LONG
