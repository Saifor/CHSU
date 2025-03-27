@echo off
chcp 65001 > nul

if "%1"=="" (
    echo Ошибка: Не указан путь к директории.
    exit /b
)

if not exist "%1" (
    echo Ошибка: Указанная директория не существует.
    exit /b
)

dir "%1" /b /a-d > files_list.txt

echo Список файлов в директории "%1" сохранен в файле files_list.txt