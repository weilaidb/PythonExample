#define _ASM_POWERPC_ISERIES_VIO_H
#define VIO_MAX_SUBTYPES 8
#define VIOMAXBLOCKDMA	12
struct open_data ;
struct rw_data ;
struct vioblocklpevent ;
#define vioblockflags_ro   0x0001
enum vioblocksubtype ;
struct viocdlpevent ;
enum viocdsubtype ;
struct viotapelpevent ;
enum viotapesubtype ;
typedef void (vio_event_handler_t) (struct HvLpEvent * event);
extern int viopath_open(HvLpIndex remoteLp, int subtype, int numReq);
extern int viopath_close(HvLpIndex remoteLp, int subtype, int numReq);
extern int vio_setHandler(int subtype, vio_event_handler_t * beh);
extern int vio_clearHandler(int subtype);
extern int viopath_isactive(HvLpIndex lp);
extern HvLpInstanceId viopath_sourceinst(HvLpIndex lp);
extern HvLpInstanceId viopath_targetinst(HvLpIndex lp);
extern void vio_set_hostlp(void);
extern void *vio_get_event_buffer(int subtype);
extern void vio_free_event_buffer(int subtype, void *buffer);
extern struct vio_dev *vio_create_viodasd(u32 unit);
extern HvLpIndex viopath_hostLp;
extern HvLpIndex viopath_ourLp;
#define VIOCHAR_MAX_DATA	200
#define VIOMAJOR_SUBTYPE_MASK	0xff00
#define VIOMINOR_SUBTYPE_MASK	0x00ff
#define VIOMAJOR_SUBTYPE_SHIFT	8
#define VIOVERSION		0x0101
struct vio_error_entry ;
extern const struct vio_error_entry *vio_lookup_rc(
const struct vio_error_entry *local_table, u16 rc);
enum viosubtypes ;
enum vioconfigsubtype ;
enum viorc ;
struct viocharlpevent ;
#define VIOCHAR_WINDOW		10
enum viocharsubtype ;
enum viochar_rc ;
