#define _RPADLPAR_IO_H_
extern int dlpar_sysfs_init(void);
extern void dlpar_sysfs_exit(void);
extern int dlpar_add_slot(char *drc_name);
extern int dlpar_remove_slot(char *drc_name);
