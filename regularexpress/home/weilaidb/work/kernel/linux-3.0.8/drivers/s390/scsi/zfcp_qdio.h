#define ZFCP_QDIO_H
#define ZFCP_QDIO_SBALE_LEN	PAGE_SIZE
#define ZFCP_QDIO_MAX_SBALES_PER_SBAL	(QDIO_MAX_ELEMENTS_PER_BUFFER - 1)
#define ZFCP_QDIO_LAST_SBALE_PER_SBAL	(ZFCP_QDIO_MAX_SBALES_PER_SBAL - 1)
#define ZFCP_QDIO_MAX_SBALS_PER_REQ	36
#define ZFCP_QDIO_MAX_SBALES_PER_REQ     \
(ZFCP_QDIO_MAX_SBALS_PER_REQ * ZFCP_QDIO_MAX_SBALES_PER_SBAL - 2)
struct zfcp_qdio ;
struct zfcp_qdio_req ;
static inline struct qdio_buffer_element *
zfcp_qdio_sbale_req(struct zfcp_qdio *qdio, struct zfcp_qdio_req *q_req)
static inline struct qdio_buffer_element *
zfcp_qdio_sbale_curr(struct zfcp_qdio *qdio, struct zfcp_qdio_req *q_req)
static inline
void zfcp_qdio_req_init(struct zfcp_qdio *qdio, struct zfcp_qdio_req *q_req,
unsigned long req_id, u8 sbtype, void *data, u32 len)
static inline
void zfcp_qdio_fill_next(struct zfcp_qdio *qdio, struct zfcp_qdio_req *q_req,
void *data, u32 len)
static inline
void zfcp_qdio_set_sbale_last(struct zfcp_qdio *qdio,
struct zfcp_qdio_req *q_req)
static inline
int zfcp_qdio_sg_one_sbale(struct scatterlist *sg)
static inline
void zfcp_qdio_skip_to_last_sbale(struct zfcp_qdio_req *q_req)
static inline
void zfcp_qdio_sbal_limit(struct zfcp_qdio *qdio,
struct zfcp_qdio_req *q_req, int max_sbals)
static inline
void zfcp_qdio_set_data_div(struct zfcp_qdio *qdio,
struct zfcp_qdio_req *q_req, u32 count)
