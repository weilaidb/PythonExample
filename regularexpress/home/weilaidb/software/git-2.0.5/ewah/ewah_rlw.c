static inline int next_word(struct rlw_iterator *it)
void rlwit_init(struct rlw_iterator *it, struct ewah_bitmap *from_ewah)
void rlwit_discard_first_words(struct rlw_iterator *it, size_t x)
size_t rlwit_discharge(
struct rlw_iterator *it, struct ewah_bitmap *out, size_t max, int negate)
void rlwit_discharge_empty(struct rlw_iterator *it, struct ewah_bitmap *out)
