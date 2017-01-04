#define _KYRO_H
struct kyrofb_info ;
extern int kyro_dev_init(void);
extern void kyro_dev_reset(void);
extern unsigned char *kyro_dev_physical_fb_ptr(void);
extern unsigned char *kyro_dev_virtual_fb_ptr(void);
extern void *kyro_dev_physical_regs_ptr(void);
extern void *kyro_dev_virtual_regs_ptr(void);
extern unsigned int kyro_dev_fb_size(void);
extern unsigned int kyro_dev_regs_size(void);
extern u32 kyro_dev_overlay_offset(void);
#define KYRO_IOC_MAGIC 'k'
#define KYRO_IOCTL_OVERLAY_CREATE       _IO(KYRO_IOC_MAGIC, 0)
#define KYRO_IOCTL_OVERLAY_VIEWPORT_SET _IO(KYRO_IOC_MAGIC, 1)
#define KYRO_IOCTL_SET_VIDEO_MODE       _IO(KYRO_IOC_MAGIC, 2)
#define KYRO_IOCTL_UVSTRIDE             _IO(KYRO_IOC_MAGIC, 3)
#define KYRO_IOCTL_OVERLAY_OFFSET       _IO(KYRO_IOC_MAGIC, 4)
#define KYRO_IOCTL_STRIDE               _IO(KYRO_IOC_MAGIC, 5)
typedef struct _OVERLAY_CREATE  overlay_create;
typedef struct _OVERLAY_VIEWPORT_SET  overlay_viewport_set;
typedef struct _SET_VIDEO_MODE  set_video_mode;
