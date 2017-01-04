#define _SN9C102_CONFIG_H_
#define SN9C102_DEBUG
#define SN9C102_DEBUG_LEVEL       2
#define SN9C102_MAX_DEVICES       64
#define SN9C102_PRESERVE_IMGSCALE 0
#define SN9C102_FORCE_MUNMAP      0
#define SN9C102_MAX_FRAMES        32
#define SN9C102_URBS              2
#define SN9C102_ISO_PACKETS       7
#define SN9C102_ALTERNATE_SETTING 8
#define SN9C102_URB_TIMEOUT       msecs_to_jiffies(2 * SN9C102_ISO_PACKETS)
#define SN9C102_CTRL_TIMEOUT      300
#define SN9C102_FRAME_TIMEOUT     0
static const u8 SN9C102_Y_QTABLE0[64] = ;
static const u8 SN9C102_UV_QTABLE0[64] = ;
static const u8 SN9C102_Y_QTABLE1[64] = ;
static const u8 SN9C102_UV_QTABLE1[64] = ;
