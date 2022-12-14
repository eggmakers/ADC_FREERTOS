#ifndef __FATFS_TEST_H__
#define __FATFS_TEST_H__

/*
*************************************************************************
*                             包含的头文件
*************************************************************************
*/


/* STM32 固件库头文件 */
#include "stm32f10x.h"
/* FreeRTOS头文件 */
#include "FreeRTOS.h"
#include "task.h"

/* 开发板硬件bsp头文件 */
#include "bsp_led.h"
#include "bsp_usart.h"
#include "bsp_key.h"
#include "./sdio/bsp_sdio_sdcard.h"
#include "ff.h"





/*
*************************************************************************
*                               函数声明
*************************************************************************
*/

void FileSystem_Init(void);

void FileSystem_Test(void);




#endif /* __FATFS_TEST_H__ */





