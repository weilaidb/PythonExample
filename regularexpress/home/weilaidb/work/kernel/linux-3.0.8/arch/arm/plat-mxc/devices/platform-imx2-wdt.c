#define imx_imx2_wdt_data_entry_single(soc, _id, _hwid, _size)		\
#define imx_imx2_wdt_data_entry(soc, _id, _hwid, _size)			\
[_id] = imx_imx2_wdt_data_entry_single(soc, _id, _hwid, _size)
const struct imx_imx2_wdt_data imx21_imx2_wdt_data __initconst =
imx_imx2_wdt_data_entry_single(MX21, 0, , SZ_4K);
const struct imx_imx2_wdt_data imx25_imx2_wdt_data __initconst =
imx_imx2_wdt_data_entry_single(MX25, 0, , SZ_16K);
const struct imx_imx2_wdt_data imx27_imx2_wdt_data __initconst =
imx_imx2_wdt_data_entry_single(MX27, 0, , SZ_4K);
const struct imx_imx2_wdt_data imx31_imx2_wdt_data __initconst =
imx_imx2_wdt_data_entry_single(MX31, 0, , SZ_16K);
const struct imx_imx2_wdt_data imx35_imx2_wdt_data __initconst =
imx_imx2_wdt_data_entry_single(MX35, 0, , SZ_16K);
const struct imx_imx2_wdt_data imx51_imx2_wdt_data[] __initconst = ;
const struct imx_imx2_wdt_data imx53_imx2_wdt_data[] __initconst = ;
struct platform_device *__init imx_add_imx2_wdt(
const struct imx_imx2_wdt_data *data)
