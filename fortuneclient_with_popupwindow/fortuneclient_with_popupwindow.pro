QT += network widgets
requires(qtConfig(combobox))

HEADERS       = client.h \
                popup.h
SOURCES       = client.cpp \
                popup.cpp \
                main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/network/fortuneclient
INSTALLS += target
