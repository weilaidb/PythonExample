static void rose_ftimer_expiry(unsigned long);
static void rose_t0timer_expiry(unsigned long);
static void rose_transmit_restart_confirmation(struct rose_neigh *neigh);
static void rose_transmit_restart_request(struct rose_neigh *neigh);
void rose_start_ftimer(struct rose_neigh *neigh)
static void rose_start_t0timer(struct rose_neigh *neigh)
void rose_stop_ftimer(struct rose_neigh *neigh)
void rose_stop_t0timer(struct rose_neigh *neigh)
int rose_ftimer_running(struct rose_neigh *neigh)
static int rose_t0timer_running(struct rose_neigh *neigh)
static void rose_ftimer_expiry(unsigned long param)
static void rose_t0timer_expiry(unsigned long param)
static int rose_send_frame(struct sk_buff *skb, struct rose_neigh *neigh)
static int rose_link_up(struct rose_neigh *neigh)
void rose_link_rx_restart(struct sk_buff *skb, struct rose_neigh *neigh, unsigned short frametype)
static void rose_transmit_restart_request(struct rose_neigh *neigh)
static void rose_transmit_restart_confirmation(struct rose_neigh *neigh)
void rose_transmit_clear_request(struct rose_neigh *neigh, unsigned int lci, unsigned char cause, unsigned char diagnostic)
void rose_transmit_link(struct sk_buff *skb, struct rose_neigh *neigh)
