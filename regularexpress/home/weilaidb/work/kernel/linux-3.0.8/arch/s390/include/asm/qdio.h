#define __QDIO_H__
#define QDIO_MAX_QUEUES_PER_IRQ		4
#define QDIO_MAX_BUFFERS_PER_Q		128
#define QDIO_MAX_BUFFERS_MASK		(QDIO_MAX_BUFFERS_PER_Q - 1)
#define QDIO_MAX_ELEMENTS_PER_BUFFER	16
#define QDIO_SBAL_SIZE			256
#define QDIO_QETH_QFMT			0
#define QDIO_ZFCP_QFMT			1
#define QDIO_IQDIO_QFMT			2
struct qdesfmt0  __attribute__ ((packed));
struct qdr  __attribute__ ((packed, aligned(4096)));
#define QIB_AC_OUTBOUND_PCI_SUPPORTED	0x40
#define QIB_RFLAGS_ENABLE_QEBSM		0x80
#define QIB_RFLAGS_ENABLE_DATA_DIV	0x02
struct qib  __attribute__ ((packed, aligned(256)));
struct slibe ;
struct slib  __attribute__ ((packed, aligned(2048)));
#define SBAL_EFLAGS_LAST_ENTRY		0x40
#define SBAL_EFLAGS_CONTIGUOUS		0x20
#define SBAL_EFLAGS_FIRST_FRAG		0x04
#define SBAL_EFLAGS_MIDDLE_FRAG		0x08
#define SBAL_EFLAGS_LAST_FRAG		0x0c
#define SBAL_EFLAGS_MASK		0x6f
#define SBAL_SFLAGS0_PCI_REQ		0x40
#define SBAL_SFLAGS0_DATA_CONTINUATION	0x20
#define SBAL_SFLAGS0_TYPE_STATUS	0x00
#define SBAL_SFLAGS0_TYPE_WRITE		0x08
#define SBAL_SFLAGS0_TYPE_READ		0x10
#define SBAL_SFLAGS0_TYPE_WRITE_READ	0x18
#define SBAL_SFLAGS0_MORE_SBALS		0x04
#define SBAL_SFLAGS0_COMMAND		0x02
#define SBAL_SFLAGS0_LAST_SBAL		0x00
#define SBAL_SFLAGS0_ONLY_SBAL		SBAL_SFLAGS0_COMMAND
#define SBAL_SFLAGS0_MIDDLE_SBAL	SBAL_SFLAGS0_MORE_SBALS
#define SBAL_SFLAGS0_FIRST_SBAL (SBAL_SFLAGS0_MORE_SBALS | SBAL_SFLAGS0_COMMAND)
struct qdio_buffer_element  __attribute__ ((packed, aligned(16)));
struct qdio_buffer  __attribute__ ((packed, aligned(256)));
struct sl_element  __attribute__ ((packed));
struct sl  __attribute__ ((packed, aligned(1024)));
struct slsb  __attribute__ ((packed, aligned(256)));
#define CHSC_AC2_DATA_DIV_AVAILABLE	0x0010
#define CHSC_AC2_DATA_DIV_ENABLED	0x0002
struct qdio_ssqd_desc  __attribute__ ((packed));
typedef void qdio_handler_t(struct ccw_device *, unsigned int, int,
int, int, unsigned long);
#define QDIO_ERROR_SIGA_TARGET			0x02
#define QDIO_ERROR_SIGA_ACCESS_EXCEPTION	0x10
#define QDIO_ERROR_SIGA_BUSY			0x20
#define QDIO_ERROR_ACTIVATE_CHECK_CONDITION	0x40
#define QDIO_ERROR_SLSB_STATE			0x80
#define QDIO_FLAG_CLEANUP_USING_CLEAR		0x01
#define QDIO_FLAG_CLEANUP_USING_HALT		0x02
struct qdio_initialize ;
#define QDIO_STATE_INACTIVE		0x00000002
#define QDIO_STATE_ESTABLISHED		0x00000004
#define QDIO_STATE_ACTIVE		0x00000008
#define QDIO_STATE_STOPPED		0x00000010
#define QDIO_FLAG_SYNC_INPUT		0x01
#define QDIO_FLAG_SYNC_OUTPUT		0x02
#define QDIO_FLAG_PCI_OUT		0x10
extern int qdio_allocate(struct qdio_initialize *);
extern int qdio_establish(struct qdio_initialize *);
extern int qdio_activate(struct ccw_device *);
extern int do_QDIO(struct ccw_device *, unsigned int, int, unsigned int,
unsigned int);
extern int qdio_start_irq(struct ccw_device *, int);
extern int qdio_stop_irq(struct ccw_device *, int);
extern int qdio_get_next_buffers(struct ccw_device *, int, int *, int *);
extern int qdio_shutdown(struct ccw_device *, int);
extern int qdio_free(struct ccw_device *);
extern int qdio_get_ssqd_desc(struct ccw_device *, struct qdio_ssqd_desc *);
