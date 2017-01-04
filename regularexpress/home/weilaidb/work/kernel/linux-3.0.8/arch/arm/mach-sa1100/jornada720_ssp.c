static DEFINE_SPINLOCK(jornada_ssp_lock);
static unsigned long jornada_ssp_flags;
u8 inline jornada_ssp_reverse(u8 byte)
;
EXPORT_SYMBOL(jornada_ssp_reverse);
int jornada_ssp_byte(u8 byte)
;
EXPORT_SYMBOL(jornada_ssp_byte);
int jornada_ssp_inout(u8 byte)
;
EXPORT_SYMBOL(jornada_ssp_inout);
void jornada_ssp_start(void)
;
EXPORT_SYMBOL(jornada_ssp_start);
void jornada_ssp_end(void)
;
EXPORT_SYMBOL(jornada_ssp_end);
static int __devinit jornada_ssp_probe(struct platform_device *dev)
;
static int jornada_ssp_remove(struct platform_device *dev)
;
struct platform_driver jornadassp_driver = ;
static int __init jornada_ssp_init(void)
