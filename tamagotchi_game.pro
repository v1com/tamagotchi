QT += widgets multimedia

HEADERS += \
    gamewidget.h \
    game/pet.h \
    game/health.h \
    pointsbar.h \
    game/energy.h \
    game/happiness.h \
    game/satiety.h \
    game/racing/racing.h \
    game/racing/track.h \
    game/racing/player.h \
    game/racing/enemy.h \
    game/racing/score.h \
    authorization.h \
    screencontroller.h \
    gamescreen.h \
    game/refuse.h \
    gameover.h \
    game/feeding/basket.h \
    game/feeding/feeding.h \
    game/feeding/food.h \
    game/feeding/scorefood.h \
    menuforgames.h

SOURCES += \
    main.cpp \
    gamewidget.cpp \
    game/pet.cpp \
    game/health.cpp \
    pointsbar.cpp \
    game/energy.cpp \
    game/happiness.cpp \
    game/satiety.cpp \
    game/racing/racing.cpp \
    game/racing/track.cpp \
    game/racing/player.cpp \
    game/racing/enemy.cpp \
    game/racing/score.cpp \
    authorization.cpp \
    screencontroller.cpp \
    gamescreen.cpp \
    game/refuse.cpp \
    gameover.cpp \
    game/feeding/basket.cpp \
    game/feeding/feeding.cpp \
    game/feeding/food.cpp \
    game/feeding/scorefood.cpp \
    menuforgames.cpp

FORMS += \
    authorization.ui \
    gamescreen.ui \
    gameover.ui

RESOURCES += \
    resources/rsc.qrc

OTHER_FILES +=
