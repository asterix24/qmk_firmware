
#include "led.h"
#include "print.h"

/** \brief Lock LED set callback - keymap/user level
 *
 * \deprecated Use led_update_user() instead.
 */
void led_set_user(uint8_t usb_led) {}

/** \brief Lock LED set callback - keyboard level
 *
 * \deprecated Use led_update_kb() instead.
 */
void led_set_kb(uint8_t usb_led) { led_set_user(usb_led); }

/** \brief Lock LED update callback - keymap/user level
 *
 * \return True if led_update_kb() should run its own code, false otherwise.
 */
bool led_update_user(led_t led_state) { return true; }

/** \brief Lock LED update callback - keyboard level
 *
 * \return Ignored for now.
 */
bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    return res;
}

/** \brief Initialise any LED related hardware and/or state
 */
void led_init_ports(void) { xprintf("led_init"); }

/** \brief Entrypoint for protocol to LED binding
 */
void led_set(uint8_t usb_led) {
    led_set_kb(usb_led);
    led_update_kb((led_t)usb_led);
    xprintf("led_set");
}
