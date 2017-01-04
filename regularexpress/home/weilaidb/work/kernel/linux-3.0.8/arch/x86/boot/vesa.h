#define BOOT_VESA_H
typedef struct  far_ptr;
struct vesa_general_info  __attribute__ ((packed));
#define VESA_MAGIC ('V' + ('E' << 8) + ('S' << 16) + ('A' << 24))
struct vesa_mode_info  __attribute__ ((packed));
