#define MMCIF_BASE      (void __iomem *)0xe6bd0000
#define PORT84CR	(void __iomem *)0xe6050054
#define PORT85CR	(void __iomem *)0xe6050055
#define PORT86CR	(void __iomem *)0xe6050056
#define PORT87CR	(void __iomem *)0xe6050057
#define PORT88CR	(void __iomem *)0xe6050058
#define PORT89CR	(void __iomem *)0xe6050059
#define PORT90CR	(void __iomem *)0xe605005a
#define PORT91CR	(void __iomem *)0xe605005b
#define PORT92CR	(void __iomem *)0xe605005c
#define PORT99CR	(void __iomem *)0xe6050063
#define SMSTPCR3	(void __iomem *)0xe615013c
asmlinkage void mmcif_loader(unsigned char *buf, unsigned long len)
