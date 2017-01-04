#define __S390_VDSO_H__
#define VDSO32_LBASE	0
#define VDSO64_LBASE	0
#define VDSO_VERSION_STRING	LINUX_2.6.29
struct vdso_data ;
struct vdso_per_cpu_data ;
extern struct vdso_data *vdso_data;
int vdso_alloc_per_cpu(int cpu, struct _lowcore *lowcore);
void vdso_free_per_cpu(int cpu, struct _lowcore *lowcore);
