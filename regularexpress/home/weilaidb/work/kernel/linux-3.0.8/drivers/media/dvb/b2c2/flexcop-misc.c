void flexcop_determine_revision(struct flexcop_device *fc)
static const char *flexcop_revision_names[] = ;
static const char *flexcop_device_names[] = ;
static const char *flexcop_bus_names[] = ;
void flexcop_device_name(struct flexcop_device *fc,
const char *prefix, const char *suffix)
void flexcop_dump_reg(struct flexcop_device *fc,
flexcop_ibi_register reg, int num)
EXPORT_SYMBOL(flexcop_dump_reg);
