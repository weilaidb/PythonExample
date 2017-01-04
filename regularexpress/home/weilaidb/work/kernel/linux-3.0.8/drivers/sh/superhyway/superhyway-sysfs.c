#define superhyway_ro_attr(name, fmt, field)				\
static ssize_t name##_show(struct device *dev, struct device_attribute *attr, char *buf)		\
superhyway_ro_attr(perr_flags, "0x%02x\n", vcr.perr_flags);
superhyway_ro_attr(merr_flags, "0x%02x\n", vcr.merr_flags);
superhyway_ro_attr(mod_vers, "0x%04x\n", vcr.mod_vers);
superhyway_ro_attr(mod_id, "0x%04x\n", vcr.mod_id);
superhyway_ro_attr(bot_mb, "0x%02x\n", vcr.bot_mb);
superhyway_ro_attr(top_mb, "0x%02x\n", vcr.top_mb);
superhyway_ro_attr(resource, "0x%08lx\n", resource[0].start);
struct device_attribute superhyway_dev_attrs[] = ;
