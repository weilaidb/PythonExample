#define _AGP_H 1
#define AGPIOC_BASE       'A'
#define AGPIOC_INFO       _IOR (AGPIOC_BASE, 0, struct agp_info*)
#define AGPIOC_ACQUIRE    _IO  (AGPIOC_BASE, 1)
#define AGPIOC_RELEASE    _IO  (AGPIOC_BASE, 2)
#define AGPIOC_SETUP      _IOW (AGPIOC_BASE, 3, struct agp_setup*)
#define AGPIOC_RESERVE    _IOW (AGPIOC_BASE, 4, struct agp_region*)
#define AGPIOC_PROTECT    _IOW (AGPIOC_BASE, 5, struct agp_region*)
#define AGPIOC_ALLOCATE   _IOWR(AGPIOC_BASE, 6, struct agp_allocate*)
#define AGPIOC_DEALLOCATE _IOW (AGPIOC_BASE, 7, int)
#define AGPIOC_BIND       _IOW (AGPIOC_BASE, 8, struct agp_bind*)
#define AGPIOC_UNBIND     _IOW (AGPIOC_BASE, 9, struct agp_unbind*)
#define AGPIOC_CHIPSET_FLUSH _IO (AGPIOC_BASE, 10)
#define AGP_DEVICE      "/dev/agpgart"
#define TRUE 1
#define FALSE 0
struct agp_version ;
typedef struct _agp_info  agp_info;
typedef struct _agp_setup  agp_setup;
typedef struct _agp_segment  agp_segment;
typedef struct _agp_region  agp_region;
typedef struct _agp_allocate  agp_allocate;
typedef struct _agp_bind  agp_bind;
typedef struct _agp_unbind  agp_unbind;
#define AGPGART_MINOR 175
struct agp_info ;
struct agp_setup ;
struct agp_segment ;
struct agp_segment_priv ;
struct agp_region ;
struct agp_allocate ;
struct agp_bind ;
struct agp_unbind ;
struct agp_client ;
struct agp_controller ;
#define AGP_FF_ALLOW_CLIENT		0
#define AGP_FF_ALLOW_CONTROLLER 	1
#define AGP_FF_IS_CLIENT		2
#define AGP_FF_IS_CONTROLLER		3
#define AGP_FF_IS_VALID 		4
struct agp_file_private ;
struct agp_front_data ;
