static const struct radiotap_align_size rtap_namespace_sizes[] = ;
static const struct ieee80211_radiotap_namespace radiotap_ns = ;
int ieee80211_radiotap_iterator_init(
struct ieee80211_radiotap_iterator *iterator,
struct ieee80211_radiotap_header *radiotap_header,
int max_length, const struct ieee80211_radiotap_vendor_namespaces *vns)
EXPORT_SYMBOL(ieee80211_radiotap_iterator_init);
static void find_ns(struct ieee80211_radiotap_iterator *iterator,
uint32_t oui, uint8_t subns)
int ieee80211_radiotap_iterator_next(
struct ieee80211_radiotap_iterator *iterator)
EXPORT_SYMBOL(ieee80211_radiotap_iterator_next);
