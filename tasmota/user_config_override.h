/*
  user_config_override.h - user configuration overrides my_user_config.h for Tasmota
  Speziell angepasst für Molline Ultramess H / Diehl Sharky 775 mit M-Bus BCD Support
*/

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// --- Grundlegende Scripting Funktionen ---
#ifndef USE_SCRIPT
#define USE_SCRIPT
#endif

// --- Smart Meter Interface (SML) ---
#ifndef USE_SML_M
#define USE_SML_M
#endif

// --- M-Bus Protokoll & BCD Decoder (Essentiell für Sharky 775) ---
#ifndef USE_SML_M_BUS
#define USE_SML_M_BUS
#endif

// --- Regeln deaktivieren (spart Speicherplatz für Scripte) ---
#ifdef USE_RULES
#undef USE_RULES
#endif

// --- Automatisierungseinstellungen ---
#define START_SCRIPT_FROM_BOOT
#define USER_BACKLOG "script 1"

// --- Standard-Script Platzhalter ---
// Hinweis: Dieses Script wird durch dein manuelles Script im Webinterface ersetzt.
#define PRECONFIGURED_SCRIPT ">D\n>B\n=>sensor53 r\n>M 1\n+1,3,s,0,9600,SMI,1\n1,77070100010800ff@1000,Total Consumed,kWh,Total_in,2\n1,77070100020800ff@1000,Total Delivered,kWh,Total_out,2\n1,77070100100700ff@1,Power,W,Power_cur,0\n#\n"

#endif  // _USER_CONFIG_OVERRIDE_H_
