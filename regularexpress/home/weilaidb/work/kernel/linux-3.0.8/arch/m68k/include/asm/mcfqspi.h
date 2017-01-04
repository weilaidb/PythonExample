#define mcfqspi_h
#if defined(CONFIG_M523x) || defined(CONFIG_M527x) || defined(CONFIG_M528x)
#define	MCFQSPI_IOBASE		(MCF_IPSBAR + 0x340)
#elif defined(CONFIG_M5249)
#define MCFQSPI_IOBASE		(MCF_MBAR + 0x300)
#elif defined(CONFIG_M520x) || defined(CONFIG_M532x)
#define MCFQSPI_IOBASE		0xFC058000
#define MCFQSPI_IOSIZE		0x40
struct mcfqspi_cs_control ;
struct mcfqspi_platform_data ;
