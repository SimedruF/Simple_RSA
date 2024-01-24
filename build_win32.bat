@REM Build for Visual Studio compiler. Run your copy of vcvars32.bat or vcvarsall.bat to setup command-line compiler.
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"
@set OUT_DIR=Debug
@set OUT_EXE=example_win32_directx9
@set INCLUDES=/I\imgui\ /I\imgui\backends\ /I "%DXSDK_DIR%/Include"
@set SOURCES=main.cpp RSAApp.cpp \imgui\backends\imgui_impl_dx9.cpp \imgui\backends\imgui_impl_win32.cpp \imgui\imgui*.cpp
@set LIBS=/LIBPATH:"%DXSDK_DIR%/Lib/x86" d3d9.lib
mkdir %OUT_DIR%
cl /nologo /Zi /MD /utf-8 %INCLUDES% /D UNICODE /D _UNICODE %SOURCES% /Fe%OUT_DIR%/%OUT_EXE%.exe /Fo%OUT_DIR%/ /link %LIBS%
