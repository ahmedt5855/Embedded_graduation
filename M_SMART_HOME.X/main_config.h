/* 
 * File:   main_config.h
 * Author: ahmed
 *
 * Created on April 20, 2022, 4:42 PM
 */

#ifndef MAIN_CONFIG_H_
#define MAIN_CONFIG_H_

#include "STD_Types.h"

#define NOT_STORED   0xFF
#define NOT_SELECTED 0xFF

#define BLOCK_MODE_TIME		   (uint32)20000
#define CHARACTER_PREVIEW_TIME (uint16)300
#define DEGREES_SYMBOL		   (uint8)0xDF

/*********************************** PIN Configuration ***********************************/
#define PASS_SIZE       (uint8)4
#define TRIES_ALLOWED   (uint8)3
#define PASSWORD_SYMBOL (uint8)'*'
#define ASCII_ZERO      (uint8)'0'

#define PASS_NOT_SET (uint8)0xFF
#define PASS_SET     (uint8)0x01

#define ADMIN_PASS_STATUS_ADDRESS (uint16)0X100
#define User_PASS_STATUS_ADDRESS (uint16)0X101
#define EEPROM_ADMIN_ADDRESS      (uint16)0X102
#define EEPROM_User_ADDRESS      (uint16)0X106
#define LOGIN_BLOCKED_ADDRESS     (uint16)0X10A
/*****************************************************************************************/

/************************************   Login configurations *****************************/
#define NO_MODE (uint8)0
#define ADMIN   (uint8)1
#define USER   (uint8)2
/*****************************************************************************************/

/************************************   Logic values *************************************/
#define FALSE   (uint8)0
#define TRUE    (uint8)1
/*****************************************************************************************/

#define CHECK_ADMIN_MODE        (uint8)'0'
#define CHECK_USER_MODE        (uint8)'1'

#define SELECT_ROOM1            (uint8)'1'
#define SELECT_ROOM2            (uint8)'2'
#define SELECT_ROOM3            (uint8)'3'
#define SELECT_ROOM4            (uint8)'4'
#define ADMIN_MORE_OPTION       (uint8)'4'

#define SELECT_ROOM4_ADMIN      (uint8)'1'
#define SELECT_DOOR               (uint8)'2'
#define SELECT_AIR_CONDITIONING (uint8)'3'
#define ADMIN_RET_OPTION        (uint8)'4'

#define SELECT_SET_TEMPERATURE  (uint8)'1'
#define SELECT_AIR_COND_CTRL    (uint8)'2'
#define SELECT_AIR_COND_RET     (uint8)'0'

/****************************   number of ticks to run timeout ***************************/
#define ADMIN_TIMEOUT (uint16)6000 //timeout after 30 seconds
#define USER_TIMEOUT (uint16)4000 //timeout after 20 seconds
/*****************************************************************************************/

/****************************   Show menu codes  *****************************************/
#define MAIN_MENU            (uint8)1
#define MORE_MENU            (uint8)2
#define ROOM1_MENU           (uint8)3
#define ROOM2_MENU           (uint8)4
#define ROOM3_MENU           (uint8)5
#define ROOM4_MENU           (uint8)6
#define Door_MENU            (uint8)7
#define AIRCONDITIONING_MENU (uint8)8
#define AIRCOND_CTRL_MENU    (uint8)9
#define TEMPERATURE_MENU     (uint8)10
/*****************************************************************************************/

#endif /* MAIN_CONFIG_H_ */

