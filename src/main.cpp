#include "main.h"

#include <stdio.h>

ModMeta __stdcall GetModInfo() {
    static ModMeta meta = {
        "Test Mod",
        "TestMod",
        "1.0.0"
    };

    return meta;
}

void __stdcall ModInit() {
    JAPI_LogInfo("Test mod loaded!");
}