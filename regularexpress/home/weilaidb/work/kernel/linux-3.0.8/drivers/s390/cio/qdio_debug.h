#define QDIO_DEBUG_H
#define QDIO_DBF_LEN	16
extern debug_info_t *qdio_dbf_setup;
extern debug_info_t *qdio_dbf_error;
static inline int qdio_dbf_passes(debug_info_t *dbf_grp, int level)
#define DBF_ERR		3
#define DBF_WARN	4
#define DBF_INFO	6
#undef DBF_EVENT
#undef DBF_ERROR
#undef DBF_DEV_EVENT
#define DBF_EVENT(text...) \
do  while (0)
#define DBF_HEX(addr, len) \
do  while (0)
#define DBF_ERROR(text...) \
do  while (0)
#define DBF_ERROR_HEX(addr, len) \
do  while (0)
#define DBF_DEV_EVENT(level, device, text...) \
do  while (0)
#define DBF_DEV_HEX(level, device, addr, len) \
do  while (0)
void qdio_allocate_dbf(struct qdio_initialize *init_data,
struct qdio_irq *irq_ptr);
void qdio_setup_debug_entries(struct qdio_irq *irq_ptr,
struct ccw_device *cdev);
void qdio_shutdown_debug_entries(struct qdio_irq *irq_ptr,
struct ccw_device *cdev);
int qdio_debug_init(void);
void qdio_debug_exit(void);
