#define imx_imx_uart_3irq_data_entry(soc, _id, _hwid, _size)		\
[_id] =
#define imx_imx_uart_1irq_data_entry(soc, _id, _hwid, _size)		\
[_id] =
const struct imx_imx_uart_3irq_data imx1_imx_uart_data[] __initconst = ;
const struct imx_imx_uart_1irq_data imx21_imx_uart_data[] __initconst = ;
const struct imx_imx_uart_1irq_data imx25_imx_uart_data[] __initconst = ;
const struct imx_imx_uart_1irq_data imx27_imx_uart_data[] __initconst = ;
const struct imx_imx_uart_1irq_data imx31_imx_uart_data[] __initconst = ;
const struct imx_imx_uart_1irq_data imx35_imx_uart_data[] __initconst = ;
const struct imx_imx_uart_1irq_data imx50_imx_uart_data[] __initconst = ;
const struct imx_imx_uart_1irq_data imx51_imx_uart_data[] __initconst = ;
const struct imx_imx_uart_1irq_data imx53_imx_uart_data[] __initconst = ;
struct platform_device *__init imx_add_imx_uart_3irq(
const struct imx_imx_uart_3irq_data *data,
const struct imxuart_platform_data *pdata)
struct platform_device *__init imx_add_imx_uart_1irq(
const struct imx_imx_uart_1irq_data *data,
const struct imxuart_platform_data *pdata)
