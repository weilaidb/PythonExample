#define imx_imx_i2c_data_entry_single(soc, _id, _hwid, _size)		\
#define imx_imx_i2c_data_entry(soc, _id, _hwid, _size)			\
[_id] = imx_imx_i2c_data_entry_single(soc, _id, _hwid, _size)
const struct imx_imx_i2c_data imx1_imx_i2c_data __initconst =
imx_imx_i2c_data_entry_single(MX1, 0, , SZ_4K);
const struct imx_imx_i2c_data imx21_imx_i2c_data __initconst =
imx_imx_i2c_data_entry_single(MX21, 0, , SZ_4K);
const struct imx_imx_i2c_data imx25_imx_i2c_data[] __initconst = ;
const struct imx_imx_i2c_data imx27_imx_i2c_data[] __initconst = ;
const struct imx_imx_i2c_data imx31_imx_i2c_data[] __initconst = ;
const struct imx_imx_i2c_data imx35_imx_i2c_data[] __initconst = ;
const struct imx_imx_i2c_data imx50_imx_i2c_data[] __initconst = ;
const struct imx_imx_i2c_data imx51_imx_i2c_data[] __initconst = ;
const struct imx_imx_i2c_data imx53_imx_i2c_data[] __initconst = ;
struct platform_device *__init imx_add_imx_i2c(
const struct imx_imx_i2c_data *data,
const struct imxi2c_platform_data *pdata)
