enum cipher rt2x00crypto_key_to_cipher(struct ieee80211_key_conf *key)
void rt2x00crypto_create_tx_descriptor(struct queue_entry *entry,
struct txentry_desc *txdesc)
unsigned int rt2x00crypto_tx_overhead(struct rt2x00_dev *rt2x00dev,
struct sk_buff *skb)
void rt2x00crypto_tx_copy_iv(struct sk_buff *skb, struct txentry_desc *txdesc)
void rt2x00crypto_tx_remove_iv(struct sk_buff *skb, struct txentry_desc *txdesc)
void rt2x00crypto_tx_insert_iv(struct sk_buff *skb, unsigned int header_length)
void rt2x00crypto_rx_insert_iv(struct sk_buff *skb,
unsigned int header_length,
struct rxdone_entry_desc *rxdesc)
