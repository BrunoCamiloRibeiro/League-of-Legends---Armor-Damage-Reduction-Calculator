@echo off
setlocal enabledelayedexpansion

echo ================================
echo Compilando o projeto completo...
echo ================================

set "cfiles="

for /R src %%f in (*.c) do (
    set "cfiles=!cfiles! %%f"
)

if not exist Build mkdir Build

gcc %cfiles% ^
    -o Build\programa.exe ^
    -IIncludes ^
    -Wall ^
    -lgdi32


if %errorlevel% neq 0 (
    echo ================================
    echo Erro na compilacao!
    echo ================================
    pause
    exit /b %errorlevel%
)

echo ================================
echo Compilacao concluida com sucesso!
echo ================================

echo ================================
echo Executando o programa...
echo ================================
Build\programa.exe
