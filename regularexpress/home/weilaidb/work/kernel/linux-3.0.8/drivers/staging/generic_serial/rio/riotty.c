#define __EXPLICIT_DEF_H__
static void RIOClearUp(struct Port *PortP);
int RIOShortCommand(struct rio_info *p, struct Port *PortP, int command, int len, int arg);
extern struct rio_info *p;
int riotopen(struct tty_struct *tty, struct file *filp)
int riotclose(void *ptr)
static void RIOClearUp(struct Port *PortP)
int RIOShortCommand(struct rio_info *p, struct Port *PortP, int command, int len, int arg)
