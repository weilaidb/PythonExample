#define NR_AIRQS		32
#define NR_AIRQS_PER_WORD	sizeof(unsigned long)
#define NR_AIRQ_WORDS		(NR_AIRQS / NR_AIRQS_PER_WORD)
union indicator_t  __attribute__((packed));
struct airq_t ;
static union indicator_t indicators[MAX_ISC+1];
static struct airq_t *airqs[MAX_ISC+1][NR_AIRQS];
static int register_airq(struct airq_t *airq, u8 isc)
void *s390_register_adapter_interrupt(adapter_int_handler_t handler,
void *drv_data, u8 isc)
EXPORT_SYMBOL(s390_register_adapter_interrupt);
void s390_unregister_adapter_interrupt(void *ind, u8 isc)
EXPORT_SYMBOL(s390_unregister_adapter_interrupt);
#define INDICATOR_MASK	(0xffUL << ((NR_AIRQS_PER_WORD - 1) * 8))
void do_adapter_IO(u8 isc)
