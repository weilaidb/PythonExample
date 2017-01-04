#define _MBUF_
#define M_SIZE	4504
#define MAX_MBUF	4
#define sm_next         m_next
#define sm_off          m_off
#define sm_len          m_len
#define sm_data         m_data
#define SMbuf           Mbuf
#define mtod		smtod
#define mtodoff		smtodoff
struct s_mbuf  ;
typedef struct s_mbuf SMbuf ;
#define	smtod(x,t)	((t)((x)->sm_data + (x)->sm_off))
#define	smtodoff(x,t,o)	((t)((x)->sm_data + (o)))
