#define __ACPI_VIDEO_H
struct acpi_device;
#define ACPI_VIDEO_DISPLAY_CRT  1
#define ACPI_VIDEO_DISPLAY_TV   2
#define ACPI_VIDEO_DISPLAY_DVI  3
#define ACPI_VIDEO_DISPLAY_LCD  4
#define ACPI_VIDEO_DISPLAY_LEGACY_MONITOR 0x0100
#define ACPI_VIDEO_DISPLAY_LEGACY_PANEL   0x0110
#define ACPI_VIDEO_DISPLAY_LEGACY_TV      0x0200
#if (defined CONFIG_ACPI_VIDEO || defined CONFIG_ACPI_VIDEO_MODULE)
extern int acpi_video_register(void);
extern void acpi_video_unregister(void);
extern int acpi_video_get_edid(struct acpi_device *device, int type,
int device_id, void **edid);
static inline int acpi_video_register(void)
static inline void acpi_video_unregister(void)
static inline int acpi_video_get_edid(struct acpi_device *device, int type,
int device_id, void **edid)
