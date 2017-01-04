#define MMCIF_BASE      (void __iomem *)0xa4ca0000
#define MSTPCR2		0xa4150038
#define PTWCR		0xa4050146
#define PTXCR		0xa4050148
#define PSELA		0xa405014e
#define PSELE		0xa4050156
#define HIZCRC		0xa405015c
#define DRVCRA		0xa405018a
asmlinkage void mmcif_loader(unsigned char *buf, unsigned long no_bytes)
