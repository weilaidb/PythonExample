#define DASD_H
#define DASD_IOCTL_LETTER 'D'
#define DASD_API_VERSION 6
typedef struct dasd_information2_t  dasd_information2_t;
#define DASD_FORMAT_NONE 0
#define DASD_FORMAT_LDL  1
#define DASD_FORMAT_CDL  2
#define DASD_FEATURE_DEFAULT	     0x00
#define DASD_FEATURE_READONLY	     0x01
#define DASD_FEATURE_USEDIAG	     0x02
#define DASD_FEATURE_INITIAL_ONLINE  0x04
#define DASD_FEATURE_ERPLOG	     0x08
#define DASD_FEATURE_FAILFAST	     0x10
#define DASD_FEATURE_FAILONSLCK      0x20
#define DASD_FEATURE_USERAW	     0x40
#define DASD_PARTN_BITS 2
typedef struct dasd_information_t  dasd_information_t;
typedef struct dasd_rssd_perf_stats_t  __attribute__((packed)) dasd_rssd_perf_stats_t;
typedef struct dasd_profile_info_t  dasd_profile_info_t;
typedef struct format_data_t  format_data_t;
#define DASD_FMT_INT_FMT_R0 1
#define DASD_FMT_INT_FMT_HA 2
#define DASD_FMT_INT_INVAL  4
#define DASD_FMT_INT_COMPAT 8
typedef struct attrib_data_t  __attribute__ ((packed)) attrib_data_t;
#define DASD_NORMAL_CACHE  0x0
#define DASD_BYPASS_CACHE  0x1
#define DASD_INHIBIT_LOAD  0x2
#define DASD_SEQ_ACCESS    0x3
#define DASD_SEQ_PRESTAGE  0x4
#define DASD_REC_ACCESS    0x5
typedef struct dasd_symmio_parms  __attribute__ ((packed)) dasd_symmio_parms_t;
struct dasd_snid_data  __attribute__ ((packed));
struct dasd_snid_ioctl_data  __attribute__ ((packed));
#define BIODASDDISABLE _IO(DASD_IOCTL_LETTER,0)
#define BIODASDENABLE  _IO(DASD_IOCTL_LETTER,1)
#define BIODASDRSRV    _IO(DASD_IOCTL_LETTER,2)
#define BIODASDRLSE    _IO(DASD_IOCTL_LETTER,3)
#define BIODASDSLCK    _IO(DASD_IOCTL_LETTER,4)
#define BIODASDPRRST   _IO(DASD_IOCTL_LETTER,5)
#define BIODASDQUIESCE _IO(DASD_IOCTL_LETTER,6)
#define BIODASDRESUME  _IO(DASD_IOCTL_LETTER,7)
#define DASDAPIVER     _IOR(DASD_IOCTL_LETTER,0,int)
#define BIODASDINFO    _IOR(DASD_IOCTL_LETTER,1,dasd_information_t)
#define BIODASDPRRD    _IOR(DASD_IOCTL_LETTER,2,dasd_profile_info_t)
#define BIODASDINFO2   _IOR(DASD_IOCTL_LETTER,3,dasd_information2_t)
#define BIODASDPSRD    _IOR(DASD_IOCTL_LETTER,4,dasd_rssd_perf_stats_t)
#define BIODASDGATTR   _IOR(DASD_IOCTL_LETTER,5,attrib_data_t)
#define BIODASDFMT     _IOW(DASD_IOCTL_LETTER,1,format_data_t)
#define BIODASDSATTR   _IOW(DASD_IOCTL_LETTER,2,attrib_data_t)
#define BIODASDSNID    _IOWR(DASD_IOCTL_LETTER, 1, struct dasd_snid_ioctl_data)
#define BIODASDSYMMIO  _IOWR(DASD_IOCTL_LETTER, 240, dasd_symmio_parms_t)
