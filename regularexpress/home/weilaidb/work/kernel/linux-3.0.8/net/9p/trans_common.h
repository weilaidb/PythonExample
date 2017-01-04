#define P9_IS_USER_CONTEXT (!segment_eq(get_fs(), KERNEL_DS))
struct trans_rpage_info ;
void p9_release_req_pages(struct trans_rpage_info *);
int p9_payload_gup(struct p9_req_t *, size_t *, int *, int, u8);
int p9_nr_pages(struct p9_req_t *);
