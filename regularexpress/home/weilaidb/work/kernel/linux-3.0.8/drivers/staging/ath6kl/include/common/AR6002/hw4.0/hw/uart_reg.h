#define _UART_REG_REG_H_
#define UART_CLKDIV_ADDRESS                      0x00000008
#define UART_CLKDIV_OFFSET                       0x00000008
#define UART_CLKDIV_CLK_SCALE_MSB                23
#define UART_CLKDIV_CLK_SCALE_LSB                16
#define UART_CLKDIV_CLK_SCALE_MASK               0x00ff0000
#define UART_CLKDIV_CLK_SCALE_GET(x)             (((x) & UART_CLKDIV_CLK_SCALE_MASK) >> UART_CLKDIV_CLK_SCALE_LSB)
#define UART_CLKDIV_CLK_SCALE_SET(x)             (((x) << UART_CLKDIV_CLK_SCALE_LSB) & UART_CLKDIV_CLK_SCALE_MASK)
#define UART_CLKDIV_CLK_STEP_MSB                 15
#define UART_CLKDIV_CLK_STEP_LSB                 0
#define UART_CLKDIV_CLK_STEP_MASK                0x0000ffff
#define UART_CLKDIV_CLK_STEP_GET(x)              (((x) & UART_CLKDIV_CLK_STEP_MASK) >> UART_CLKDIV_CLK_STEP_LSB)
#define UART_CLKDIV_CLK_STEP_SET(x)              (((x) << UART_CLKDIV_CLK_STEP_LSB) & UART_CLKDIV_CLK_STEP_MASK)
