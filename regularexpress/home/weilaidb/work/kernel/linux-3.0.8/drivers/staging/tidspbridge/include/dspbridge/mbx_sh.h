#define _MBX_SH_H
#define MBX_PCPY_CLASS     0x0800
#define MBX_PM_CLASS       0x2000
#define MBX_DBG_CLASS      0x4000
#define MBX_DEH_BASE        0x0
#define MBX_DEH_USERS_BASE  0x100
#define MBX_DEH_LIMIT       0x3FF
#define MBX_DEH_RESET       0x101
#define MBX_PM_DSPIDLE                  (MBX_PM_CLASS + 0x0)
#define MBX_PM_DSPWAKEUP                (MBX_PM_CLASS + 0x1)
#define MBX_PM_EMERGENCYSLEEP           (MBX_PM_CLASS + 0x2)
#define MBX_PM_SETPOINT_PRENOTIFY       (MBX_PM_CLASS + 0x6)
#define MBX_PM_SETPOINT_POSTNOTIFY      (MBX_PM_CLASS + 0x7)
#define MBX_PM_DSPRETENTION        (MBX_PM_CLASS + 0x8)
#define MBX_PM_DSPHIBERNATE        (MBX_PM_CLASS + 0x9)
#define MBX_PM_HIBERNATE_EN        (MBX_PM_CLASS + 0xA)
#define MBX_PM_OPP_REQ                  (MBX_PM_CLASS + 0xB)
#define MBX_DBG_SYSPRINTF       (MBX_DBG_CLASS + 0x0)
