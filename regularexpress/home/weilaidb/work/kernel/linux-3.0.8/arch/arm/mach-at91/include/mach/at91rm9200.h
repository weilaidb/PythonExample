#define AT91RM9200_H
#define AT91RM9200_ID_PIOA	2
#define AT91RM9200_ID_PIOB	3
#define AT91RM9200_ID_PIOC	4
#define AT91RM9200_ID_PIOD	5
#define AT91RM9200_ID_US0	6
#define AT91RM9200_ID_US1	7
#define AT91RM9200_ID_US2	8
#define AT91RM9200_ID_US3	9
#define AT91RM9200_ID_MCI	10
#define AT91RM9200_ID_UDP	11
#define AT91RM9200_ID_TWI	12
#define AT91RM9200_ID_SPI	13
#define AT91RM9200_ID_SSC0	14
#define AT91RM9200_ID_SSC1	15
#define AT91RM9200_ID_SSC2	16
#define AT91RM9200_ID_TC0	17
#define AT91RM9200_ID_TC1	18
#define AT91RM9200_ID_TC2	19
#define AT91RM9200_ID_TC3	20
#define AT91RM9200_ID_TC4	21
#define AT91RM9200_ID_TC5	22
#define AT91RM9200_ID_UHP	23
#define AT91RM9200_ID_EMAC	24
#define AT91RM9200_ID_IRQ0	25
#define AT91RM9200_ID_IRQ1	26
#define AT91RM9200_ID_IRQ2	27
#define AT91RM9200_ID_IRQ3	28
#define AT91RM9200_ID_IRQ4	29
#define AT91RM9200_ID_IRQ5	30
#define AT91RM9200_ID_IRQ6	31
#define AT91RM9200_BASE_TCB0	0xfffa0000
#define AT91RM9200_BASE_TC0	0xfffa0000
#define AT91RM9200_BASE_TC1	0xfffa0040
#define AT91RM9200_BASE_TC2	0xfffa0080
#define AT91RM9200_BASE_TCB1	0xfffa4000
#define AT91RM9200_BASE_TC3	0xfffa4000
#define AT91RM9200_BASE_TC4	0xfffa4040
#define AT91RM9200_BASE_TC5	0xfffa4080
#define AT91RM9200_BASE_UDP	0xfffb0000
#define AT91RM9200_BASE_MCI	0xfffb4000
#define AT91RM9200_BASE_TWI	0xfffb8000
#define AT91RM9200_BASE_EMAC	0xfffbc000
#define AT91RM9200_BASE_US0	0xfffc0000
#define AT91RM9200_BASE_US1	0xfffc4000
#define AT91RM9200_BASE_US2	0xfffc8000
#define AT91RM9200_BASE_US3	0xfffcc000
#define AT91RM9200_BASE_SSC0	0xfffd0000
#define AT91RM9200_BASE_SSC1	0xfffd4000
#define AT91RM9200_BASE_SSC2	0xfffd8000
#define AT91RM9200_BASE_SPI	0xfffe0000
#define AT91_BASE_SYS		0xfffff000
#define AT91_AIC	(0xfffff000 - AT91_BASE_SYS)
#define AT91_DBGU	(0xfffff200 - AT91_BASE_SYS)
#define AT91_PIOA	(0xfffff400 - AT91_BASE_SYS)
#define AT91_PIOB	(0xfffff600 - AT91_BASE_SYS)
#define AT91_PIOC	(0xfffff800 - AT91_BASE_SYS)
#define AT91_PIOD	(0xfffffa00 - AT91_BASE_SYS)
#define AT91_PMC	(0xfffffc00 - AT91_BASE_SYS)
#define AT91_ST		(0xfffffd00 - AT91_BASE_SYS)
#define AT91_RTC	(0xfffffe00 - AT91_BASE_SYS)
#define AT91_MC		(0xffffff00 - AT91_BASE_SYS)
#define AT91_USART0	AT91RM9200_BASE_US0
#define AT91_USART1	AT91RM9200_BASE_US1
#define AT91_USART2	AT91RM9200_BASE_US2
#define AT91_USART3	AT91RM9200_BASE_US3
#define AT91_MATRIX	0
#define AT91RM9200_ROM_BASE	0x00100000
#define AT91RM9200_ROM_SIZE	SZ_128K
#define AT91RM9200_SRAM_BASE	0x00200000
#define AT91RM9200_SRAM_SIZE	SZ_16K
#define AT91RM9200_UHP_BASE	0x00300000
