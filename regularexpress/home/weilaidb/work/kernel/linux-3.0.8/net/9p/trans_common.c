void
p9_release_req_pages(struct trans_rpage_info *rpinfo)
EXPORT_SYMBOL(p9_release_req_pages);
int
p9_nr_pages(struct p9_req_t *req)
EXPORT_SYMBOL(p9_nr_pages);
int
p9_payload_gup(struct p9_req_t *req, size_t *pdata_off, int *pdata_len,
int nr_pages, u8 rw)
EXPORT_SYMBOL(p9_payload_gup);
