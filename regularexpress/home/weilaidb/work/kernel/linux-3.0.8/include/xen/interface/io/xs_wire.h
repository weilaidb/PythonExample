#define _XS_WIRE_H
enum xsd_sockmsg_type
;
#define XS_WRITE_NONE "NONE"
#define XS_WRITE_CREATE "CREATE"
#define XS_WRITE_CREATE_EXCL "CREATE|EXCL"
struct xsd_errors
;
#define XSD_ERROR(x)
static struct xsd_errors xsd_errors[] __attribute__((unused)) = ;
struct xsd_sockmsg
;
enum xs_watch_type
;
#define XENSTORE_RING_SIZE 1024
typedef uint32_t XENSTORE_RING_IDX;
#define MASK_XENSTORE_IDX(idx) ((idx) & (XENSTORE_RING_SIZE-1))
struct xenstore_domain_interface ;
