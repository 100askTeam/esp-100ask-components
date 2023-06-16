/*
 * SPDX-FileCopyrightText: 2008-2023 Shenzhen Baiwenwang Technology CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef DISPLAY_100ASK_HAL_H
#define DISPLAY_100ASK_HAL_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#ifdef CONFIG_USE_100ASK_DISPLAY_SCREEN

/* lvgl specific */
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/
typedef enum
{
    DISPLAY_100ASK_ROTATION_0 = 0,
    DISPLAY_100ASK_ROTATION_90,
    DISPLAY_100ASK_ROTATION_180,
    DISPLAY_100ASK_ROTATION_270,
} display_100ask_rotation_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/
#if CONFIG_USE_100ASK_SPI_DISPLAY_SCREEN && CONFIG_USE_100ASK_DISPLAY_SCREEN_SPI_DRIVE
esp_err_t display_100ask_hal_init(void);
#endif

void display_100ask_hal_lvgl_flush(lv_disp_drv_t * drv, const lv_area_t * area, lv_color_t * color_map);

void display_100ask_hal_set_rotation(display_100ask_rotation_t rotation);

/**********************
 *      MACROS
 **********************/

#endif  /* CONFIG_USE_100ASK_DISPLAY_SCREEN */

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /* DISPLAY_100ASK_HAL_H */