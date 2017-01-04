#define _NETROM_H
#define	NR_NETWORK_LEN			15
#define	NR_TRANSPORT_LEN		5
#define	NR_PROTO_IP			0x0C
#define	NR_PROTOEXT			0x00
#define	NR_CONNREQ			0x01
#define	NR_CONNACK			0x02
#define	NR_DISCREQ			0x03
#define	NR_DISCACK			0x04
#define	NR_INFO				0x05
#define	NR_INFOACK			0x06
#define	NR_RESET			0x07
#define	NR_CHOKE_FLAG			0x80
#define	NR_NAK_FLAG			0x40
#define	NR_MORE_FLAG			0x20
enum ;
#define	NR_COND_ACK_PENDING		0x01
#define	NR_COND_REJECT			0x02
#define	NR_COND_PEER_RX_BUSY		0x04
#define	NR_COND_OWN_RX_BUSY		0x08
#define NR_DEFAULT_T1			120000
#define NR_DEFAULT_T2			5000
#define NR_DEFAULT_N2			3
#define	NR_DEFAULT_T4			180000
#define	NR_DEFAULT_IDLE			0
#define	NR_DEFAULT_WINDOW		4
#define	NR_DEFAULT_OBS			6
#define	NR_DEFAULT_QUAL			10
#define	NR_DEFAULT_TTL			16
#define	NR_DEFAULT_ROUTING		1
#define	NR_DEFAULT_FAILS		2
#define	NR_DEFAULT_RESET		0
#define NR_MODULUS 			256
#define NR_MAX_WINDOW_SIZE		127
#define	NR_MAX_PACKET_SIZE		236
struct nr_sock ;
#define nr_sk(sk) ((struct nr_sock *)(sk))
struct nr_neigh ;
struct nr_route ;
struct nr_node ;
#define nr_node_hold(__nr_node) \
atomic_inc(&((__nr_node)->refcount))
static __inline__ void nr_node_put(struct nr_node *nr_node)
#define nr_neigh_hold(__nr_neigh) \
atomic_inc(&((__nr_neigh)->refcount))
static __inline__ void nr_neigh_put(struct nr_neigh *nr_neigh)
static __inline__ void nr_node_lock(struct nr_node *nr_node)
static __inline__ void nr_node_unlock(struct nr_node *nr_node)
#define nr_neigh_for_each(__nr_neigh, node, list) \
hlist_for_each_entry(__nr_neigh, node, list, neigh_node)
#define nr_neigh_for_each_safe(__nr_neigh, node, node2, list) \
hlist_for_each_entry_safe(__nr_neigh, node, node2, list, neigh_node)
#define nr_node_for_each(__nr_node, node, list) \
hlist_for_each_entry(__nr_node, node, list, node_node)
#define nr_node_for_each_safe(__nr_node, node, node2, list) \
hlist_for_each_entry_safe(__nr_node, node, node2, list, node_node)
extern int  sysctl_netrom_default_path_quality;
extern int  sysctl_netrom_obsolescence_count_initialiser;
extern int  sysctl_netrom_network_ttl_initialiser;
extern int  sysctl_netrom_transport_timeout;
extern int  sysctl_netrom_transport_maximum_tries;
extern int  sysctl_netrom_transport_acknowledge_delay;
extern int  sysctl_netrom_transport_busy_delay;
extern int  sysctl_netrom_transport_requested_window_size;
extern int  sysctl_netrom_transport_no_activity_timeout;
extern int  sysctl_netrom_routing_control;
extern int  sysctl_netrom_link_fails_count;
extern int  sysctl_netrom_reset_circuit;
extern int  nr_rx_frame(struct sk_buff *, struct net_device *);
extern void nr_destroy_socket(struct sock *);
extern int  nr_rx_ip(struct sk_buff *, struct net_device *);
extern void nr_setup(struct net_device *);
extern int  nr_process_rx_frame(struct sock *, struct sk_buff *);
extern void nr_loopback_init(void);
extern void nr_loopback_clear(void);
extern int  nr_loopback_queue(struct sk_buff *);
extern void nr_output(struct sock *, struct sk_buff *);
extern void nr_send_nak_frame(struct sock *);
extern void nr_kick(struct sock *);
extern void nr_transmit_buffer(struct sock *, struct sk_buff *);
extern void nr_establish_data_link(struct sock *);
extern void nr_enquiry_response(struct sock *);
extern void nr_check_iframes_acked(struct sock *, unsigned short);
extern void nr_rt_device_down(struct net_device *);
extern struct net_device *nr_dev_first(void);
extern struct net_device *nr_dev_get(ax25_address *);
extern int  nr_rt_ioctl(unsigned int, void __user *);
extern void nr_link_failed(ax25_cb *, int);
extern int  nr_route_frame(struct sk_buff *, ax25_cb *);
extern const struct file_operations nr_nodes_fops;
extern const struct file_operations nr_neigh_fops;
extern void nr_rt_free(void);
extern void nr_clear_queues(struct sock *);
extern void nr_frames_acked(struct sock *, unsigned short);
extern void nr_requeue_frames(struct sock *);
extern int  nr_validate_nr(struct sock *, unsigned short);
extern int  nr_in_rx_window(struct sock *, unsigned short);
extern void nr_write_internal(struct sock *, int);
extern void __nr_transmit_reply(struct sk_buff *skb, int mine,
unsigned char cmdflags);
#define nr_transmit_refusal(skb, mine)					\
do  while (0)
#define nr_transmit_reset(skb, mine)					\
do  while (0)
extern void nr_disconnect(struct sock *, int);
extern void nr_init_timers(struct sock *sk);
extern void nr_start_heartbeat(struct sock *);
extern void nr_start_t1timer(struct sock *);
extern void nr_start_t2timer(struct sock *);
extern void nr_start_t4timer(struct sock *);
extern void nr_start_idletimer(struct sock *);
extern void nr_stop_heartbeat(struct sock *);
extern void nr_stop_t1timer(struct sock *);
extern void nr_stop_t2timer(struct sock *);
extern void nr_stop_t4timer(struct sock *);
extern void nr_stop_idletimer(struct sock *);
extern int  nr_t1timer_running(struct sock *);
extern void nr_register_sysctl(void);
extern void nr_unregister_sysctl(void);
