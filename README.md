Ray-lib CMake Template

Template for start coding with Ray-lib

Instructions:<br />
1- Download https://github.com/raysan5/raylib/releases/download/5.0/raylib-5.0_win64_mingw-w64.zip and extract it to C:<br />
2- Add these lines to CMakeLists.txt:<br />
<br />
```include_directories(C:/OpenGl/Engines/raylib-5.0_win64_mingw-w64/include)```
```target_link_libraries(${PROJECT_NAME} C:/OpenGl/Engines/raylib-5.0_win64_mingw-w64/lib/libraylibdll.a)```
```configure_file(C:/OpenGl/Engines/raylib-5.0_win64_mingw-w64/lib/raylib.dll ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)```<br />
3- Don't forget to set build chain to mingw64
