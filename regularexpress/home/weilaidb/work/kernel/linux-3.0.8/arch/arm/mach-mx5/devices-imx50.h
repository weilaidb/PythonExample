extern const struct imx_imx_uart_1irq_data imx50_imx_uart_data[];
#define imx50_add_imx_uart(id, pdata)	\
imx_add_imx_uart_1irq(&imx50_imx_uart_data[id], pdata)
extern const struct imx_fec_data imx50_fec_data;
#define imx50_add_fec(pdata)	\
imx_add_fec(&imx50_fec_data, pdata)
extern const struct imx_imx_i2c_data imx50_imx_i2c_data[];
#define imx50_add_imx_i2c(id, pdata)	\
imx_add_imx_i2c(&imx50_imx_i2c_data[id], pdata)
