#define _FT1000IOCTLH_
#define DSPVERSZ                4
#define HWSERNUMSZ              16
#define SKUSZ                   20
#define EUISZ                   8
#define CALVERSZ                2
#define CALDATESZ               6
#define MAX_DNLD_BLKSZ          1024
struct pseudo_hdr  __attribute__ ((packed));
typedef struct _IOCTL_GET_VER
__attribute__ ((packed)) IOCTL_GET_VER, *PIOCTL_GET_VER;
typedef struct _IOCTL_GET_DSP_STAT
__attribute__ ((packed)) IOCTL_GET_DSP_STAT, *PIOCTL_GET_DSP_STAT;
typedef struct _IOCTL_DPRAM_BLK
__attribute__ ((packed)) IOCTL_DPRAM_BLK, *PIOCTL_DPRAM_BLK;
typedef struct _IOCTL_DPRAM_COMMAND
__attribute__ ((packed)) IOCTL_DPRAM_COMMAND, *PIOCTL_DPRAM_COMMAND;
#define FT1000_MAGIC_CODE      'F'
#define IOCTL_REGISTER_CMD					0
#define IOCTL_SET_DPRAM_CMD					3
#define IOCTL_GET_DPRAM_CMD					4
#define IOCTL_GET_DSP_STAT_CMD      6
#define IOCTL_GET_VER_CMD           7
#define IOCTL_CONNECT               10
#define IOCTL_DISCONNECT            11
#define IOCTL_FT1000_GET_DSP_STAT _IOR (FT1000_MAGIC_CODE, IOCTL_GET_DSP_STAT_CMD, sizeof(IOCTL_GET_DSP_STAT) )
#define IOCTL_FT1000_GET_VER _IOR (FT1000_MAGIC_CODE, IOCTL_GET_VER_CMD, sizeof(IOCTL_GET_VER) )
#define IOCTL_FT1000_CONNECT _IOW (FT1000_MAGIC_CODE, IOCTL_CONNECT, 0 )
#define IOCTL_FT1000_DISCONNECT _IOW (FT1000_MAGIC_CODE, IOCTL_DISCONNECT, 0 )
#define IOCTL_FT1000_SET_DPRAM _IOW (FT1000_MAGIC_CODE, IOCTL_SET_DPRAM_CMD, sizeof(IOCTL_DPRAM_BLK) )
#define IOCTL_FT1000_GET_DPRAM _IOR (FT1000_MAGIC_CODE, IOCTL_GET_DPRAM_CMD, sizeof(IOCTL_DPRAM_BLK) )
#define IOCTL_FT1000_REGISTER  _IOW (FT1000_MAGIC_CODE, IOCTL_REGISTER_CMD, sizeof(unsigned short *) )
