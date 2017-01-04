enum ;
enum ;
struct mthca_av ;
static enum ib_rate memfree_rate_to_ib(u8 mthca_rate, u8 port_rate)
static enum ib_rate tavor_rate_to_ib(u8 mthca_rate, u8 port_rate)
enum ib_rate mthca_rate_to_ib(struct mthca_dev *dev, u8 mthca_rate, u8 port)
static u8 ib_rate_to_memfree(u8 req_rate, u8 cur_rate)
static u8 ib_rate_to_tavor(u8 static_rate)
u8 mthca_get_rate(struct mthca_dev *dev, int static_rate, u8 port)
int mthca_create_ah(struct mthca_dev *dev,
struct mthca_pd *pd,
struct ib_ah_attr *ah_attr,
struct mthca_ah *ah)
int mthca_destroy_ah(struct mthca_dev *dev, struct mthca_ah *ah)
int mthca_ah_grh_present(struct mthca_ah *ah)
int mthca_read_ah(struct mthca_dev *dev, struct mthca_ah *ah,
struct ib_ud_header *header)
int mthca_ah_query(struct ib_ah *ibah, struct ib_ah_attr *attr)
int mthca_init_av_table(struct mthca_dev *dev)
void mthca_cleanup_av_table(struct mthca_dev *dev)
