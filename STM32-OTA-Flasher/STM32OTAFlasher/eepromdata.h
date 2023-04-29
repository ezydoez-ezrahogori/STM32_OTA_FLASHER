/*----------------------------------------------------------------------------------------------------------------------------------------
 * eepromdata.h - EEPROM data routines
 */
#ifndef EEPROMDATA_H
#define EEPROMDATA_H

/*----------------------------------------------------------------------------------------------------------------------------------------
 * Default values
 *----------------------------------------------------------------------------------------------------------------------------------------
 */
#define EEPROM_AP_SSID_CONTENT      "STM32Flasher"                                      // default AP SSID
#define EEPROM_AP_SSID_KEY_CONTENT  "1234567890"                                        // default AP SSID KEY, min. length is 8!

/*----------------------------------------------------------------------------------------------------------------------------------------
 * Possible flags set in eeprom_flags
 *----------------------------------------------------------------------------------------------------------------------------------------
 */
#define EEPROM_FLAG_BOOT_AS_AP      0x01

/*----------------------------------------------------------------------------------------------------------------------------------------
 * Lengths of EEPROM values
 *----------------------------------------------------------------------------------------------------------------------------------------
 */
#define EEPROM_MAGIC_LEN            8
#define EEPROM_VERSION_LEN          3
#define EEPROM_SSID_LEN             32
#define EEPROM_SSID_KEY_LEN         64
#define EEPROM_AP_SSID_LEN          32
#define EEPROM_AP_SSID_KEY_LEN      64
#define EEPROM_FLAGS_LEN            1

/*----------------------------------------------------------------------------------------------------------------------------------------
 * EEPROM values
 *----------------------------------------------------------------------------------------------------------------------------------------
 */
extern char                         eeprom_ssid[EEPROM_SSID_LEN + 1];
extern char                         eeprom_ssidkey[EEPROM_SSID_KEY_LEN + 1];
extern char                         eeprom_ap_ssid[EEPROM_AP_SSID_LEN + 1];
extern char                         eeprom_ap_ssidkey[EEPROM_AP_SSID_KEY_LEN + 1];
extern uint8_t                      eeprom_flags;

/*----------------------------------------------------------------------------------------------------------------------------------------
 * EEPROM access functions
 *----------------------------------------------------------------------------------------------------------------------------------------
 */
extern void                         eeprom_save_ssid (void);
extern void                         eeprom_save_ssidkey (void);
extern void                         eeprom_save_ap_ssid (void);
extern void                         eeprom_save_ap_ssidkey (void);
extern void                         eeprom_save_flags (void);
extern void                         eeprom_commit (void);
extern void                         eeprom_read (void);

#endif // EEPROMDATA_H
