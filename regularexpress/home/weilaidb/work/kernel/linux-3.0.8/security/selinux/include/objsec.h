#define _SELINUX_OBJSEC_H_
struct task_security_struct ;
struct inode_security_struct ;
struct file_security_struct ;
struct superblock_security_struct ;
struct msg_security_struct ;
struct ipc_security_struct ;
struct netif_security_struct ;
struct netnode_security_struct ;
struct netport_security_struct ;
struct sk_security_struct ;
struct key_security_struct ;
extern unsigned int selinux_checkreqprot;
