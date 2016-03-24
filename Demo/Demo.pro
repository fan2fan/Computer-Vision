QT += core
QT -= gui

TARGET = Demo
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

INCLUDEPATH += C:\opencv\OpenCV\opencv_use\include_use\
                              C:\opencv\OpenCV\opencv_use\include_use\opencv\
                               C:\opencv\OpenCV\opencv_use\include_use\opencv2\

LIBS += C:\opencv\OpenCV\opencv_use\lib\libopencv_core300.dll.a\
C:\opencv\OpenCV\opencv_use\lib\libopencv_highgui300.dll.a\
C:\opencv\OpenCV\opencv_use\lib\libopencv_imgcodecs300.dll.a\
C:\opencv\OpenCV\opencv_use\lib\libopencv_imgproc300.dll.a\
