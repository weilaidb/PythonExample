#define _PCB_CONFIG_H_
#define CLASS_DEFAULT       0xFF
enum VENDOR_REQUEST_TYPE ;
enum BYTE_ENABLE_MASK ;
#define SPEED_MASK      0x1
enum USB_SPEED;
enum _true_false;
#define TS_MASK         0x6
enum TS_PORT;
#define EAVP_MASK       0x8
enum EAV_PRESENT;
#define ATM_MASK        0x30
enum AT_MODE;
#define PWR_SEL_MASK    0x40
enum POWE_TYPE;
enum USB_POWE_TYPE;
#define BO_0_MASK       0x80
enum AVDEC_STATUS;
#define BO_1_MASK       0x100
#define BUSPOWER_MASK   0xC4
#define SELFPOWER_MASK  0x86
#define NOT_DECIDE_YET  0xFE
#define NOT_SUPPORTED   0xFF
#define MOD_DIGITAL     0x1
#define MOD_ANALOG      0x2
#define MOD_DIF         0x4
#define MOD_EXTERNAL    0x8
#define CAP_ALL_MOD     0x0f
#define SOURCE_DIGITAL          0x1
#define SOURCE_ANALOG           0x2
#define SOURCE_DIF              0x4
#define SOURCE_EXTERNAL         0x8
#define SOURCE_TS_BDA			0x10
#define SOURCE_TS_ENCODE		0x20
#define SOURCE_TS_EXTERNAL   	0x40
struct INTERFACE_INFO ;
enum INDEX_INTERFACE_INFO;
struct CONFIG_INFO ;
struct pcb_config ;
enum INDEX_PCB_CONFIG;
struct cx231xx;
u32 initialize_cx231xx(struct cx231xx *p_dev);
