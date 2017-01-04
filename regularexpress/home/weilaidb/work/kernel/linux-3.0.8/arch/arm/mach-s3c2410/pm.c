static void s3c2410_pm_prepare(void)
static void s3c2410_pm_resume(void)
struct syscore_ops s3c2410_pm_syscore_ops = ;
static int s3c2410_pm_add(struct sys_device *dev)
#if defined(CONFIG_CPU_S3C2410)
static struct sysdev_driver s3c2410_pm_driver = ;
static int __init s3c2410_pm_drvinit(void)
arch_initcall(s3c2410_pm_drvinit);
static struct sysdev_driver s3c2410a_pm_driver = ;
static int __init s3c2410a_pm_drvinit(void)
arch_initcall(s3c2410a_pm_drvinit);
#if defined(CONFIG_CPU_S3C2440)
static struct sysdev_driver s3c2440_pm_driver = ;
static int __init s3c2440_pm_drvinit(void)
arch_initcall(s3c2440_pm_drvinit);
#if defined(CONFIG_CPU_S3C2442)
static struct sysdev_driver s3c2442_pm_driver = ;
static int __init s3c2442_pm_drvinit(void)
arch_initcall(s3c2442_pm_drvinit);
