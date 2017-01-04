#define IRLAN_FILTER_H
void irlan_check_command_param(struct irlan_cb *self, char *param,
char *value);
void irlan_filter_request(struct irlan_cb *self, struct sk_buff *skb);
void irlan_print_filter(struct seq_file *seq, int filter_type);
