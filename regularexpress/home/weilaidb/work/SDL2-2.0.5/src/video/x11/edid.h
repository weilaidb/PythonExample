typedef unsigned char uchar;
typedef struct MonitorInfo MonitorInfo;
typedef struct Timing Timing;
typedef struct DetailedTiming DetailedTiming;
typedef enum
Interface;
typedef enum
ColorType;
typedef enum
StereoType;
struct Timing
;
struct DetailedTiming
;
struct MonitorInfo
;
MonitorInfo *decode_edid (const uchar *data);
void         dump_monitor_info (MonitorInfo *info);
char *       make_display_name (const char        *output_name,
const MonitorInfo *info);
