echo off
setlocal enabledelayedexpansion
color 3B
mode con:cols=117 lines=50
cls
echo Author  : mahajant99/Hacker's Club 
echo Version : 7.0
echo.
echo ::                             ------------------------------------------------------------                        ::
echo ::                             -                Recovery FLASHING TOOLKIT                 -                        ::
echo ::                             -                     Redmi Y2/S2/YSL                      -                        ::
echo ::                             -                         by mahajant99/Hacker's Club      -                        ::
echo ::                             ------------------------------------------------------------
echo.                               
echo.
echo DISCLAIMER: 
echo.
echo         * This is Exclusively for Redmi Note 3  and if you try this any other device
echo           probably you will be bricking your device!!
echo. 
echo         * I am not responsible for bricked devices, dead SD cards, thermonuclear war, 
echo           or you getting fired because the alarm app failed.
echo. 
echo ---------------------------------------------------------------------------------------------------------------------                                                        
echo ---------------------------------------------------------------------------------------------------------------------
echo.
echo         *Put your device in fastboot mode by pressing Volume down + Power button
echo.
pause
cls
echo Author  : mahajant99/Hacker's Club 
echo Version : 7.0
echo.
echo ::                             ------------------------------------------------------------                        ::
echo ::                             -                       TWRP TOOLKIT                       -                        ::
echo ::                             -                      Redmi Y2/S2/YSL                     -                        ::
echo ::                             -                         by mahajant99/Hacker's Club      -                        ::
echo ::                             ------------------------------------------------------------
echo.                               
echo.
fastboot flash recovery recovery.img
fastboot boot recovery.img
pause
echo.
echo         * You have successfully flashed TWRP(3.2.1).....Don't forget to like my thread....
cls
echo.
echo.
