#define __NET_FRAG_H__
struct netns_frags ;
struct inet_frag_queue ;
#define INETFRAGS_HASHSZ		64
struct inet_frags ;
void inet_frags_init(struct inet_frags *);
void inet_frags_fini(struct inet_frags *);
void inet_frags_init_net(struct netns_frags *nf);
void inet_frags_exit_net(struct netns_frags *nf, struct inet_frags *f);
void inet_frag_kill(struct inet_frag_queue *q, struct inet_frags *f);
void inet_frag_destroy(struct inet_frag_queue *q,
struct inet_frags *f, int *work);
int inet_frag_evictor(struct netns_frags *nf, struct inet_frags *f);
struct inet_frag_queue *inet_frag_find(struct netns_frags *nf,
struct inet_frags *f, void *key, unsigned int hash)
__releases(&f->lock);
static inline void inet_frag_put(struct inet_frag_queue *q, struct inet_frags *f)
