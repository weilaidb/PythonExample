#define SOC_MEDIABUS_H
enum soc_mbus_packing ;
enum soc_mbus_order ;
struct soc_mbus_pixelfmt ;
struct soc_mbus_lookup ;
const struct soc_mbus_pixelfmt *soc_mbus_find_fmtdesc(
enum v4l2_mbus_pixelcode code,
const struct soc_mbus_lookup *lookup,
int n);
const struct soc_mbus_pixelfmt *soc_mbus_get_fmtdesc(
enum v4l2_mbus_pixelcode code);
s32 soc_mbus_bytes_per_line(u32 width, const struct soc_mbus_pixelfmt *mf);
int soc_mbus_samples_per_pixel(const struct soc_mbus_pixelfmt *mf,
unsigned int *numerator, unsigned int *denominator);
