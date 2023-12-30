cmake_minimum_required (VERSION 3.21)

find_package (Qt6 REQUIRED COMPONENTS Core Network WebSockets)
set (QtLib_bm Qt6::Core Qt6::Network Qt6::WebSockets)

find_package (Qt6 REQUIRED COMPONENTS Gui Quick Widgets Qml Svg QuickControls2)
set (QtLib_ui Qt6::Gui Qt6::Quick Qt6::Widgets Qt6::Qml Qt6::Svg Qt6::QuickControls2)

project (zminni)

qt_add_executable(zminni main.cpp)

target_link_libraries(zminni
    PUBLIC
        ${QtLib_bm} ${QtLib_ui}
    )
