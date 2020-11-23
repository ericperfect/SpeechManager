# 此处指定可执行文件的名称，这个可执行程序program就是用来测试library的用例
add_executable(test test.cpp)

# 引用自己开发的library，第三方库，共享库，静态库等
target_include_directories(test PRIVATE .. ../)  # target_include_directories：给目标指定头文件包含路径
target_link_libraries(test SpeechManager) # target_link_libraries：给目标指定链接的第三方库的路径位置