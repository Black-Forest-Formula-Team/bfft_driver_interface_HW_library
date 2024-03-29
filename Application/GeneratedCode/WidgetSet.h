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

#ifndef WidgetSet_H
#define WidgetSet_H

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

#include "_WidgetSetGauge.h"
#include "_WidgetSetGaugeConfig.h"
#include "_WidgetSetHorizontalValueBar.h"
#include "_WidgetSetHorizontalValueBarConfig.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "_WidgetSetValueDisplay.h"
#include "_WidgetSetValueDisplayConfig.h"
#include "_WidgetSetVerticalSlider.h"
#include "_WidgetSetVerticalSliderConfig.h"
#include "_WidgetSetWidgetConfig.h"

/* Bitmap resource : 'WidgetSet::GaugeNeedleMedium' */
EW_DECLARE_BITMAP_RES( WidgetSetGaugeNeedleMedium )

/* Bitmap resource : 'WidgetSet::GaugeTrackMedium' */
EW_DECLARE_BITMAP_RES( WidgetSetGaugeTrackMedium )

/* Bitmap resource : 'WidgetSet::HorizontalValueBarMedium' */
EW_DECLARE_BITMAP_RES( WidgetSetHorizontalValueBarMedium )

/* Bitmap resource : 'WidgetSet::ThumbKnobMedium' */
EW_DECLARE_BITMAP_RES( WidgetSetThumbKnobMedium )

/* Bitmap resource : 'WidgetSet::VerticalSliderTrackMedium' */
EW_DECLARE_BITMAP_RES( WidgetSetVerticalSliderTrackMedium )

/* This autoobject provides the default customization for the 'horizontal value 
   bar' widget (WidgetSet::HorizontalValueBar) in its medium size variant. */
EW_DECLARE_AUTOOBJECT( WidgetSetHorizontalValueBar_Medium, WidgetSetHorizontalValueBarConfig )

/* This autoobject provides the default customization for the 'analog gauge' widget 
   (WidgetSet::Gauge) in its medium size variant. */
EW_DECLARE_AUTOOBJECT( WidgetSetGauge_Medium, WidgetSetGaugeConfig )

/* This autoobject provides the default customization for the 'vertical slider' 
   widget (WidgetSet::VerticalSlider) in its medium size variant. */
EW_DECLARE_AUTOOBJECT( WidgetSetVerticalSlider_Medium, WidgetSetVerticalSliderConfig )

/* The definition WidgetSet::ValueDisplayLayout determines the available arrangement 
   modes to apply on the views within a WidgetSet::ValueDisplay widget. Depending 
   on the mode, the views will be treated independently or one view will be arranged 
   at the left/right end of the content displayed in the other view. */
typedef enum
{
  WidgetSetValueDisplayLayoutUnitAndValueAreIndependent = 0,
  WidgetSetValueDisplayLayoutAlignUnitRightToValue = 1,
  WidgetSetValueDisplayLayoutAlignUnitLeftToValue = 2,
  WidgetSetValueDisplayLayoutAlignValueRightToUnit = 3,
  WidgetSetValueDisplayLayoutAlignValueLeftToUnit = 4
} WidgetSetValueDisplayLayout;

#ifdef __cplusplus
  }
#endif

#endif /* WidgetSet_H */

/* Embedded Wizard */
