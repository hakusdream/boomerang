SET(target_CPP
    basic_tests.cpp
    testloader.cpp
)
SET(target_INCLUDE
    testloader.h
    basic_tests.h
)

SET(target_SOURCES
    ${target_CPP}
    ${target_INCLUDE}
)
SET(target_INCLUDE_DIR
    ..
)
INCLUDE_DIRECTORIES(${target_INCLUDE_DIR})

#PROTOBUF_GENERATE_CPP(PROTO_SRCS PROTO_HDRS codeblock.proto)

ADD_EXECUTABLE(g_tests ${target_SOURCES}) # ${PROTO_SRCS} ${PROTO_HDRS})
TARGET_LINK_LIBRARIES(g_tests ${GTest_LIBRARIES}) # ${PROTOBUF_LIBRARIES}

if (NOT WIN32)
    TARGET_LINK_LIBRARIES(g_tests pthread)
endif()

qt5_use_modules(g_tests Core Test)

add_test( NAME g_tests COMMAND $<TARGET_FILE:g_tests> )
