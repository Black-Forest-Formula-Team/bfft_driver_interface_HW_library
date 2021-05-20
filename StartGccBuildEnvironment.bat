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
set GettingStartedLink=getting-started-stm32h745-discovery
cmd /K Application\Project\GCC\devenv.cmd
