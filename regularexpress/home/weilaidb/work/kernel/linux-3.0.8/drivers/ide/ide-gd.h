#define __IDE_GD_H
#define DRV_NAME "ide-gd"
#define PFX DRV_NAME ": "
#define IDE_GD_DEBUG_LOG	0
#if IDE_GD_DEBUG_LOG
#define ide_debug_log(lvl, fmt, args...) __ide_debug_log(lvl, fmt, ## args)
#define ide_debug_log(lvl, fmt, args...) do  while (0)
struct ide_disk_obj ;
sector_t ide_gd_capacity(ide_drive_t *);
