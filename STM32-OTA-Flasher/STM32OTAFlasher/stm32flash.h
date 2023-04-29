/*----------------------------------------------------------------------------------------------------------------------------------------
 * stm32flash.h - flash STM32 via Bootloader API
 */
#ifndef STM32FLASH_H
#define STM32FLASH_H

#if 0 // yet not used
extern void stm32_flash_from_server (const char *, const char *, const char *);
#endif

extern void stm32_check_hex_file (String fname);
extern void stm32_flash_from_local (String fname);
extern void stm32_reset (void);
extern void stm32_flash_setup (void);

#endif
