cmake_minimum_required(VERSION 3.15) # Проверка версии CMake.
									 # Если версия установленой программы
									 # старее указаной, произайдёт аварийный выход.

set(PROJECT_NAME Lab_6)				 # задать константу с именем проекта		 
project("${PROJECT_NAME}")			 # имя проекта	


set(CMAKE_CXX_STANDARD 17)			 # устанавливаем 17 стандарт языка
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include_directories("inc/")
include_directories("src/")			 # указываем, где искать файлы заголовков

add_executable("${PROJECT_NAME}" Lab_6.cpp
								 inc/has8.h
								 inc/num_swap.h
								 inc/mas_fill.h
								 src/has8.cpp
								 src/num_swap.cpp
								 src/mas_fill.cpp)	# добавить исполняемый файл



set(PROJECT_NAME Lab_6-build)				 # задать константу с именем проекта		 
project("${PROJECT_NAME}")			 # имя проекта	


set(CMAKE_CXX_STANDARD 17)			 # устанавливаем 17 стандарт языка
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include_directories("inc/")
include_directories("src/")			 # указываем, где искать файлы заголовков

add_executable("${PROJECT_NAME}" Lab_6.cpp
								 inc/has8.h
								 inc/num_swap.h
								 inc/mas_fill.h
								 src/has8.cpp
								 src/num_swap.cpp
								 src/mas_fill.cpp)	# добавить исполняемый файл