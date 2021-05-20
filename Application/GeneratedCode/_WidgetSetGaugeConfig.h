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

#ifndef _WidgetSetGaugeConfig_H
#define _WidgetSetGaugeConfig_H

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

#include "_WidgetSetWidgetConfig.h"

/* Forward declaration of the class Resources::Bitmap */
#ifndef _ResourcesBitmap_
  EW_DECLARE_CLASS( ResourcesBitmap )
#define _ResourcesBitmap_
#endif

/* Forward declaration of the class WidgetSet::GaugeConfig */
#ifndef _WidgetSetGaugeConfig_
  EW_DECLARE_CLASS( WidgetSetGaugeConfig )
#define _WidgetSetGaugeConfig_
#endif


/* This class implements the functionality permitting you to simply customize the 
   look and feel of a 'gauge' widget (WidgetSet::Gauge). In the practice, you will 
   create an instance of this class, configure its properties with bitmaps, colors 
   and other relevant attributes according to your design expectations and assign 
   such prepared configuration object to the property 'Appearance' of every affected 
   gauge widget. Thereupon the widgets will use the configuration information provided 
   in the object.
   Since with the configuration object you determine the appearance of the gauge 
   you should know from which views the gauge is composed of:
   - 'Scale' is an image view (Views::Image) displayed centered in the background 
   within the widget area. In the configuration object you can specify the desired 
   bitmap (@Scale), the frame number within the bitmap (@ScaleFrame) and opacity 
   or color to tint the bitmap (@ScaleTint). The gauge widget can automatically 
   play animated bitmaps if the specified frame number is -1.
   - 'TrackLeft' is a vector graphic view (Views::FillPath) displaying a circle 
   segment between the needle's leftmost position (clockwise) and its actual position. 
   From this results the effect of a track behind the needle. You can configure 
   the track radius (@TrackLeftRadius), its thickness (@TrackLeftThickness), color 
   (@TrackLeftColor) and the appearance of its caps (@TrackLeftRoundedStart and 
   @TrackLeftRoundedEnd).
   - 'TrackRight' is a vector graphic view (Views::FillPath) displaying a circle 
   segment between the actual position of the needle and its rightmost position 
   (clockwise). From this results the effect of a track behind the needle. You can 
   configure the track radius (@TrackRightRadius), its thickness (@TrackRightThickness), 
   color (@TrackRightColor) and the appearance of its caps (@TrackRightRoundedStart 
   and @TrackRightRoundedEnd).
   - 'Needle' is a warp image view (Views::WarpImage) displayed and rotated around 
   predetermined pivot position and along a circle segment with given radius. In 
   the configuration object you can specify the desired bitmap (@Needle), the frame 
   number within the bitmap (@NeedleFrame) and opacity or color to tint the bitmap 
   (@NeedleTint). The desired rotation range (the angles corresponding to 'MinValue' 
   and 'MaxValue' specified in the gauge widget) are determined in the properties 
   @NeedleMinAngle and @NeedleMaxAngle. The position around it the needle is rotated 
   is determined in the properties @CenterOffset, @NeedleRadius and @NeedlePivot. 
   With the property @NeedleRotate you control whether the bitmap should appear 
   rotated or only moved along the circle segment. The gauge widget can automatically 
   play animated bitmaps if the specified frame number is -1.
   - 'Cover' is an image view (Views::Image) displayed centered within the widget 
   area and covering so eventually the scale and needle images. In the configuration 
   object you can specify the desired bitmap (@Cover), the frame number within the 
   bitmap (@CoverFrame) and opacity or color to tint the bitmap (@CoverTint). The 
   gauge widget can automatically play animated bitmaps if the specified frame number 
   is -1.
   The gauge widget can rotate the needle with a smooth animation. This can be configured 
   in the properties @SwingDuration and @SwingElastic.
   With the properties @WidgetMinSize and @WidgetMaxSize you can configure size 
   constraints for the widget itself. You can, for example, limit the gauge to not 
   shrink below a specified width or height. */
EW_DEFINE_FIELDS( WidgetSetGaugeConfig, WidgetSetWidgetConfig )
  EW_PROPERTY( Cover,           ResourcesBitmap )
  EW_PROPERTY( Needle,          ResourcesBitmap )
  EW_PROPERTY( Scale,           ResourcesBitmap )
  EW_PROPERTY( SwingDuration,   XInt32 )
  EW_PROPERTY( TrackRightColor, XColor )
  EW_PROPERTY( TrackRightThickness, XFloat )
  EW_PROPERTY( TrackRightRadius, XFloat )
  EW_PROPERTY( TrackLeftColor,  XColor )
  EW_PROPERTY( TrackLeftThickness, XFloat )
  EW_PROPERTY( TrackLeftRadius, XFloat )
  EW_PROPERTY( CoverTint,       XColor )
  EW_PROPERTY( CoverFrame,      XInt32 )
  EW_PROPERTY( NeedleMaxAngle,  XFloat )
  EW_PROPERTY( NeedleMinAngle,  XFloat )
  EW_PROPERTY( NeedleRadius,    XFloat )
  EW_PROPERTY( NeedlePivot,     XPoint )
  EW_PROPERTY( NeedleTint,      XColor )
  EW_PROPERTY( NeedleFrame,     XInt32 )
  EW_PROPERTY( CenterOffset,    XPoint )
  EW_PROPERTY( ScaleTint,       XColor )
  EW_PROPERTY( ScaleFrame,      XInt32 )
  EW_PROPERTY( WidgetMaxSize,   XPoint )
  EW_PROPERTY( WidgetMinSize,   XPoint )
  EW_PROPERTY( NeedleRotate,    XBool )
  EW_PROPERTY( TrackLeftRoundedStart, XBool )
  EW_PROPERTY( TrackLeftRoundedEnd, XBool )
  EW_PROPERTY( TrackRightRoundedStart, XBool )
  EW_PROPERTY( TrackRightRoundedEnd, XBool )
  EW_PROPERTY( SwingElastic,    XBool )
EW_END_OF_FIELDS( WidgetSetGaugeConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::GaugeConfig' */
EW_DEFINE_METHODS( WidgetSetGaugeConfig, WidgetSetWidgetConfig )
EW_END_OF_METHODS( WidgetSetGaugeConfig )

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetCover()' */
void WidgetSetGaugeConfig_OnSetCover( WidgetSetGaugeConfig _this, ResourcesBitmap 
  value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetNeedleMaxAngle()' */
void WidgetSetGaugeConfig_OnSetNeedleMaxAngle( WidgetSetGaugeConfig _this, XFloat 
  value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetNeedleMinAngle()' */
void WidgetSetGaugeConfig_OnSetNeedleMinAngle( WidgetSetGaugeConfig _this, XFloat 
  value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetNeedle()' */
void WidgetSetGaugeConfig_OnSetNeedle( WidgetSetGaugeConfig _this, ResourcesBitmap 
  value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetScale()' */
void WidgetSetGaugeConfig_OnSetScale( WidgetSetGaugeConfig _this, ResourcesBitmap 
  value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetWidgetMaxSize()' */
void WidgetSetGaugeConfig_OnSetWidgetMaxSize( WidgetSetGaugeConfig _this, XPoint 
  value );

#ifdef __cplusplus
  }
#endif

#endif /* _WidgetSetGaugeConfig_H */

/* Embedded Wizard */
