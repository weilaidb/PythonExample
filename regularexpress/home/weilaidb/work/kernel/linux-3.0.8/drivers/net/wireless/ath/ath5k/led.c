#define ATH_SDEVICE(subv,subd) \
.vendor = PCI_ANY_ID, .device = PCI_ANY_ID, \
.subvendor = (subv), .subdevice = (subd)
#define ATH_LED(pin,polarity) .driver_data = (((pin) << 8) | (polarity))
#define ATH_PIN(data) ((data) >> 8)
#define ATH_POLARITY(data) ((data) & 0xff)
static const struct pci_device_id ath5k_led_devices[] = ;
void ath5k_led_enable(struct ath5k_softc *sc)
static void ath5k_led_on(struct ath5k_softc *sc)
void ath5k_led_off(struct ath5k_softc *sc)
static void
ath5k_led_brightness_set(struct led_classdev *led_dev,
enum led_brightness brightness)
static int
ath5k_register_led(struct ath5k_softc *sc, struct ath5k_led *led,
const char *name, char *trigger)
static void
ath5k_unregister_led(struct ath5k_led *led)
void ath5k_unregister_leds(struct ath5k_softc *sc)
int ath5k_init_leds(struct ath5k_softc *sc)
