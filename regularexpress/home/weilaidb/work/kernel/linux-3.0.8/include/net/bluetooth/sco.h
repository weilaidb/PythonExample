#define __SCO_H
#define SCO_DEFAULT_MTU		500
#define SCO_DEFAULT_FLUSH_TO	0xFFFF
#define SCO_CONN_TIMEOUT	(HZ * 40)
#define SCO_DISCONN_TIMEOUT	(HZ * 2)
#define SCO_CONN_IDLE_TIMEOUT	(HZ * 60)
struct sockaddr_sco ;
#define SCO_OPTIONS	0x01
struct sco_options ;
#define SCO_CONNINFO	0x02
struct sco_conninfo ;
struct sco_conn ;
#define sco_conn_lock(c)	spin_lock(&c->lock);
#define sco_conn_unlock(c)	spin_unlock(&c->lock);
#define sco_pi(sk) ((struct sco_pinfo *) sk)
struct sco_pinfo ;
