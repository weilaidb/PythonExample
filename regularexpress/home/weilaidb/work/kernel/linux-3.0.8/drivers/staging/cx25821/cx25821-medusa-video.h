#define _MEDUSA_VIDEO_H
#define VIDEO_PROCAMP_MIN                 0
#define VIDEO_PROCAMP_MAX                 10000
#define UNSIGNED_BYTE_MIN                 0
#define UNSIGNED_BYTE_MAX                 0xFF
#define SIGNED_BYTE_MIN                   -128
#define SIGNED_BYTE_MAX                   127
#define SHARPNESS_DEFAULT                 50
#define SATURATION_DEFAULT              5000
#define BRIGHTNESS_DEFAULT              6200
#define CONTRAST_DEFAULT                5000
#define HUE_DEFAULT                     5000
unsigned short _num_decoders;
unsigned short _num_cameras;
unsigned int _video_standard;
int _display_field_cnt[MAX_DECODERS];
