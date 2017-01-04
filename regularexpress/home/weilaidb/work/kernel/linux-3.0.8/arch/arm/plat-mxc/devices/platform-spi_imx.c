#define imx_spi_imx_data_entry_single(soc, type, _devid, _id, hwid, _size) \
#define imx_spi_imx_data_entry(soc, type, devid, id, hwid, size)	\
[id] = imx_spi_imx_data_entry_single(soc, type, devid, id, hwid, size)
const struct imx_spi_imx_data imx1_cspi_data[] __initconst = ;
const struct imx_spi_imx_data imx21_cspi_data[] __initconst = ;
const struct imx_spi_imx_data imx25_cspi_data[] __initconst = ;
const struct imx_spi_imx_data imx27_cspi_data[] __initconst = ;
const struct imx_spi_imx_data imx31_cspi_data[] __initconst = ;
const struct imx_spi_imx_data imx35_cspi_data[] __initconst = ;
const struct imx_spi_imx_data imx51_cspi_data __initconst =
imx_spi_imx_data_entry_single(MX51, CSPI, "imx51-cspi", 2, , SZ_4K);
const struct imx_spi_imx_data imx51_ecspi_data[] __initconst = ;
const struct imx_spi_imx_data imx53_cspi_data __initconst =
imx_spi_imx_data_entry_single(MX53, CSPI, "imx53-cspi", 0, , SZ_4K);
const struct imx_spi_imx_data imx53_ecspi_data[] __initconst = ;
struct platform_device *__init imx_add_spi_imx(
const struct imx_spi_imx_data *data,
const struct spi_imx_master *pdata)
