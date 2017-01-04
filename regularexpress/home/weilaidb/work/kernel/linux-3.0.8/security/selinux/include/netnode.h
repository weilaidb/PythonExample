#define _SELINUX_NETNODE_H
int sel_netnode_sid(void *addr, u16 family, u32 *sid);
