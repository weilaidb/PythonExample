#define __ASM_ARCH_I2C_H
enum ;
enum ;
enum ;
#define I2C_REG_RX(a)	((a)->ioaddr)
#define I2C_REG_TX(a)	((a)->ioaddr)
#define I2C_REG_STS(a)	((a)->ioaddr + 0x04)
#define I2C_REG_CTL(a)	((a)->ioaddr + 0x08)
#define I2C_REG_CKL(a)	((a)->ioaddr + 0x0c)
#define I2C_REG_CKH(a)	((a)->ioaddr + 0x10)
#define I2C_REG_ADR(a)	((a)->ioaddr + 0x14)
#define I2C_REG_RFL(a)	((a)->ioaddr + 0x18)
#define I2C_REG_TFL(a)	((a)->ioaddr + 0x1c)
#define I2C_REG_RXB(a)	((a)->ioaddr + 0x20)
#define I2C_REG_TXB(a)	((a)->ioaddr + 0x24)
#define I2C_REG_TXS(a)	((a)->ioaddr + 0x28)
#define I2C_REG_STFL(a)	((a)->ioaddr + 0x2c)
#define I2C_CHIP_NAME		"PNX4008-I2C"
