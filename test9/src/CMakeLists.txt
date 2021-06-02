cmake_minimum_required (VERSION 3.5)


option(SECTION1 "print section1 message" OFF)
option(SECTION2 "print section2 message" OFF)
if (SECTION1)
	add_compile_options(-DSECTION1)
endif()

if (SECTION2)
	add_compile_options(-DSECTION2)
endif()


add_executable(main1 main1.c)

if (MYDEBUG)
    add_executable(main2 main2.c)
else()
    message(STATUS "----------------------------no debug---no main2-------------")    
endif()

