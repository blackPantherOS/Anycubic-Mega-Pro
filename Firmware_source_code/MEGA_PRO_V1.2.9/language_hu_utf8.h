/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Hungarian - UTF-8
 * Translated by Charles K Barcza (blackPanther Europe - info@blackpanther.hu)
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */

#ifndef LANGUAGE_HU_UTF_H
#define LANGUAGE_HU_UTF_H

#define DISPLAY_CHARSET_ISO10646_1

#ifndef WELCOME_MSG
  #define WELCOME_MSG                         MACHINE_NAME " kész."
#endif
#ifndef MSG_SD_INSERTED
  #define MSG_SD_INSERTED                     "Kártya behelyezve"
#endif
#ifndef MSG_SD_REMOVED
  #define MSG_SD_REMOVED                      "Kártya eltávolítva"
#endif
#ifndef MSG_LCD_ENDSTOPS
  #define MSG_LCD_ENDSTOPS                    "Endstops" // Max length 8 characters
#endif
#ifndef MSG_MAIN
  #define MSG_MAIN                            "Main"
#endif
#ifndef MSG_AUTOSTART
  #define MSG_AUTOSTART                       "Autostart"
#endif
#ifndef MSG_DISABLE_STEPPERS
  #define MSG_DISABLE_STEPPERS                "Léptetők kikapcsolása"
#endif
#ifndef MSG_AUTO_HOME
  #define MSG_AUTO_HOME                       "Auto home"
#endif
#ifndef MSG_AUTO_HOME_X
  #define MSG_AUTO_HOME_X                     "Home X"
#endif
#ifndef MSG_AUTO_HOME_Y
  #define MSG_AUTO_HOME_Y                     "Home Y"
#endif
#ifndef MSG_AUTO_HOME_Z
  #define MSG_AUTO_HOME_Z                     "Home Z"
#endif
#ifndef MSG_LEVEL_BED_HOMING
  #define MSG_LEVEL_BED_HOMING                "Homing XYZ"
#endif
#ifndef MSG_LEVEL_BED_WAITING
  #define MSG_LEVEL_BED_WAITING               "Kattintson a kezdéshez"
#endif
#ifndef MSG_LEVEL_BED_NEXT_POINT
  #define MSG_LEVEL_BED_NEXT_POINT            "Következő pont"
#endif
#ifndef MSG_LEVEL_BED_DONE
  #define MSG_LEVEL_BED_DONE                  "Szintezés kész!"
#endif
#ifndef MSG_LEVEL_BED_CANCEL
  #define MSG_LEVEL_BED_CANCEL                "Mégsem"
#endif
#ifndef MSG_SET_HOME_OFFSETS
  #define MSG_SET_HOME_OFFSETS                "Kezdő eltolás megadás"
#endif
#ifndef MSG_HOME_OFFSETS_APPLIED
  #define MSG_HOME_OFFSETS_APPLIED            "Eltolások alkalmazva"
#endif
#ifndef MSG_SET_ORIGIN
  #define MSG_SET_ORIGIN                      "Kezdőpont megadás"
#endif
#ifndef MSG_PREHEAT_1
  #define MSG_PREHEAT_1                       "PLA előfűtés"
#endif
#ifndef MSG_PREHEAT_1_N
  #define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#endif
#ifndef MSG_PREHEAT_1_ALL
  #define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " Mind"
#endif
#ifndef MSG_PREHEAT_1_BEDONLY
  #define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " Síkágy"
#endif
#ifndef MSG_PREHEAT_1_SETTINGS
  #define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " conf"
#endif
#ifndef MSG_PREHEAT_2
  #define MSG_PREHEAT_2                       "ABS előfűtés"
#endif
#ifndef MSG_PREHEAT_2_N
  #define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#endif
#ifndef MSG_PREHEAT_2_ALL
  #define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " Mind"
#endif
#ifndef MSG_PREHEAT_2_BEDONLY
  #define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " Síkágy"
#endif
#ifndef MSG_PREHEAT_2_SETTINGS
  #define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " conf"
#endif
#ifndef MSG_COOLDOWN
  #define MSG_COOLDOWN                        "Lehűtés"
#endif
#ifndef MSG_SWITCH_PS_ON
  #define MSG_SWITCH_PS_ON                    "Bekapcsolás"
#endif
#ifndef MSG_SWITCH_PS_OFF
  #define MSG_SWITCH_PS_OFF                   "Kikapcsolás"
#endif
#ifndef MSG_EXTRUDE
  #define MSG_EXTRUDE                         "Kitolás"
#endif
#ifndef MSG_RETRACT
  #define MSG_RETRACT                         "Visszahúzás"
#endif
#ifndef MSG_MOVE_AXIS
  #define MSG_MOVE_AXIS                       "Move axis"
#endif
#ifndef MSG_LEVEL_BED
  #define MSG_LEVEL_BED                       "Síkágy szint"
#endif
#ifndef MSG_MOVE_X
  #define MSG_MOVE_X                          "X mozgás"
#endif
#ifndef MSG_MOVE_Y
  #define MSG_MOVE_Y                          "Y mozgás"
#endif
#ifndef MSG_MOVE_Z
  #define MSG_MOVE_Z                          "Z mozgás"
#endif
#ifndef MSG_MOVE_E
  #define MSG_MOVE_E                          "Extruder"
#endif
#ifndef MSG_MOVE_01MM
  #define MSG_MOVE_01MM                       "0.1mm mozgás"
#endif
#ifndef MSG_MOVE_1MM
  #define MSG_MOVE_1MM                        "1mm mozgás"
#endif
#ifndef MSG_MOVE_10MM
  #define MSG_MOVE_10MM                       "10mm mozgás"
#endif
#ifndef MSG_SPEED
  #define MSG_SPEED                           "Sebesség"
#endif
#ifndef MSG_BED_Z
  #define MSG_BED_Z                           "Bed Z"
#endif
#ifndef MSG_NOZZLE
  #define MSG_NOZZLE                          "Nozzle"
#endif
#ifndef MSG_BED
  #define MSG_BED                             "Síkágy"
#endif
#ifndef MSG_FAN_SPEED
  #define MSG_FAN_SPEED                       "Ventilátor sebesség"
#endif
#ifndef MSG_FLOW
  #define MSG_FLOW                            "Áramlás"
#endif
#ifndef MSG_CONTROL
  #define MSG_CONTROL                         "Vezérlés"
#endif
#ifndef MSG_MIN
  #define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"
#endif
#ifndef MSG_MAX
  #define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"
#endif
#ifndef MSG_FACTOR
  #define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Fact"
#endif
#ifndef MSG_AUTOTEMP
  #define MSG_AUTOTEMP                        "Autotemp"
#endif
#ifndef MSG_ON
  #define MSG_ON                              "Be "
#endif
#ifndef MSG_OFF
  #define MSG_OFF                             "Ki"
#endif
#ifndef MSG_PID_P
  #define MSG_PID_P                           "PID-P"
#endif
#ifndef MSG_PID_I
  #define MSG_PID_I                           "PID-I"
#endif
#ifndef MSG_PID_D
  #define MSG_PID_D                           "PID-D"
#endif
#ifndef MSG_PID_C
  #define MSG_PID_C                           "PID-C"
#endif
#ifndef MSG_SELECT
  #define MSG_SELECT                          "Kiválaszt"
#endif
#ifndef MSG_ACC
  #define MSG_ACC                             "Gyorsít"
#endif
#ifndef MSG_VX_JERK
  #define MSG_VX_JERK                         "Vx-jerk"
#endif
#ifndef MSG_VY_JERK
  #define MSG_VY_JERK                         "Vy-jerk"
#endif
#ifndef MSG_VZ_JERK
  #define MSG_VZ_JERK                         "Vz-jerk"
#endif
#ifndef MSG_VE_JERK
  #define MSG_VE_JERK                         "Ve-jerk"
#endif
#ifndef MSG_VMAX
  #define MSG_VMAX                            "Vmax "
#endif
#ifndef MSG_VMIN
  #define MSG_VMIN                            "Vmin"
#endif
#ifndef MSG_VTRAV_MIN
  #define MSG_VTRAV_MIN                       "VTrav min"
#endif
#ifndef MSG_AMAX
  #define MSG_AMAX                            "Amax "
#endif
#ifndef MSG_A_RETRACT
  #define MSG_A_RETRACT                       "A-retract"
#endif
#ifndef MSG_A_TRAVEL
  #define MSG_A_TRAVEL                        "A-travel"
#endif
#ifndef MSG_XSTEPS
  #define MSG_XSTEPS                          "Xsteps/mm"
#endif
#ifndef MSG_YSTEPS
  #define MSG_YSTEPS                          "Ysteps/mm"
#endif
#ifndef MSG_ZSTEPS
  #define MSG_ZSTEPS                          "Zsteps/mm"
#endif
#ifndef MSG_ESTEPS
  #define MSG_ESTEPS                          "Esteps/mm"
#endif
#ifndef MSG_TEMPERATURE
  #define MSG_TEMPERATURE                     "Hőmérséklet"
#endif
#ifndef MSG_MOTION
  #define MSG_MOTION                          "Mozgás"
#endif
#ifndef MSG_VOLUMETRIC
  #define MSG_VOLUMETRIC                      "Huzal"
#endif
#ifndef MSG_VOLUMETRIC_ENABLED
  #define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#endif
#ifndef MSG_FILAMENT_DIAM
  #define MSG_FILAMENT_DIAM                   "Fil. Dia."
#endif
#ifndef MSG_CONTRAST
  #define MSG_CONTRAST                        "LCD kontraszt"
#endif
#ifndef MSG_STORE_EPROM
  #define MSG_STORE_EPROM                     "Memoria tárolás"
#endif
#ifndef MSG_LOAD_EPROM
  #define MSG_LOAD_EPROM                      "Memoria betöltés"
#endif
#ifndef MSG_RESTORE_FAILSAFE
  #define MSG_RESTORE_FAILSAFE                "Failsafe helyreállítás"
#endif
#ifndef MSG_REFRESH
  #define MSG_REFRESH                         "Frissítés"
#endif
#ifndef MSG_WATCH
  #define MSG_WATCH                           "Infó képernyő"
#endif
#ifndef MSG_PREPARE
  #define MSG_PREPARE                         "Előkészítés"
#endif
#ifndef MSG_TUNE
  #define MSG_TUNE                            "Tune"
#endif
#ifndef MSG_PAUSE_PRINT
  #define MSG_PAUSE_PRINT                     "Nyomtatási szünet"
#endif
#ifndef MSG_RESUME_PRINT
  #define MSG_RESUME_PRINT                    "Nyomtatás folytatás"
#endif
#ifndef MSG_STOP_PRINT
  #define MSG_STOP_PRINT                      "Nyomtatás megáll"
#endif
#ifndef MSG_CARD_MENU
  #define MSG_CARD_MENU                       "Nyomtatás SD-ről"
#endif
#ifndef MSG_NO_CARD
  #define MSG_NO_CARD                         "Nincs SD kárty"
#endif
#ifndef MSG_DWELL
  #define MSG_DWELL                           "Alvás..."
#endif
#ifndef MSG_USERWAIT
  #define MSG_USERWAIT                        "Felhasználóra vár.."
#endif
#ifndef MSG_RESUMING
  #define MSG_RESUMING                        "Nyomtatás folytatása"
#endif
#ifndef MSG_PRINT_ABORTED
  #define MSG_PRINT_ABORTED                   "Nyomtatás megszakítva"
#endif
#ifndef MSG_NO_MOVE
  #define MSG_NO_MOVE                         "Nincs mozgás."
#endif
#ifndef MSG_KILLED
  #define MSG_KILLED                          "LEÖLVE. "
#endif
#ifndef MSG_STOPPED
  #define MSG_STOPPED                         "MEGÁLLÍTVA. "
#endif
#ifndef MSG_CONTROL_RETRACT
  #define MSG_CONTROL_RETRACT                 "Retract mm"
#endif
#ifndef MSG_CONTROL_RETRACT_SWAP
  #define MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"
#endif
#ifndef MSG_CONTROL_RETRACTF
  #define MSG_CONTROL_RETRACTF                "Retract  V"
#endif
#ifndef MSG_CONTROL_RETRACT_ZLIFT
  #define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"
#endif
#ifndef MSG_CONTROL_RETRACT_RECOVER
  #define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"
#endif
#ifndef MSG_CONTROL_RETRACT_RECOVER_SWAP
  #define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet+mm"
#endif
#ifndef MSG_CONTROL_RETRACT_RECOVERF
  #define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#endif
#ifndef MSG_AUTORETRACT
  #define MSG_AUTORETRACT                     "AutoRetr."
#endif
#ifndef MSG_FILAMENTCHANGE
  #define MSG_FILAMENTCHANGE                  "Huzalcsere"
#endif
#ifndef MSG_INIT_SDCARD
  #define MSG_INIT_SDCARD                     "SD előkészítés"
#endif
#ifndef MSG_CNG_SDCARD
  #define MSG_CNG_SDCARD                      "SD kárty csere"
#endif
#ifndef MSG_ZPROBE_OUT
  #define MSG_ZPROBE_OUT                      "Z probe out. bed"
#endif
#ifndef MSG_BLTOUCH_SELFTEST
  #define MSG_BLTOUCH_SELFTEST                "BLTouch önteszt"
#endif
#ifndef MSG_BLTOUCH_RESET
  #define MSG_BLTOUCH_RESET                   "BLTouch alaphelyzet"
#endif
#ifndef MSG_HOME
  #define MSG_HOME                            "Kezdőoldal"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#endif
#ifndef MSG_FIRST
  #define MSG_FIRST                           "első"
#endif
#ifndef MSG_ZPROBE_ZOFFSET
  #define MSG_ZPROBE_ZOFFSET                  "Z eltolás"
#endif
#ifndef MSG_BABYSTEP_X
  #define MSG_BABYSTEP_X                      "Babystep X"
#endif
#ifndef MSG_BABYSTEP_Y
  #define MSG_BABYSTEP_Y                      "Babystep Y"
#endif
#ifndef MSG_BABYSTEP_Z
  #define MSG_BABYSTEP_Z                      "Babystep Z"
#endif
#ifndef MSG_ENDSTOP_ABORT
  #define MSG_ENDSTOP_ABORT                   "Endstop megszakít"
#endif
#ifndef MSG_HEATING_FAILED_LCD
  #define MSG_HEATING_FAILED_LCD              "Fűtés sikertelen"
#endif
#ifndef MSG_ERR_REDUNDANT_TEMP
  #define MSG_ERR_REDUNDANT_TEMP              "Err: REDUNDANT TEMP"
#endif
#ifndef MSG_THERMAL_RUNAWAY
  #define MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
#endif
#ifndef MSG_ERR_MAXTEMP
  #define MSG_ERR_MAXTEMP                     "Err: MAXTEMP"
#endif
#ifndef MSG_ERR_MINTEMP
  #define MSG_ERR_MINTEMP                     "Err: MINTEMP"
#endif
#ifndef MSG_ERR_MAXTEMP_BED
  #define MSG_ERR_MAXTEMP_BED                 "Err: MAXTEMP BED"
#endif
#ifndef MSG_ERR_MINTEMP_BED
  #define MSG_ERR_MINTEMP_BED                 "Err: MINTEMP BED"
#endif
#ifndef MSG_ERR_Z_HOMING
  #define MSG_ERR_Z_HOMING                    "G28 Z letiltva"
#endif
#ifndef MSG_HALTED
  #define MSG_HALTED                          "NYOMTATÓ MEGÁLLÍTVA"
#endif
#ifndef MSG_PLEASE_RESET
  #define MSG_PLEASE_RESET                    "Állítsa alaphelyzetbe"
#endif
#ifndef MSG_SHORT_DAY
  #define MSG_SHORT_DAY                       "d" // One character only
#endif
#ifndef MSG_SHORT_HOUR
  #define MSG_SHORT_HOUR                      "h" // One character only
#endif
#ifndef MSG_SHORT_MINUTE
  #define MSG_SHORT_MINUTE                    "m" // One character only
#endif
#ifndef MSG_HEATING
  #define MSG_HEATING                         "Fűtés..."
#endif
#ifndef MSG_HEATING_COMPLETE
  #define MSG_HEATING_COMPLETE                "Fűtés kész."
#endif
#ifndef MSG_BED_HEATING
  #define MSG_BED_HEATING                     "Síkágy fűtés."
#endif
#ifndef MSG_BED_DONE
  #define MSG_BED_DONE                        "Síkágy kész."
#endif
#ifndef MSG_DELTA_CALIBRATE
  #define MSG_DELTA_CALIBRATE                 "Delta kalibráció"
#endif
#ifndef MSG_DELTA_CALIBRATE_X
  #define MSG_DELTA_CALIBRATE_X               "X kalibrálása"
#endif
#ifndef MSG_DELTA_CALIBRATE_Y
  #define MSG_DELTA_CALIBRATE_Y               "Y kalibrálása"
#endif
#ifndef MSG_DELTA_CALIBRATE_Z
  #define MSG_DELTA_CALIBRATE_Z               "Z kalibrálása"
#endif
#ifndef MSG_DELTA_CALIBRATE_CENTER
  #define MSG_DELTA_CALIBRATE_CENTER          "Központ kalibrálása"
#endif

#ifndef MSG_INFO_MENU
  #define MSG_INFO_MENU                       "A nyomtatóról"
#endif
#ifndef MSG_INFO_PRINTER_MENU
  #define MSG_INFO_PRINTER_MENU               "Nyomtató infó"
#endif
#ifndef MSG_INFO_STATS_MENU
  #define MSG_INFO_STATS_MENU                 "Nyomtató státusz"
#endif
#ifndef MSG_INFO_BOARD_MENU
  #define MSG_INFO_BOARD_MENU                 "Alaplap infó"
#endif
#ifndef MSG_INFO_THERMISTOR_MENU
  #define MSG_INFO_THERMISTOR_MENU            "Termisztorok"
#endif
#ifndef MSG_INFO_EXTRUDERS
  #define MSG_INFO_EXTRUDERS                  "Extruderek"
#endif
#ifndef MSG_INFO_BAUDRATE
  #define MSG_INFO_BAUDRATE                   "Átviteli sebesség"
#endif
#ifndef MSG_INFO_PROTOCOL
  #define MSG_INFO_PROTOCOL                   "Protokol"
#endif
#ifndef MSG_LIGHTS_ON
  #define MSG_LIGHTS_ON                       "Ház világítás be"
#endif
#ifndef MSG_LIGHTS_OFF
  #define MSG_LIGHTS_OFF                      "Ház világítás ki"
#endif

#if LCD_WIDTH >= 20
  #ifndef MSG_INFO_PRINT_COUNT
    #define MSG_INFO_PRINT_COUNT              "Nyomtatási szám"
  #endif
  #ifndef MSG_INFO_COMPLETED_PRINTS
    #define MSG_INFO_COMPLETED_PRINTS         "Elkészült"
  #endif
  #ifndef MSG_INFO_PRINT_TIME
    #define MSG_INFO_PRINT_TIME               "Teljes nyomtatási idő"
  #endif
  #ifndef MSG_INFO_PRINT_LONGEST
    #define MSG_INFO_PRINT_LONGEST            "Leghosszabb munkaidő"
  #endif
  #ifndef MSG_INFO_PRINT_FILAMENT
    #define MSG_INFO_PRINT_FILAMENT           "Teljes extrudálás"
  #endif
#else
  #ifndef MSG_INFO_PRINT_COUNT
    #define MSG_INFO_PRINT_COUNT              "Nyomtatások"
  #endif
  #ifndef MSG_INFO_COMPLETED_PRINTS
    #define MSG_INFO_COMPLETED_PRINTS         "Elkészült"
  #endif
  #ifndef MSG_INFO_PRINT_TIME
    #define MSG_INFO_PRINT_TIME               "Teljes"
  #endif
  #ifndef MSG_INFO_PRINT_LONGEST
    #define MSG_INFO_PRINT_LONGEST            "Leghosszabb"
  #endif
  #ifndef MSG_INFO_PRINT_FILAMENT
    #define MSG_INFO_PRINT_FILAMENT           "Extrudált"
  #endif
#endif

#ifndef MSG_INFO_MIN_TEMP
  #define MSG_INFO_MIN_TEMP                   "Min Temp"
#endif
#ifndef MSG_INFO_MAX_TEMP
  #define MSG_INFO_MAX_TEMP                   "Max Temp"
#endif
#ifndef MSG_INFO_PSU
  #define MSG_INFO_PSU                        "Áramellátás"
#endif

#ifndef MSG_DRIVE_STRENGTH
  #define MSG_DRIVE_STRENGTH                  "Meghajtó ereje"
#endif
#ifndef MSG_DAC_PERCENT
  #define MSG_DAC_PERCENT                     "% meghajtó"
#endif
#ifndef MSG_DAC_EEPROM_WRITE
  #define MSG_DAC_EEPROM_WRITE                "DAC EEPROM írás"
#endif
#ifndef MSG_FILAMENT_CHANGE_HEADER
  #define MSG_FILAMENT_CHANGE_HEADER          "HUZALCSERE"
#endif
#ifndef MSG_FILAMENT_CHANGE_OPTION_HEADER
  #define MSG_FILAMENT_CHANGE_OPTION_HEADER   "OPCIÓK VÁLTOZTATÁSA:"
#endif
#ifndef MSG_FILAMENT_CHANGE_OPTION_EXTRUDE
  #define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Extrudálj többet"
#endif
#ifndef MSG_FILAMENT_CHANGE_OPTION_RESUME
  #define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Nyomtatás folytatása"
#endif

//
// Filament Change screens show up to 3 lines on a 4-line display
//                        ...or up to 2 lines on a 3-line display
//
#if LCD_HEIGHT >= 4
  #ifndef MSG_FILAMENT_CHANGE_INIT_1
    #define MSG_FILAMENT_CHANGE_INIT_1          "Wait for start"
    #define MSG_FILAMENT_CHANGE_INIT_2          "of the filament"
    #define MSG_FILAMENT_CHANGE_INIT_3          "change"
  #endif
  #ifndef MSG_FILAMENT_CHANGE_UNLOAD_1
    #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Wait for"
    #define MSG_FILAMENT_CHANGE_UNLOAD_2        "filament unload"
  #endif
  #ifndef MSG_FILAMENT_CHANGE_INSERT_1
    #define MSG_FILAMENT_CHANGE_INSERT_1        "Insert filament"
    #define MSG_FILAMENT_CHANGE_INSERT_2        "and press button"
    #define MSG_FILAMENT_CHANGE_INSERT_3        "to continue..."
  #endif
  #ifndef MSG_FILAMENT_CHANGE_LOAD_1
    #define MSG_FILAMENT_CHANGE_LOAD_1          "Wait for"
    #define MSG_FILAMENT_CHANGE_LOAD_2          "filament load"
  #endif
  #ifndef MSG_FILAMENT_CHANGE_EXTRUDE_1
    #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Wait for"
    #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "filament extrude"
  #endif
  #ifndef MSG_FILAMENT_CHANGE_RESUME_1
    #define MSG_FILAMENT_CHANGE_RESUME_1        "Wait for print"
    #define MSG_FILAMENT_CHANGE_RESUME_2        "to resume"
  #endif
#else // LCD_HEIGHT < 4
  #ifndef MSG_FILAMENT_CHANGE_INIT_1
    #define MSG_FILAMENT_CHANGE_INIT_1          "Kérem várjon..."
  #endif
  #ifndef MSG_FILAMENT_CHANGE_UNLOAD_1
    #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Kiadás..."
  #endif
  #ifndef MSG_FILAMENT_CHANGE_INSERT_1
    #define MSG_FILAMENT_CHANGE_INSERT_1        "Behelyezés és kattintás"
  #endif
  #ifndef MSG_FILAMENT_CHANGE_LOAD_1
    #define MSG_FILAMENT_CHANGE_LOAD_1          "Betöltés..."
  #endif
  #ifndef MSG_FILAMENT_CHANGE_EXTRUDE_1
    #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Extruding..."
  #endif
  #ifndef MSG_FILAMENT_CHANGE_RESUME_1
    #define MSG_FILAMENT_CHANGE_RESUME_1        "Folyatás..."
  #endif
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_EN_H
