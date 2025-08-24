@echo off
setlocal enabledelayedexpansion

echo ================================
echo Compilando o projeto completo...
echo ================================

:: Define a variável `cfiles` como uma lista vazia
set "cfiles="

:: Percorre todos os arquivos .c na pasta 'src' e subpastas e adiciona-os à variável
for /R src %%f in (*.c) do (
    set "cfiles=!cfiles! %%f"
)

:: Cria a pasta 'Build' se não existir
if not exist Build mkdir Build

:: Compila todos os .c em src e subpastas
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
