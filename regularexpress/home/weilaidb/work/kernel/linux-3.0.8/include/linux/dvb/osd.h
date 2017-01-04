#define _DVBOSD_H_
typedef enum  OSD_Command;
typedef struct osd_cmd_s  osd_cmd_t;
typedef enum  osd_raw_window_t;
typedef struct osd_cap_s  osd_cap_t;
#define OSD_SEND_CMD            _IOW('o', 160, osd_cmd_t)
#define OSD_GET_CAPABILITY      _IOR('o', 161, osd_cap_t)
