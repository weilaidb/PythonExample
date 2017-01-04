#define _NET_STP_H
struct stp_proto ;
extern int stp_proto_register(const struct stp_proto *proto);
extern void stp_proto_unregister(const struct stp_proto *proto);
