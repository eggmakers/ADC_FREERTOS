#ifndef __FATFS_TEST_H__
#define __FATFS_TEST_H__

/*
*************************************************************************
*                             ������ͷ�ļ�
*************************************************************************
*/


/* STM32 �̼���ͷ�ļ� */
#include "stm32f10x.h"
/* FreeRTOSͷ�ļ� */
#include "FreeRTOS.h"
#include "task.h"

/* ������Ӳ��bspͷ�ļ� */
#include "bsp_led.h"
#include "bsp_usart.h"
#include "bsp_key.h"
#include "./sdio/bsp_sdio_sdcard.h"
#include "ff.h"





/*
*************************************************************************
*                               ��������
*************************************************************************
*/

void FileSystem_Init(void);

void FileSystem_Test(void);




#endif /* __FATFS_TEST_H__ */




