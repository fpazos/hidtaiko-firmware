#ifndef USB_DESCRIPTORS_H_
#define USB_DESCRIPTORS_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Mode enum for keyboard vs switch gamepad
typedef enum {
    USB_MODE_KEYBOARD = 0,
    USB_MODE_SWITCH_GAMEPAD = 1,
} usb_mode_t;

// Global mode variable (set to USB_MODE_KEYBOARD by default)
extern usb_mode_t g_usb_mode;

// HID レポートの ID を定義
enum
{
    REPORT_ID_KEYBOARD = 1 // キーボードのレポート ID
};

// Switch gamepad HID report structure
typedef struct {
    uint16_t buttons;     // 16 buttons packed
    uint8_t hat;          // D-pad (hat switch) + padding
    uint8_t x;            // Left analog X
    uint8_t y;            // Left analog Y
    uint8_t z;            // Right analog X
    uint8_t rz;           // Right analog Y
    uint8_t vendor;       // Vendor specific
} __attribute__ ((packed)) hid_switch_report_t;

// Function to safely switch USB mode at runtime
void usb_mode_switch(usb_mode_t new_mode);

#ifdef __cplusplus
}
#endif

#endif /* USB_DESCRIPTORS_H_ */
