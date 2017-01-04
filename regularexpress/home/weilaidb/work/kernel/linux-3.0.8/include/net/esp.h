#define _NET_ESP_H
struct crypto_aead;
struct esp_data ;
extern void *pskb_put(struct sk_buff *skb, struct sk_buff *tail, int len);
struct ip_esp_hdr;
static inline struct ip_esp_hdr *ip_esp_hdr(const struct sk_buff *skb)
