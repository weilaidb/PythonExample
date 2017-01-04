#define ICD_PARTS
#define	VALID_PARTITION(pi,hdsiz)					     \
(((pi)->flg & 1) &&							     \
isalnum((pi)->id[0]) && isalnum((pi)->id[1]) && isalnum((pi)->id[2]) && \
be32_to_cpu((pi)->st) <= (hdsiz) &&				     \
be32_to_cpu((pi)->st) + be32_to_cpu((pi)->siz) <= (hdsiz))
static inline int OK_id(char *s)
int atari_partition(struct parsed_partitions *state)
