__be32 *
xdr_encode_netobj(__be32 *p, const struct xdr_netobj *obj)
EXPORT_SYMBOL_GPL(xdr_encode_netobj);
__be32 *
xdr_decode_netobj(__be32 *p, struct xdr_netobj *obj)
EXPORT_SYMBOL_GPL(xdr_decode_netobj);
__be32 *xdr_encode_opaque_fixed(__be32 *p, const void *ptr, unsigned int nbytes)
EXPORT_SYMBOL_GPL(xdr_encode_opaque_fixed);
__be32 *xdr_encode_opaque(__be32 *p, const void *ptr, unsigned int nbytes)
EXPORT_SYMBOL_GPL(xdr_encode_opaque);
__be32 *
xdr_encode_string(__be32 *p, const char *string)
EXPORT_SYMBOL_GPL(xdr_encode_string);
__be32 *
xdr_decode_string_inplace(__be32 *p, char **sp,
unsigned int *lenp, unsigned int maxlen)
EXPORT_SYMBOL_GPL(xdr_decode_string_inplace);
void
xdr_terminate_string(struct xdr_buf *buf, const u32 len)
EXPORT_SYMBOL(xdr_terminate_string);
void
xdr_encode_pages(struct xdr_buf *xdr, struct page **pages, unsigned int base,
unsigned int len)
EXPORT_SYMBOL_GPL(xdr_encode_pages);
void
xdr_inline_pages(struct xdr_buf *xdr, unsigned int offset,
struct page **pages, unsigned int base, unsigned int len)
EXPORT_SYMBOL_GPL(xdr_inline_pages);
static void
_shift_data_right_pages(struct page **pages, size_t pgto_base,
size_t pgfrom_base, size_t len)
static void
_copy_to_pages(struct page **pages, size_t pgbase, const char *p, size_t len)
static void
_copy_from_pages(char *p, struct page **pages, size_t pgbase, size_t len)
static void
xdr_shrink_bufhead(struct xdr_buf *buf, size_t len)
static void
xdr_shrink_pagelen(struct xdr_buf *buf, size_t len)
void
xdr_shift_buf(struct xdr_buf *buf, size_t len)
EXPORT_SYMBOL_GPL(xdr_shift_buf);
void xdr_init_encode(struct xdr_stream *xdr, struct xdr_buf *buf, __be32 *p)
EXPORT_SYMBOL_GPL(xdr_init_encode);
__be32 * xdr_reserve_space(struct xdr_stream *xdr, size_t nbytes)
EXPORT_SYMBOL_GPL(xdr_reserve_space);
void xdr_write_pages(struct xdr_stream *xdr, struct page **pages, unsigned int base,
unsigned int len)
EXPORT_SYMBOL_GPL(xdr_write_pages);
static void xdr_set_iov(struct xdr_stream *xdr, struct kvec *iov,
__be32 *p, unsigned int len)
static int xdr_set_page_base(struct xdr_stream *xdr,
unsigned int base, unsigned int len)
static void xdr_set_next_page(struct xdr_stream *xdr)
static bool xdr_set_next_buffer(struct xdr_stream *xdr)
void xdr_init_decode(struct xdr_stream *xdr, struct xdr_buf *buf, __be32 *p)
EXPORT_SYMBOL_GPL(xdr_init_decode);
void xdr_init_decode_pages(struct xdr_stream *xdr, struct xdr_buf *buf,
struct page **pages, unsigned int len)
EXPORT_SYMBOL_GPL(xdr_init_decode_pages);
static __be32 * __xdr_inline_decode(struct xdr_stream *xdr, size_t nbytes)
void xdr_set_scratch_buffer(struct xdr_stream *xdr, void *buf, size_t buflen)
EXPORT_SYMBOL_GPL(xdr_set_scratch_buffer);
static __be32 *xdr_copy_to_scratch(struct xdr_stream *xdr, size_t nbytes)
__be32 * xdr_inline_decode(struct xdr_stream *xdr, size_t nbytes)
EXPORT_SYMBOL_GPL(xdr_inline_decode);
void xdr_read_pages(struct xdr_stream *xdr, unsigned int len)
EXPORT_SYMBOL_GPL(xdr_read_pages);
void xdr_enter_page(struct xdr_stream *xdr, unsigned int len)
EXPORT_SYMBOL_GPL(xdr_enter_page);
static struct kvec empty_iov = ;
void
xdr_buf_from_iov(struct kvec *iov, struct xdr_buf *buf)
EXPORT_SYMBOL_GPL(xdr_buf_from_iov);
int
xdr_buf_subsegment(struct xdr_buf *buf, struct xdr_buf *subbuf,
unsigned int base, unsigned int len)
EXPORT_SYMBOL_GPL(xdr_buf_subsegment);
static void __read_bytes_from_xdr_buf(struct xdr_buf *subbuf, void *obj, unsigned int len)
int read_bytes_from_xdr_buf(struct xdr_buf *buf, unsigned int base, void *obj, unsigned int len)
EXPORT_SYMBOL_GPL(read_bytes_from_xdr_buf);
static void __write_bytes_to_xdr_buf(struct xdr_buf *subbuf, void *obj, unsigned int len)
int write_bytes_to_xdr_buf(struct xdr_buf *buf, unsigned int base, void *obj, unsigned int len)
EXPORT_SYMBOL_GPL(write_bytes_to_xdr_buf);
int
xdr_decode_word(struct xdr_buf *buf, unsigned int base, u32 *obj)
EXPORT_SYMBOL_GPL(xdr_decode_word);
int
xdr_encode_word(struct xdr_buf *buf, unsigned int base, u32 obj)
EXPORT_SYMBOL_GPL(xdr_encode_word);
int xdr_buf_read_netobj(struct xdr_buf *buf, struct xdr_netobj *obj, unsigned int offset)
EXPORT_SYMBOL_GPL(xdr_buf_read_netobj);
static int
xdr_xcode_array2(struct xdr_buf *buf, unsigned int base,
struct xdr_array2_desc *desc, int encode)
int
xdr_decode_array2(struct xdr_buf *buf, unsigned int base,
struct xdr_array2_desc *desc)
EXPORT_SYMBOL_GPL(xdr_decode_array2);
int
xdr_encode_array2(struct xdr_buf *buf, unsigned int base,
struct xdr_array2_desc *desc)
EXPORT_SYMBOL_GPL(xdr_encode_array2);
int
xdr_process_buf(struct xdr_buf *buf, unsigned int offset, unsigned int len,
int (*actor)(struct scatterlist *, void *), void *data)
EXPORT_SYMBOL_GPL(xdr_process_buf);
