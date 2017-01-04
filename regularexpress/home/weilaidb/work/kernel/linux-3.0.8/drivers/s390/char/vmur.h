#define _VMUR_H_
#define DEV_CLASS_UR_I 0x20
#define DEV_CLASS_UR_O 0x10
#define READER_PUNCH_DEVTYPE	0x2540
#define PRINTER_DEVTYPE		0x1403
struct file_control_block  __attribute__ ((packed));
#define FLG_SYSTEM_HOLD	0x04
#define FLG_CP_DUMP	0x10
#define FLG_USER_HOLD	0x20
#define FLG_IN_USE	0x80
struct urdev ;
struct urfile ;
#define UR_MAJOR 0
#define NUM_MINORS 65536
#define MAX_RECS_PER_IO		511
#define WRITE_CCW_CMD		0x01
#define TRACE(x...) debug_sprintf_event(vmur_dbf, 1, x)
#define CCWDEV_CU_DI(cutype, di) \
CCW_DEVICE(cutype, 0x00), .driver_info = (di)
#define FILE_RECLEN_OFFSET	4064
