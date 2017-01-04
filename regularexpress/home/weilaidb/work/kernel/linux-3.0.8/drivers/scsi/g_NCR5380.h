#define GENERIC_NCR5380_H
#define GENERIC_NCR5380_PUBLIC_RELEASE 1
#define BIOSPARAM
#define NCR5380_BIOSPARAM generic_NCR5380_biosparam
#define NCR5380_BIOSPARAM NULL
static int generic_NCR5380_abort(Scsi_Cmnd *);
static int generic_NCR5380_detect(struct scsi_host_template *);
static int generic_NCR5380_release_resources(struct Scsi_Host *);
static int generic_NCR5380_queue_command(struct Scsi_Host *, struct scsi_cmnd *);
static int generic_NCR5380_bus_reset(Scsi_Cmnd *);
static const char* generic_NCR5380_info(struct Scsi_Host *);
#define CMD_PER_LUN 2
#define CAN_QUEUE 16
#define __STRVAL(x) #x
#define STRVAL(x) __STRVAL(x)
#define NCR5380_map_config port
#define NCR5380_map_type int
#define NCR5380_map_name port
#define NCR5380_instance_name io_port
#define NCR53C400_register_offset 0
#define NCR53C400_address_adjust 8
#define NCR5380_region_size 16
#define NCR5380_region_size 8
#define NCR5380_read(reg) (inb(NCR5380_map_name + (reg)))
#define NCR5380_write(reg, value) (outb((value), (NCR5380_map_name + (reg))))
#define NCR5380_implementation_fields \
NCR5380_map_type NCR5380_map_name
#define NCR5380_local_declare() \
register NCR5380_implementation_fields
#define NCR5380_setup(instance) \
NCR5380_map_name = (NCR5380_map_type)((instance)->NCR5380_instance_name)
#define NCR5380_map_config memory
#define NCR5380_map_type unsigned long
#define NCR5380_map_name base
#define NCR5380_instance_name base
#define NCR53C400_register_offset 0x108
#define NCR53C400_address_adjust 0
#define NCR53C400_mem_base 0x3880
#define NCR53C400_host_buffer 0x3900
#define NCR5380_region_size 0x3a00
#define NCR5380_read(reg) readb(iomem + NCR53C400_mem_base + (reg))
#define NCR5380_write(reg, value) writeb(value, iomem + NCR53C400_mem_base + (reg))
#define NCR5380_implementation_fields \
NCR5380_map_type NCR5380_map_name; \
void __iomem *iomem;
#define NCR5380_local_declare() \
register void __iomem *iomem
#define NCR5380_setup(instance) \
iomem = (((struct NCR5380_hostdata *)(instance)->hostdata)->iomem)
#define NCR5380_intr generic_NCR5380_intr
#define NCR5380_queue_command generic_NCR5380_queue_command
#define NCR5380_abort generic_NCR5380_abort
#define NCR5380_bus_reset generic_NCR5380_bus_reset
#define NCR5380_pread generic_NCR5380_pread
#define NCR5380_pwrite generic_NCR5380_pwrite
#define NCR5380_proc_info notyet_generic_proc_info
#define BOARD_NCR5380	0
#define BOARD_NCR53C400	1
#define BOARD_NCR53C400A 2
#define BOARD_DTC3181E	3