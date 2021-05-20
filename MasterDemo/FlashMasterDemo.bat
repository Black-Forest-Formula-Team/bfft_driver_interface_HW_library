@echo off

rem *************************************************************************************************
rem Please set the ABSOLUTE installation path of the ST-LINK utility
rem *************************************************************************************************

set ST-LINK_Utility_Path=C:\Users\maanm\Desktop\ST-LINK Utility

rem *************************************************************************************************
rem Please do NOT change the following settings
rem *************************************************************************************************
set PlatformName=STM32H745-Discovery
set ExternalLoader=MT25TL01G_STM32H745I-DISCO.stldr
set BuildEnvVersion=V9.30
set GettingStartedLink=getting-started-stm32h745discovery
cd ..
call .\Application\Project\GCC\devenv.cmd

echo.
echo *******************************************************************************
echo *
echo * Flashing Embedded Wizard Master Demo for target %PlatformName%
echo *
echo *******************************************************************************
echo.

set APP_FILE=..\..\..\MasterDemo\EmbeddedWizard-%PlatformName%
"%ST-LINK_Utility_Path%/ST-LINK_CLI" -P %APP_FILE%.hex -EL "%STLINK_EXT_FLASH_LOADER%"
"%ST-LINK_Utility_Path%/ST-LINK_CLI" -Rst
