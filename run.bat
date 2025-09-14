@echo off
REM =====================================================
REM Universal C++ run shortcut: run filename_without_extension
REM Works on both 32-bit and 64-bit Windows
REM =====================================================

if "%1"=="" (
    echo Usage: run filename_without_extension
    goto :eof
)

REM Detect system architecture
set ARCH=%PROCESSOR_ARCHITECTURE%
echo Detected architecture: %ARCH%

REM Select compiler path based on architecture
REM Adjust these paths according to where you installed MinGW-w64
if "%ARCH%"=="AMD64" (
    set COMPILER=C:\mingw64\bin\g++
) else (
    set COMPILER=C:\mingw32\bin\g++
)

REM Check if compiler exists
if not exist "%COMPILER%" (
    echo Compiler not found at %COMPILER%
    echo Please install MinGW and adjust paths in run.bat
    goto :eof
)

REM Compile
"%COMPILER%" "%1.cpp" -o "%1.exe"
if errorlevel 1 (
    echo Compilation failed.
    goto :eof
)

REM Run program
"%1.exe"

REM Pause to see output
pause
