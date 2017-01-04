struct acpi_smb_hc;
enum acpi_smb_protocol ;
static const u8 SMBUS_PEC = 0x80;
enum acpi_sbs_device_addr ;
typedef void (*smbus_alarm_callback)(void *context);
extern int acpi_smbus_read(struct acpi_smb_hc *hc, u8 protocol, u8 address,
u8 command, u8 * data);
extern int acpi_smbus_write(struct acpi_smb_hc *hc, u8 protocol, u8 slave_address,
u8 command, u8 * data, u8 length);
extern int acpi_smbus_register_callback(struct acpi_smb_hc *hc,
smbus_alarm_callback callback, void *context);
extern int acpi_smbus_unregister_callback(struct acpi_smb_hc *hc);
