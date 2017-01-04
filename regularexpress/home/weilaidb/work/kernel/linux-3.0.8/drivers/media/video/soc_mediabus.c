static const struct soc_mbus_lookup mbus_fmt[] = ;
int soc_mbus_samples_per_pixel(const struct soc_mbus_pixelfmt *mf,
unsigned int *numerator, unsigned int *denominator)
EXPORT_SYMBOL(soc_mbus_samples_per_pixel);
s32 soc_mbus_bytes_per_line(u32 width, const struct soc_mbus_pixelfmt *mf)
EXPORT_SYMBOL(soc_mbus_bytes_per_line);
const struct soc_mbus_pixelfmt *soc_mbus_find_fmtdesc(
enum v4l2_mbus_pixelcode code,
const struct soc_mbus_lookup *lookup,
int n)
EXPORT_SYMBOL(soc_mbus_find_fmtdesc);
const struct soc_mbus_pixelfmt *soc_mbus_get_fmtdesc(
enum v4l2_mbus_pixelcode code)
EXPORT_SYMBOL(soc_mbus_get_fmtdesc);
static int __init soc_mbus_init(void)
static void __exit soc_mbus_exit(void)
module_init(soc_mbus_init);
module_exit(soc_mbus_exit);
MODULE_DESCRIPTION("soc-camera media bus interface");
MODULE_AUTHOR("Guennadi Liakhovetski <g.liakhovetski@gmx.de>");
MODULE_LICENSE("GPL v2");
