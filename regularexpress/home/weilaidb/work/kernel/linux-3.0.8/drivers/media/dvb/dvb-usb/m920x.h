#define _DVB_USB_M920X_H_
#define DVB_USB_LOG_PREFIX "m920x"
#define deb(args...)   dprintk(dvb_usb_m920x_debug,0x01,args)
#define M9206_CORE	0x22
#define M9206_RC_STATE	0xff51
#define M9206_RC_KEY	0xff52
#define M9206_RC_INIT1	0xff54
#define M9206_RC_INIT2	0xff55
#define M9206_FW_GO	0xff69
#define M9206_I2C	0x23
#define M9206_FILTER	0x25
#define M9206_FW	0x30
#define M9206_MAX_FILTERS 8
#define M9206_MAX_ADAPTERS 4
struct m920x_state ;
struct m920x_inits ;
