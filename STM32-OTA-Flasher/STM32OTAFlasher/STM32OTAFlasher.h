/*----------------------------------------------------------------------------------------------------------------------------------------
 * STM32OTAFlasher.ino - STM32 OTA Flasher
 *
 * Arduino Settings: NodeMCU 1.0 

 */
#ifndef STM32OTAFLASHER_H
#define STM32OTAFLASHER_H

extern void                         wifi_connect (char * ssid, char * ssidkey, bool do_disconnect);
extern void                         wifi_ap (const char * apssid, const char * apssidkey);

#endif // STM32OTAFLASHER_H
