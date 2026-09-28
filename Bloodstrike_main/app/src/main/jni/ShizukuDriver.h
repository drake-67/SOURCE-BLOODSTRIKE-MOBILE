#pragma once
#include <unistd.h>
#include <fcntl.h>
#include <cstdint>
#include <string>
#include <sys/uio.h>
class ShizukuDriver {
public:
pid_t pid = 0;
uintptr_t base = 0;
bool connected = false;
bool attach(const char* pkg = "com.netease.newspike");
template<typename T> T read(uintptr_t addr);
template<typename T> bool write(uintptr_t addr, T val);
};
inline ShizukuDriver* driver = new ShizukuDriver();
