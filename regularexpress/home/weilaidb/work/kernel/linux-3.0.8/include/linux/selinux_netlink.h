#define _LINUX_SELINUX_NETLINK_H
#define SELNL_MSG_BASE 0x10
enum ;
#define SELNL_GRP_NONE		0x00000000
#define SELNL_GRP_AVC		0x00000001
#define SELNL_GRP_ALL		0xffffffff
enum selinux_nlgroups ;
#define SELNLGRP_MAX	(__SELNLGRP_MAX - 1)
struct selnl_msg_setenforce ;
struct selnl_msg_policyload ;
