struct pcap_data ;
extern const struct net_user_info pcap_user_info;
extern int pcap_user_read(int fd, void *buf, int len, struct pcap_data *pri);
