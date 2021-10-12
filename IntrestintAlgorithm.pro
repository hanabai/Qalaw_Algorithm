QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

#DEFINES+=EASYMAP
#DEFINES +=GREEDYALGORITHM
#DEFINES +=LINKEDLIST
DEFINES +=EASYMAP

include (./Chapter2_GreedyAlgorithm/GreedyAlgorithm.pri)
include (./Learn1_Map/EasyMap.pri)
include (./Lineary_LinkedList/LinkedList.pri)

DISTFILES += \
    README.md

HEADERS +=

