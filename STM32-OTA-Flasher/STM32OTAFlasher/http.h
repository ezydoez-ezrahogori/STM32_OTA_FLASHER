/*----------------------------------------------------------------------------------------------------------------------------------------
 * http.h - STM32 OTA Flasher Webserver
 *----------------------------------------------------------------------------------------------------------------------------------------

 *----------------------------------------------------------------------------------------------------------------------------------------
 */
#ifndef HTTP_H
#define HTTP_H

#define FS(str)             String(F(str)).c_str()
#define http_send_FS(x)     http_send(FS(x))                                         // leave string constants in flash memory

extern void                 http_send (const char *);
extern void                 http_send_string (String);
extern void                 http_flush (void);
extern void                 http_setup (void);
extern void                 http_loop (void);

extern String               sResponse;

#endif
