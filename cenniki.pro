QT += qml quick widgets
CONFIG += c++11
unix: LIBS += -L/usr/lib/ -lboost_serialization
win32: {
    INCLUDEPATH += "$(BOOST_ROOT)"
    LIBS += "$(BOOST_LIBRARYDIR)/libboost_serialization-vc140-mt-1_59.lib"
}
RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
#QML_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    maintreemodel.h \
    treecomponent.h \
    treecomposite.h \
    itempdf.h \
    qstring_serialization.h \
    serialization.h

SOURCES += \
    main.cpp \
    maintreemodel.cpp \
    treecomposite.cpp \
    treecomponent.cpp \
    itempdf.cpp
