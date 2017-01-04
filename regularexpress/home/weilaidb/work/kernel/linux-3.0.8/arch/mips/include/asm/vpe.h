#define _ASM_VPE_H
struct vpe_notifications ;
extern int vpe_notify(int index, struct vpe_notifications *notify);
extern void *vpe_get_shared(int index);
extern int vpe_getuid(int index);
extern int vpe_getgid(int index);
extern char *vpe_getcwd(int index);
