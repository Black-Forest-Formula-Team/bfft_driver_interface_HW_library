/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 9.30
* Profile  : STM32H745
* Platform : STM.STM32.RGB565
*
*******************************************************************************/

#ifndef SetSpeed_H
#define SetSpeed_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if EW_RTE_VERSION != 0x0009001E
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if EW_GFX_VERSION != 0x0009001E
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

/* Bitmap resource : 'SetSpeed::Driv' */
EW_DECLARE_BITMAP_RES( SetSpeedDriv )

/* Bitmap resource : 'SetSpeed::Reifen' */
EW_DECLARE_BITMAP_RES( SetSpeedReifen )

/* Bitmap resource : 'SetSpeed::png_transparent_road_finish_line_miscellaneous_angle_triangle_thumbnail' */
EW_DECLARE_BITMAP_RES( SetSpeedpng_transparent_road_finish_line_miscellaneous_angle_triangle_thumbnail )

/* Forward declaration of the class WidgetSet::ValueDisplayConfig */
#ifndef _WidgetSetValueDisplayConfig_
  EW_DECLARE_CLASS( WidgetSetValueDisplayConfig )
#define _WidgetSetValueDisplayConfig_
#endif

/* User defined auto object: 'SetSpeed::SpeedValueDisplayConfig' */
EW_DECLARE_AUTOOBJECT( SetSpeedSpeedValueDisplayConfig, WidgetSetValueDisplayConfig )

/* User defined auto object: 'SetSpeed::SpeedValueDisplayConfigDrehzahl' */
EW_DECLARE_AUTOOBJECT( SetSpeedSpeedValueDisplayConfigDrehzahl, WidgetSetValueDisplayConfig )

#ifdef __cplusplus
  }
#endif

#endif /* SetSpeed_H */

/* Embedded Wizard */
